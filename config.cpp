class CfgPatches
{
	class aceax_compat_tfn_helmets
	{
		author = "Harrison";
		requiredAddons[] = {"tfn_helmets", "aceax_compat_tfl_headgear"};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgVehicles.hpp"

class XtdGearModels
{
	class CfgWeapons
	{
		class tfn_opscore_maritime
		{
			label = "[TFN] Opscore Maritime (MC Cover)";
			author = "Task Force North";
			options[] = {"headsetModel", "headsetState", "cover", "strobeType", "chinStrap", "helmetLight"};
			class headsetModel
			{
				label = "Headset Model";
				values[] = {"c3fde", "c3od", "amp"};
				changeingame = 0;
				class c3fde
				{
					label = "C3 (FDE)";
					description = "ComTac III (FDE)";
				};
				class c3od
				{
					label = "C3 (OD)";
					description = "ComTac III (OD)";
				};
				class amp
				{
					label = "AMP";
					description = "Ops-Core AMP";
				};
			};
			class headsetState
			{
				label = "Headset (ACE)";
				values[] = {"headsetOn", "headsetOff"};
				changeingame = 1;
				changedelay = 0.5;
				class headsetOn
				{
					label = "On";
					icon = "aceax_compat_tfl_headgear\data\headset.paa";
					actionlabel = "Lower Headset";
				};
				class headsetOff
				{
					label = "Off";
					icon = "aceax_compat_tfl_headgear\data\noheadset.paa";
					actionlabel = "Raise Headset";
				};
			};
			class cover
			{
				label = "Helmet Cover";
				values[] = {"cover1", "cover2", "scrim"};
				changeingame = 0;
				class cover1
				{
					label = "1";
				};
				class cover2
				{
					label = "2";
				};
				class scrim
				{
					label = "Scrim";
				};
			};
			class strobeType
			{
				label = "Strobe Type";
				values[] = {"noStrobe","h5","h6","manta"};
				changeingame = 0;
				class noStrobe
				{
					label = "None";
				};
				class h5
				{
					label = "HEL-STAR 5";
				};
				class h6
				{
					label = "HEL-STAR 6";
				};
				class manta
				{
					label = "Manta";
				};
			};
			class chinStrap
			{
				label = "Chin strap (ACE)";
				values[] = {"chinStrapOn", "chinStrapOff"};
				changeingame = 1;
				changedelay = 0.5;
				class chinStrapOn
				{
					label = "On";
					actionlabel = "Wear Chin Strap";
				};
				class chinStrapOff
				{
					label = "Off";
					actionlabel = "Remove Chin Strap";
				};
			};
			class helmetLight
			{
				label = "Helmet Light";
				values[] = {"helmetLightOn", "helmetLightOff"};
				changeingame = 0;
				class helmetLightOn
				{
					label = "On";
				};
				class helmetLightOff
				{
					label = "Off";
				};
			};
		};
	};
};

class XtdGearInfos
{
	class CfgWeapons
	{
		/*Organization follows key:value combination order, e.g.:
		Comtac 3 FDE
			C3 FDE (Headset On)
				C3 FDE (Headset On / Cover 1)
		*/

		//Comtac 3 FDE
		class TFN_MT1_C3_FDE_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H5_FDE_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H6_FDE_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_Manta_FDE_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 FDE (Headset On / Cover 2)
		class TFN_MT2_C3_FDE_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_FDE_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H6_FDE_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_Manta_FDE_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 FDE (Headset On / Scrim)
		class TFN_MT2_C3_SCRIM_FDE_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_Scrim_C3_FDE_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 FDE (Headset On / Cover 1 / Chin Strap Off)
		class TFN_MT1_C3_FDE_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H5_FDE_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H6_FDE_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_Manta_FDE_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		
		//C3 FDE (Headset On / Cover 2 / Chin Strap Off)
		class TFN_MT2_C3_FDE_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_FDE_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H6_FDE_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_Manta_FDE_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		
		//C3 FDE (Headset On / Scrim / Chin Strap Off)
		class TFN_MT2_C3_SCRIM_FDE_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_Scrim_C3_FDE_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		
		//C3 FDE (Headset Off / Cover 1 / Chin Strap On)
		class TFN_MT1_C3_FDE_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H5_FDE_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H6_FDE_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_Manta_FDE_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 FDE (Headset Off / Cover 2 / Chin Strap On)
		class TFN_MT2_C3_FDE_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_FDE_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H6_FDE_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_Manta_FDE_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 FDE (Headset Off / Scrim / Chin Strap On)
		class TFN_MT2_C3_SCRIM_FDE_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_Scrim_C3_FDE_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 FDE (Headset Off / Cover 1 / Chin Strap Off)
		class TFN_MT1_C3_FDE_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H5_FDE_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H6_FDE_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_Manta_FDE_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		
		//C3 FDE (Headset Off / Cover 2 / Chin Strap Off)
		class TFN_MT2_C3_FDE_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_FDE_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H6_FDE_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_Manta_FDE_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		
		//C3 FDE (Headset Off / Scrim / Chin Strap Off)
		class TFN_MT2_C3_SCRIM_FDE_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_Scrim_C3_FDE_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3fde";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};


		//Comtac 3 OD
		class TFN_MT1_C3_OD_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H5_OD_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H6_OD_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_Manta_OD_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 OD (Headset On / Cover 2)
		class TFN_MT2_C3_OD_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_OD_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H6_OD_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_Manta_OD_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 OD (Headset On / Scrim)
		class TFN_MT2_C3_SCRIM_OD_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_Scrim_C3_OD_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 OD (Headset On / Cover 1 / Chin Strap Off)
		class TFN_MT1_C3_OD_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H5_OD_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H6_OD_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_Manta_OD_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		
		//C3 OD (Headset On / Cover 2 / Chin Strap Off)
		class TFN_MT2_C3_OD_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_OD_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H6_OD_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_Manta_OD_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		
		//C3 OD (Headset On / Scrim / Chin Strap Off)
		class TFN_MT2_C3_SCRIM_OD_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_Scrim_C3_OD_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		
		//C3 OD (Headset Off / Cover 1 / Chin Strap On)
		class TFN_MT1_C3_OD_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H5_OD_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H6_OD_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_Manta_OD_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 OD (Headset Off / Cover 2 / Chin Strap On)
		class TFN_MT2_C3_OD_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_OD_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H6_OD_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_Manta_OD_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 OD (Headset Off / Scrim / Chin Strap On)
		class TFN_MT2_C3_SCRIM_OD_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_Scrim_C3_OD_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//C3 OD (Headset Off / Cover 1 / Chin Strap Off)
		class TFN_MT1_C3_OD_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H5_OD_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_H6_OD_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_C3_Manta_OD_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		
		//C3 OD (Headset Off / Cover 2 / Chin Strap Off)
		class TFN_MT2_C3_OD_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_OD_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H6_OD_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_Manta_OD_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		
		//C3 OD (Headset Off / Scrim / Chin Strap Off)
		class TFN_MT2_C3_SCRIM_OD_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_C3_H5_Scrim_C3_OD_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "c3od";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};


		//Ops-Core AMP
		class TFN_MT1_AMP_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_Light_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_H5_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_H5_Light_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_H6_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_H6_Light_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_Manta_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_Manta_Light_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightON";
		};
		
		//AMP (Headset On / Cover 2)
		class TFN_MT2_AMP_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_Light_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H5_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_H5_Light_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H6_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_H6_Light_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightON";
		};
		class TFN_MT2_AMP_Manta_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_Manta_Light_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		
		//AMP (Headset On / Scrim)
		class TFN_MT2_AMP_SCRIM_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_H5_Scrim_AMP_Light_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_Scrim_Light_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H5_Scrim_AMP_1_B_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		
		//AMP (Headset On / Cover 1 / Chin Strap Off)
		class TFN_MT1_AMP_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_Light_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_H5_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_H5_Light_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_H6_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_H6_Light_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_Manta_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_Manta_Light_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};

		//AMP (Headset On / Cover 2 / Chin Strap Off)
		class TFN_MT2_AMP_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_Light_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H5_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_H5_Light_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H6_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_H6_Light_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_Manta_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_Manta_Light_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		
		//AMP (Headset On / Scrim / Chin Strap Off)
		class TFN_MT2_AMP_Scrim_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_Scrim_Light_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H5_Scrim_AMP_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_H5_Scrim_AMP_Light_1_U_On
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOn";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		
		//AMP (Headset Off / Cover 1 / Chin Strap On)
		class TFN_MT1_AMP_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_Light_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_H5_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_H5_Light_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_H6_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_H6_Light_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_Manta_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_Manta_Light_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};	
		
		//AMP (Headset Off / Cover 2 / Chin Strap On)
		class TFN_MT2_AMP_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_Light_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H5_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_H5_Light_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H6_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_H6_Light_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_Manta_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_Manta_Light_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		
		//AMP (Headset Off / Scrim / Chin Strap On)
		class TFN_MT2_AMP_SCRIM_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_Scrim_Light_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H5_Scrim_AMP_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_H5_Scrim_AMP_Light_1_B_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOn";
			helmetLight = "helmetLightOn";
		};
		
		//AMP (Headset Off / Cover 1 / Chin Strap Off)
		class TFN_MT1_AMP_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_Light_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_H5_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_H5_Light_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_H6_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_H6_Light_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT1_AMP_Manta_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT1_AMP_Manta_Light_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover1";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		
		//AMP (Headset Off / Cover 2 / Chin Strap Off)
		class TFN_MT2_AMP_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_Light_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H5_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_H5_Light_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H6_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_H6_Light_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "h6";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_Manta_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_Manta_Light_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "cover2";
			strobeType = "manta";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		
		//AMP (Headset Off / Scrim / Chin Strap Off)
		class TFN_MT2_AMP_SCRIM_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_Scrim_Light_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
		class TFN_MT2_AMP_H5_Scrim_AMP_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "h5";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOff";
		};
		class TFN_MT2_AMP_H5_Scrim_AMP_Light_1_U_Off
		{
			model = "tfn_opscore_maritime";
			headsetModel = "amp";
			headsetState = "headsetOff";
			cover = "scrim";
			strobeType = "noStrobe";
			chinStrap = "chinStrapOff";
			helmetLight = "helmetLightOn";
		};
	};
};
