// roc 2009-06 006bb0b0  unit: RBX::UniversalTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bb0b0
//
// 006bb0b0  56                   push esi
// 006bb0b1  8b742408             mov esi, dword ptr [esp + 8]
// 006bb0b5  6a00                 push 0
// 006bb0b7  6a00                 push 0
// 006bb0b9  56                   push esi
// 006bb0ba  e8f1e5ffff           call 0x6b96b0
// 006bb0bf  6aff                 push -1
// 006bb0c1  56                   push esi
// 006bb0c2  e879deffff           call 0x6b8f40
// 006bb0c7  6afe                 push -2
// 006bb0c9  56                   push esi
// 006bb0ca  e891e8ffff           call 0x6b9960
// 006bb0cf  6a06                 push 6
// 006bb0d1  6828b08e00           push 0x8eb028
// 006bb0d6  56                   push esi
// 006bb0d7  e8a4e2ffff           call 0x6b9380
// 006bb0dc  8b442434             mov eax, dword ptr [esp + 0x34]
// 006bb0e0  50                   push eax
// 006bb0e1  56                   push esi
// 006bb0e2  e8d9e2ffff           call 0x6b93c0
// 006bb0e7  6afd                 push -3
// 006bb0e9  56                   push esi
// 006bb0ea  e8f1e6ffff           call 0x6b97e0
// 006bb0ef  83c438               add esp, 0x38
// 006bb0f2  5e                   pop esi
// 006bb0f3  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?newweaktable@Lua@RBX@@YAXPAUlua_State@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
