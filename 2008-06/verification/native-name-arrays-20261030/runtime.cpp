#include "util/Name.h"
#include <cstdio>
#include <cstring>
namespace RBX { namespace Network { extern char sClient[]; } }
namespace RBX { namespace Network { extern char sPlayer[]; } }
namespace RBX { namespace Network { extern char sPlayers[]; } }
namespace RBX { namespace Network { extern char sReplicator[]; } }
namespace RBX { namespace Network { extern char sServer[]; } }
namespace RBX { namespace Soundscape { extern char sSoundChannel[]; } }
namespace RBX { namespace Soundscape { extern char sSoundService[]; } }
namespace RBX { namespace Stats { extern char sStats[]; } }
namespace RBX { namespace Stats { extern char sStatsItem[]; } }
namespace RBX { extern char sAccoutrement[]; }
namespace RBX { extern char sArrowTool[]; }
namespace RBX { extern char sBackpack[]; }
namespace RBX { extern char sBackpackItem[]; }
namespace RBX { extern char sBodyColors[]; }
namespace RBX { extern char sBoxSelectCommand[]; }
namespace RBX { extern char sControllerService[]; }
namespace RBX { extern char sDataModel[]; }
namespace RBX { extern char sDebrisService[]; }
namespace RBX { extern char sDebugSettings[]; }
namespace RBX { extern char sExplosion[]; }
namespace RBX { extern char sFallingDown[]; }
namespace RBX { extern char sFlag[]; }
namespace RBX { extern char sFlagStand[]; }
namespace RBX { extern char sFlagStandService[]; }
namespace RBX { extern char sFlying[]; }
namespace RBX { extern char sFreefall[]; }
namespace RBX { extern char sGameSettings[]; }
namespace RBX { extern char sGettingUp[]; }
namespace RBX { extern char sGlobalSettings[]; }
namespace RBX { extern char sGroupDragTool[]; }
namespace RBX { extern char sHat[]; }
namespace RBX { extern char sHint[]; }
namespace RBX { extern char sHopperBin[]; }
namespace RBX { extern char sHumanoid[]; }
namespace RBX { extern char sJumping[]; }
namespace RBX { extern char sLegacyHopperService[]; }
namespace RBX { extern char sLocalBackpack[]; }
namespace RBX { extern char sLocalBackpackItem[]; }
namespace RBX { extern char sMessage[]; }
namespace RBX { extern char sMouse[]; }
namespace RBX { extern char sNetworkSettings[]; }
namespace RBX { extern char sNewNullTool[]; }
namespace RBX { extern char sPart[]; }
namespace RBX { extern char sPartDragTool[]; }
namespace RBX { extern char sRunService[]; }
namespace RBX { extern char sRunning[]; }
namespace RBX { extern char sSeat[]; }
namespace RBX { extern char sSeated[]; }
namespace RBX { extern char sSelection[]; }
namespace RBX { extern char sShirt[]; }
namespace RBX { extern char sShirtGraphic[]; }
namespace RBX { extern char sSkin[]; }
namespace RBX { extern char sSky[]; }
namespace RBX { extern char sSpawnLocation[]; }
namespace RBX { extern char sSpawnerService[]; }
namespace RBX { extern char sSpecialShape[]; }
namespace RBX { extern char sStarterPackService[]; }
namespace RBX { extern char sTexture[]; }
namespace RBX { extern char sTimerService[]; }
namespace RBX { extern char sTool[]; }
namespace RBX { extern char sToolMouseCommand[]; }
namespace RBX { extern char sVisit[]; }
namespace RBX { extern char sWorkspace[]; }
extern char sStockSound[];
int main() {
 { const RBX::Name& n = RBX::Name::declare< ::RBX::Network::sClient >();
   if (std::strcmp(n.c_str(), "NetworkClient") || &n != &RBX::Name::declare< ::RBX::Network::sClient >()) return 1; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::Network::sPlayer >();
   if (std::strcmp(n.c_str(), "Player") || &n != &RBX::Name::declare< ::RBX::Network::sPlayer >()) return 2; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::Network::sPlayers >();
   if (std::strcmp(n.c_str(), "Players") || &n != &RBX::Name::declare< ::RBX::Network::sPlayers >()) return 3; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::Network::sReplicator >();
   if (std::strcmp(n.c_str(), "NetworkReplicator") || &n != &RBX::Name::declare< ::RBX::Network::sReplicator >()) return 4; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::Network::sServer >();
   if (std::strcmp(n.c_str(), "NetworkServer") || &n != &RBX::Name::declare< ::RBX::Network::sServer >()) return 5; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::Soundscape::sSoundChannel >();
   if (std::strcmp(n.c_str(), "Sound") || &n != &RBX::Name::declare< ::RBX::Soundscape::sSoundChannel >()) return 6; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::Soundscape::sSoundService >();
   if (std::strcmp(n.c_str(), "SoundService") || &n != &RBX::Name::declare< ::RBX::Soundscape::sSoundService >()) return 7; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::Stats::sStats >();
   if (std::strcmp(n.c_str(), "Stats") || &n != &RBX::Name::declare< ::RBX::Stats::sStats >()) return 8; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::Stats::sStatsItem >();
   if (std::strcmp(n.c_str(), "Item") || &n != &RBX::Name::declare< ::RBX::Stats::sStatsItem >()) return 9; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sAccoutrement >();
   if (std::strcmp(n.c_str(), "Accoutrement") || &n != &RBX::Name::declare< ::RBX::sAccoutrement >()) return 10; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sArrowTool >();
   if (std::strcmp(n.c_str(), "Arrow") || &n != &RBX::Name::declare< ::RBX::sArrowTool >()) return 11; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sBackpack >();
   if (std::strcmp(n.c_str(), "Backpack") || &n != &RBX::Name::declare< ::RBX::sBackpack >()) return 12; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sBackpackItem >();
   if (std::strcmp(n.c_str(), "BackpackItem") || &n != &RBX::Name::declare< ::RBX::sBackpackItem >()) return 13; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sBodyColors >();
   if (std::strcmp(n.c_str(), "BodyColors") || &n != &RBX::Name::declare< ::RBX::sBodyColors >()) return 14; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sBoxSelectCommand >();
   if (std::strcmp(n.c_str(), "BoxSelect") || &n != &RBX::Name::declare< ::RBX::sBoxSelectCommand >()) return 15; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sControllerService >();
   if (std::strcmp(n.c_str(), "ControllerService") || &n != &RBX::Name::declare< ::RBX::sControllerService >()) return 16; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sDataModel >();
   if (std::strcmp(n.c_str(), "DataModel") || &n != &RBX::Name::declare< ::RBX::sDataModel >()) return 17; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sDebrisService >();
   if (std::strcmp(n.c_str(), "Debris") || &n != &RBX::Name::declare< ::RBX::sDebrisService >()) return 18; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sDebugSettings >();
   if (std::strcmp(n.c_str(), "DebugSettings") || &n != &RBX::Name::declare< ::RBX::sDebugSettings >()) return 19; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sExplosion >();
   if (std::strcmp(n.c_str(), "Explosion") || &n != &RBX::Name::declare< ::RBX::sExplosion >()) return 20; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sFallingDown >();
   if (std::strcmp(n.c_str(), "FallingDown") || &n != &RBX::Name::declare< ::RBX::sFallingDown >()) return 21; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sFlag >();
   if (std::strcmp(n.c_str(), "Flag") || &n != &RBX::Name::declare< ::RBX::sFlag >()) return 22; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sFlagStand >();
   if (std::strcmp(n.c_str(), "FlagStand") || &n != &RBX::Name::declare< ::RBX::sFlagStand >()) return 23; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sFlagStandService >();
   if (std::strcmp(n.c_str(), "FlagStandService") || &n != &RBX::Name::declare< ::RBX::sFlagStandService >()) return 24; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sFlying >();
   if (std::strcmp(n.c_str(), "Flying") || &n != &RBX::Name::declare< ::RBX::sFlying >()) return 25; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sFreefall >();
   if (std::strcmp(n.c_str(), "Freefall") || &n != &RBX::Name::declare< ::RBX::sFreefall >()) return 26; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sGameSettings >();
   if (std::strcmp(n.c_str(), "GameSettings") || &n != &RBX::Name::declare< ::RBX::sGameSettings >()) return 27; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sGettingUp >();
   if (std::strcmp(n.c_str(), "GettingUp") || &n != &RBX::Name::declare< ::RBX::sGettingUp >()) return 28; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sGlobalSettings >();
   if (std::strcmp(n.c_str(), "GlobalSettings") || &n != &RBX::Name::declare< ::RBX::sGlobalSettings >()) return 29; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sGroupDragTool >();
   if (std::strcmp(n.c_str(), "GroupDragTool") || &n != &RBX::Name::declare< ::RBX::sGroupDragTool >()) return 30; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sHat >();
   if (std::strcmp(n.c_str(), "Hat") || &n != &RBX::Name::declare< ::RBX::sHat >()) return 31; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sHint >();
   if (std::strcmp(n.c_str(), "Hint") || &n != &RBX::Name::declare< ::RBX::sHint >()) return 32; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sHopperBin >();
   if (std::strcmp(n.c_str(), "HopperBin") || &n != &RBX::Name::declare< ::RBX::sHopperBin >()) return 33; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sHumanoid >();
   if (std::strcmp(n.c_str(), "Humanoid") || &n != &RBX::Name::declare< ::RBX::sHumanoid >()) return 34; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sJumping >();
   if (std::strcmp(n.c_str(), "Jumping") || &n != &RBX::Name::declare< ::RBX::sJumping >()) return 35; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sLegacyHopperService >();
   if (std::strcmp(n.c_str(), "Hopper") || &n != &RBX::Name::declare< ::RBX::sLegacyHopperService >()) return 36; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sLocalBackpack >();
   if (std::strcmp(n.c_str(), "LocalBackpack") || &n != &RBX::Name::declare< ::RBX::sLocalBackpack >()) return 37; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sLocalBackpackItem >();
   if (std::strcmp(n.c_str(), "LocalBackpackItem") || &n != &RBX::Name::declare< ::RBX::sLocalBackpackItem >()) return 38; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sMessage >();
   if (std::strcmp(n.c_str(), "Message") || &n != &RBX::Name::declare< ::RBX::sMessage >()) return 39; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sMouse >();
   if (std::strcmp(n.c_str(), "Mouse") || &n != &RBX::Name::declare< ::RBX::sMouse >()) return 40; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sNetworkSettings >();
   if (std::strcmp(n.c_str(), "NetworkSettings") || &n != &RBX::Name::declare< ::RBX::sNetworkSettings >()) return 41; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sNewNullTool >();
   if (std::strcmp(n.c_str(), "NewNullTool") || &n != &RBX::Name::declare< ::RBX::sNewNullTool >()) return 42; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sPart >();
   if (std::strcmp(n.c_str(), "Part") || &n != &RBX::Name::declare< ::RBX::sPart >()) return 43; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sPartDragTool >();
   if (std::strcmp(n.c_str(), "PartDragTool") || &n != &RBX::Name::declare< ::RBX::sPartDragTool >()) return 44; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sRunService >();
   if (std::strcmp(n.c_str(), "RunService") || &n != &RBX::Name::declare< ::RBX::sRunService >()) return 45; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sRunning >();
   if (std::strcmp(n.c_str(), "Running") || &n != &RBX::Name::declare< ::RBX::sRunning >()) return 46; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sSeat >();
   if (std::strcmp(n.c_str(), "Seat") || &n != &RBX::Name::declare< ::RBX::sSeat >()) return 47; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sSeated >();
   if (std::strcmp(n.c_str(), "Seated") || &n != &RBX::Name::declare< ::RBX::sSeated >()) return 48; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sSelection >();
   if (std::strcmp(n.c_str(), "Selection") || &n != &RBX::Name::declare< ::RBX::sSelection >()) return 49; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sShirt >();
   if (std::strcmp(n.c_str(), "Shirt") || &n != &RBX::Name::declare< ::RBX::sShirt >()) return 50; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sShirtGraphic >();
   if (std::strcmp(n.c_str(), "ShirtGraphic") || &n != &RBX::Name::declare< ::RBX::sShirtGraphic >()) return 51; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sSkin >();
   if (std::strcmp(n.c_str(), "Skin") || &n != &RBX::Name::declare< ::RBX::sSkin >()) return 52; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sSky >();
   if (std::strcmp(n.c_str(), "Sky") || &n != &RBX::Name::declare< ::RBX::sSky >()) return 53; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sSpawnLocation >();
   if (std::strcmp(n.c_str(), "SpawnLocation") || &n != &RBX::Name::declare< ::RBX::sSpawnLocation >()) return 54; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sSpawnerService >();
   if (std::strcmp(n.c_str(), "SpawnerService") || &n != &RBX::Name::declare< ::RBX::sSpawnerService >()) return 55; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sSpecialShape >();
   if (std::strcmp(n.c_str(), "SpecialMesh") || &n != &RBX::Name::declare< ::RBX::sSpecialShape >()) return 56; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sStarterPackService >();
   if (std::strcmp(n.c_str(), "StarterPack") || &n != &RBX::Name::declare< ::RBX::sStarterPackService >()) return 57; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sTexture >();
   if (std::strcmp(n.c_str(), "Texture") || &n != &RBX::Name::declare< ::RBX::sTexture >()) return 58; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sTimerService >();
   if (std::strcmp(n.c_str(), "Timer") || &n != &RBX::Name::declare< ::RBX::sTimerService >()) return 59; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sTool >();
   if (std::strcmp(n.c_str(), "Tool") || &n != &RBX::Name::declare< ::RBX::sTool >()) return 60; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sToolMouseCommand >();
   if (std::strcmp(n.c_str(), "ToolMouseCommand") || &n != &RBX::Name::declare< ::RBX::sToolMouseCommand >()) return 61; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sVisit >();
   if (std::strcmp(n.c_str(), "Visit") || &n != &RBX::Name::declare< ::RBX::sVisit >()) return 62; }
 { const RBX::Name& n = RBX::Name::declare< ::RBX::sWorkspace >();
   if (std::strcmp(n.c_str(), "Workspace") || &n != &RBX::Name::declare< ::RBX::sWorkspace >()) return 63; }
 { const RBX::Name& n = RBX::Name::declare< ::sStockSound >();
   if (std::strcmp(n.c_str(), "StockSound") || &n != &RBX::Name::declare< ::sStockSound >()) return 64; }
 std::printf("name caches: 64/64 passed\n");
 return 0;
}
