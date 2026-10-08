// roc 2007-03 005ba990  unit: seg_005b0000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ba990
//
// 005ba990  56                   push esi
// 005ba991  8b742408             mov esi, dword ptr [esp + 8]
// 005ba995  6a00                 push 0
// 005ba997  6a00                 push 0
// 005ba999  56                   push esi
// 005ba99a  e811eaffff           call 0x5b93b0
// 005ba99f  6aff                 push -1
// 005ba9a1  56                   push esi
// 005ba9a2  e869e2ffff           call 0x5b8c10
// 005ba9a7  6afe                 push -2
// 005ba9a9  56                   push esi
// 005ba9aa  e881ecffff           call 0x5b9630
// 005ba9af  6a06                 push 6
// 005ba9b1  6858927b00           push 0x7b9258
// 005ba9b6  56                   push esi
// 005ba9b7  e8c4e6ffff           call 0x5b9080
// 005ba9bc  8b442434             mov eax, dword ptr [esp + 0x34]
// 005ba9c0  50                   push eax
// 005ba9c1  56                   push esi
// 005ba9c2  e8f9e6ffff           call 0x5b90c0
// 005ba9c7  6afd                 push -3
// 005ba9c9  56                   push esi
// 005ba9ca  e8f1eaffff           call 0x5b94c0
// 005ba9cf  83c438               add esp, 0x38
// 005ba9d2  5e                   pop esi
// 005ba9d3  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?newweaktable@Lua@RBX@@YAXPAUlua_State@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
