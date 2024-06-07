class CfgPatches {
    class uagpmc_servers {
        authors[] = {"uagpmc","zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "uagpmc_servers";
        requiredVersion = 2.16;
        requiredAddons[] = {"ace_common"};
        weapons[] = {};
        units[] = {};
    };
};

class RscControlsGroupNoScrollbars;
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
    class controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupMultiplayer: GroupSingleplayer {
			h = "(6 * 	1.5) * 	(pixelH * pixelGrid * 2)";
            class Controls: Controls {
                class ServerBrowser;
                class JoinPublicServer: ServerBrowser {
                    idc = -1;
                    text = "UAG: Public";
                    tooltip = "Connect to the UAG Public Server";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['arma.uagpmc.com', 2302, '']";
                };
                class JoinPrivateServer: ServerBrowser {
                    idc = -1;
                    text = "UAG: Private";
                    tooltip = "Connect to the UAG Private (Ops) Server";
                    y = "(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['arma.uagpmc.com', 2312, 'lemon']";
                };
            };
        };
    };
};