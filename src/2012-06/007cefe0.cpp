// roc 2012-06 007cefe0  unit: RBX::GuiImageButton  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007cefe0
//
// 007cefe0  8b89d0020000         mov ecx, dword ptr [ecx + 0x2d0]
// 007cefe6  8b442404             mov eax, dword ptr [esp + 4]
// 007cefea  8908                 mov dword ptr [eax], ecx
// 007cefec  c20400               ret 4
// library openrbx-client/App\v8datamodel\SpawnLocation.cpp (function ?getTeamColor@SpawnLocation@RBX@@QBE?AVBrickColor@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/SpawnLocation.cpp
