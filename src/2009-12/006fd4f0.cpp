// roc 2009-12 006fd4f0  unit: RBX::SpawnerService  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fd4f0
//
// 006fd4f0  8b442404             mov eax, dword ptr [esp + 4]
// 006fd4f4  68584cb900           push 0xb94c58
// 006fd4f9  898188020000         mov dword ptr [ecx + 0x288], eax
// 006fd4ff  e87cebd0ff           call 0x40c080
// 006fd504  c20400               ret 4
// library rbxgs/v8datamodel\SpawnLocation.cpp (function ?setTeamColor@SpawnLocation@RBX@@QAEXVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/SpawnLocation.cpp
