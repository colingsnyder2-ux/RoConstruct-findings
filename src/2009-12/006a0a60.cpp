// roc 2009-12 006a0a60  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0a60
//
// 006a0a60  a1542bb600           mov eax, dword ptr [0xb62b54]
// 006a0a65  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a0a69  50                   push eax
// 006a0a6a  6a01                 push 1
// 006a0a6c  51                   push ecx
// 006a0a6d  e8ee9b0e00           call 0x78a660
// 006a0a72  83c40c               add esp, 0xc
// 006a0a75  33c0                 xor eax, eax
// 006a0a77  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
