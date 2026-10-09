// roc 2009-12 006a0e70  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0e70
//
// 006a0e70  a1582bb600           mov eax, dword ptr [0xb62b58]
// 006a0e75  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a0e79  50                   push eax
// 006a0e7a  6a01                 push 1
// 006a0e7c  51                   push ecx
// 006a0e7d  e8de970e00           call 0x78a660
// 006a0e82  83c40c               add esp, 0xc
// 006a0e85  33c0                 xor eax, eax
// 006a0e87  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
