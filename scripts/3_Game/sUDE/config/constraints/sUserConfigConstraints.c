modded class SUserConfigConstraints {
	
	static SUserConfigConstraints_Gunplay gunplay(bool reload = false) {
		getInstance().load(SUserConfigConstraints_Gunplay, reload);
		return SUserConfigConstraints_Gunplay.Cast(getInstance().getLoadedModules().Get(SUserConfigConstraints_Gunplay));
	}

	override void onPreload() {
		super.onPreload();
		SUserConfigConstraints.gunplay();
	}
	
}

modded class SyncSUserConfigConstraintsRPC {
	override void onSetup(ParamsWriteContext ctx) {
		super.onSetup(ctx);
		ctx.Write(SUserConfigConstraints.gunplay());
	}
}