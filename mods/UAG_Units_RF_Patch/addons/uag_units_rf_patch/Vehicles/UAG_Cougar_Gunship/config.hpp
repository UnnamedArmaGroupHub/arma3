/* UAG Cougar Gunship
 * Based on: I_E_EC_02_RF
 * From: RF_Air_heli_medium_ec
 * Changes:
 * - ???
 */

class CfgVehicles {
    class I_E_EC_02_RF;

    class UAG_Cougar_Gunship_PARENTPROXY: I_E_EC_02_RF {
        scope = 0;
        
        class EventHandlers;
        class Components;
    };

    class UAG_Cougar_Gunship: UAG_Cougar_Gunship_PARENTPROXY {
        scope = 2;
        displayName = "UAG Cougar Gunship";
        hiddenSelectionsTextures[] = {
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_exterior_03_ldf_co_uag.paa",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_int_cargo_co_uag.paa",
            "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_adds_03_ldf_co_uag.paa",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_exterior_03_ldf_co_uag.paa",
            "z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_int_cargo_co_uag.paa"
        };
        crew = "UAG_Contractor";
        faction = "UAG";
        side = 1;

        class EventHandlers: EventHandlers {
            // this is a hack to get around issues with the vehicle textures not loading properly
            postinit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle; (_this select 0) setObjectTextureGlobal [0, 'z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_exterior_03_ldf_co_uag.paa']; (_this select 0) setObjectTextureGlobal [1, 'z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_int_cargo_co_uag.paa']; (_this select 0) setObjectTextureGlobal [3, 'z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_adds_03_ldf_co_uag.paa']; (_this select 0) setObjectTextureGlobal [4, 'z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_exterior_03_ldf_co_uag.paa']; (_this select 0) setObjectTextureGlobal [5, 'z\UAG_Units_RF_Patch\addons\uag_units_rf_patch\Vehicles\UAG_Cougar_Gunship\as332_int_cargo_co_uag.paa']; (_this select 0) setWaterLeakiness 0;};";
        };

        class Components: Components {
            class TransportPylonsComponent {
                uiPicture = "\lxRF\air_rf\heli_medium_ec\data\UI\heli_medium_ec_02_3DEN_CA.paa";

                class Presets {
                    class HAT {
                        displayName = "Heavy AT";
                        attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_4Rnd_LG_scalpel"};
                    };
                };
                class Pylons {
                    class PylonLeft1 {
                        attachment = "PylonRack_4Rnd_LG_scalpel";
                        hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON_HELI","UNI_SCALPEL","20MM_TWIN_CANNON","WEAPON_PODS_RF"};
                        priority = 5;
                        turret[] = {0};
                        UIposition[] = {0.06,0.4};
                    };
                    class PylonLeft2: PylonLeft1 {
                        attachment = "PylonRack_1Rnd_Missile_AGM_01_F";
                        priority = 4;
                        UIposition[] = {0.08,0.35};
                    };
                    class PylonRight1: PylonLeft1 {
                        attachment = "PylonRack_1Rnd_Missile_AGM_01_F";
                        mirroredMissilePos = 1;
                        UIposition[] = {0.59,0.4};
                    };
                    class PylonRight2: PylonLeft2 {
                        attachment = "PylonRack_4Rnd_LG_scalpel";
                        mirroredMissilePos = 2;
                        UIposition[] = {0.57,0.35};
                    };
                };
            };
        };
    };
};