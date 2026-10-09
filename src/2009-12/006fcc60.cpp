// roc 2009-12 006fcc60  unit: RBX::VStarterGuiService::?$FactoryProduct  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fcc60
//
// 006fcc60  8b8988020000         mov ecx, dword ptr [ecx + 0x288]
// 006fcc66  8b442404             mov eax, dword ptr [esp + 4]
// 006fcc6a  8908                 mov dword ptr [eax], ecx
// 006fcc6c  c20400               ret 4
// library rbxgs/v8datamodel\SpawnLocation.cpp (function ?getTeamColor@SpawnLocation@RBX@@QBE?AVBrickColor@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/SpawnLocation.cpp
