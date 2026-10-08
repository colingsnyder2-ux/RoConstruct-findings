// roc 2010-06 0060b580  unit: RBX::ScriptContext  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b580
//
// 0060b580  a1842abe00           mov eax, dword ptr [0xbe2a84]
// 0060b585  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060b589  50                   push eax
// 0060b58a  6a01                 push 1
// 0060b58c  51                   push ecx
// 0060b58d  e87e781100           call 0x722e10
// 0060b592  83c40c               add esp, 0xc
// 0060b595  33c0                 xor eax, eax
// 0060b597  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
