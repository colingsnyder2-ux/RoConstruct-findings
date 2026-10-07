// roc 2009-06 006be900  unit: RBX::Lua::LuaArguments  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006be900
//
// 006be900  51                   push ecx
// 006be901  56                   push esi
// 006be902  8d442404             lea eax, [esp + 4]
// 006be906  57                   push edi
// 006be907  50                   push eax
// 006be908  e8733ff8ff           call 0x642880
// 006be90d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006be911  8b30                 mov esi, dword ptr [eax]
// 006be913  6a04                 push 4
// 006be915  57                   push edi
// 006be916  e8b5b4ffff           call 0x6b9dd0
// 006be91b  83c40c               add esp, 0xc
// 006be91e  85c0                 test eax, eax
// 006be920  7402                 je 0x6be924
// 006be922  8930                 mov dword ptr [eax], esi
// 006be924  8b0df82aa200         mov ecx, dword ptr [0xa22af8]
// 006be92a  51                   push ecx
// 006be92b  68f0d8ffff           push 0xffffd8f0
// 006be930  57                   push edi
// 006be931  e89aacffff           call 0x6b95d0
// 006be936  6afe                 push -2
// 006be938  57                   push edi
// 006be939  e822b0ffff           call 0x6b9960
// 006be93e  83c414               add esp, 0x14
// 006be941  5f                   pop edi
// 006be942  b801000000           mov eax, 1
// 006be947  5e                   pop esi
// 006be948  59                   pop ecx
// 006be949  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?randomBrickColor@BrickColorBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
