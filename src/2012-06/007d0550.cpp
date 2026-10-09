// roc 2012-06 007d0550  unit: RBX::SpawnerService  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d0550
//
// 007d0550  8b442404             mov eax, dword ptr [esp + 4]
// 007d0554  6834dbe400           push 0xe4db34
// 007d0559  8981d0020000         mov dword ptr [ecx + 0x2d0], eax
// 007d055f  e83c48c4ff           call 0x414da0
// 007d0564  c20400               ret 4
// library openrbx-client/App\v8datamodel\SpawnLocation.cpp (function ?setTeamColor@SpawnLocation@RBX@@QAEXVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/SpawnLocation.cpp
