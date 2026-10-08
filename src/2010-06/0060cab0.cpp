// roc 2010-06 0060cab0  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cab0
//
// 0060cab0  a1682abe00           mov eax, dword ptr [0xbe2a68]
// 0060cab5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060cab9  50                   push eax
// 0060caba  6a01                 push 1
// 0060cabc  51                   push ecx
// 0060cabd  e84e631100           call 0x722e10
// 0060cac2  83c40c               add esp, 0xc
// 0060cac5  33c0                 xor eax, eax
// 0060cac7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
