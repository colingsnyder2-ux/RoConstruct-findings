// roc 2009-12 006a0b80  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0b80
//
// 006a0b80  a1442bb600           mov eax, dword ptr [0xb62b44]
// 006a0b85  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a0b89  50                   push eax
// 006a0b8a  6a01                 push 1
// 006a0b8c  51                   push ecx
// 006a0b8d  e8ce9a0e00           call 0x78a660
// 006a0b92  83c40c               add esp, 0xc
// 006a0b95  33c0                 xor eax, eax
// 006a0b97  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
