// roc 2010-06 00668930  unit: RBX::SpawnerService  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00668930
//
// 00668930  8b442404             mov eax, dword ptr [esp + 4]
// 00668934  6828cdc100           push 0xc1cd28
// 00668939  898190020000         mov dword ptr [ecx + 0x290], eax
// 0066893f  e82c3bdaff           call 0x40c470
// 00668944  c20400               ret 4
// library openrbx-client/App\v8datamodel\SpawnLocation.cpp (function ?setTeamColor@SpawnLocation@RBX@@QAEXVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/SpawnLocation.cpp
