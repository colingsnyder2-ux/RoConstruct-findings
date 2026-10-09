// roc 2009-12 006a0f50  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0f50
//
// 006a0f50  a15c2bb600           mov eax, dword ptr [0xb62b5c]
// 006a0f55  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a0f59  50                   push eax
// 006a0f5a  6a01                 push 1
// 006a0f5c  51                   push ecx
// 006a0f5d  e8fe960e00           call 0x78a660
// 006a0f62  83c40c               add esp, 0xc
// 006a0f65  33c0                 xor eax, eax
// 006a0f67  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
