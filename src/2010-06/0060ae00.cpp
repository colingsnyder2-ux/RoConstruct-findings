// roc 2010-06 0060ae00  unit: RBX::ScriptContext  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060ae00
//
// 0060ae00  a1482abe00           mov eax, dword ptr [0xbe2a48]
// 0060ae05  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060ae09  50                   push eax
// 0060ae0a  6a01                 push 1
// 0060ae0c  51                   push ecx
// 0060ae0d  e8fe7f1100           call 0x722e10
// 0060ae12  83c40c               add esp, 0xc
// 0060ae15  33c0                 xor eax, eax
// 0060ae17  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
