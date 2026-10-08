// roc 2010-06 0060b000  unit: RBX::ScriptContext  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b000
//
// 0060b000  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0060b005  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060b009  50                   push eax
// 0060b00a  6a01                 push 1
// 0060b00c  51                   push ecx
// 0060b00d  e8fe7d1100           call 0x722e10
// 0060b012  83c40c               add esp, 0xc
// 0060b015  33c0                 xor eax, eax
// 0060b017  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
