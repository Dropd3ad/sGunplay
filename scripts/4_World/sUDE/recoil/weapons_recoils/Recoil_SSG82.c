modded class SSG82Recoil {
	override void initRecoilParameters() {
		handsRanges        = { -1.165, 3.285,  7.265,  7.595};	
		handsAccumSpeed    = 0.955;
		handsResetSpeed    = 0.800;

		misalignIntensity  = {0.250, 0.250};
		misalignAccumSpeed = 0.955;
		misalignResetSpeed = 0.500;
	
		mouseRanges        = { 0.175, 0.250,  1.550,  2.275};
		mouseTime          = 0.200;
	
		kick               = 0.045;
		kickResetTime      = 3.125;
	}
}