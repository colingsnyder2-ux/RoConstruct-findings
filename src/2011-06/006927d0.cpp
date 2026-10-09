// roc 2011-06 006927d0  unit: RBX::VSpawnLocation::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006927d0
//
// 006927d0  8b442404             mov eax, dword ptr [esp + 4]
// 006927d4  68e4f6cc00           push 0xccf6e4
// 006927d9  898190020000         mov dword ptr [ecx + 0x290], eax
// 006927df  e87cf7d7ff           call 0x411f60
// 006927e4  c20400               ret 4
// library openrbx-client/App\v8datamodel\SpawnLocation.cpp (function ?setTeamColor@SpawnLocation@RBX@@QAEXVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/SpawnLocation.cpp
