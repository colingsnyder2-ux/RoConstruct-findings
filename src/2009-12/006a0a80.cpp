// roc 2009-12 006a0a80  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0a80
//
// 006a0a80  a1542bb600           mov eax, dword ptr [0xb62b54]
// 006a0a85  56                   push esi
// 006a0a86  8b742408             mov esi, dword ptr [esp + 8]
// 006a0a8a  50                   push eax
// 006a0a8b  6a01                 push 1
// 006a0a8d  56                   push esi
// 006a0a8e  e8cd9b0e00           call 0x78a660
// 006a0a93  56                   push esi
// 006a0a94  50                   push eax
// 006a0a95  e816e7ffff           call 0x69f1b0
// 006a0a9a  83c414               add esp, 0x14
// 006a0a9d  5e                   pop esi
// 006a0a9e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
