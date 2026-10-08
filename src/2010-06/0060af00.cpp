// roc 2010-06 0060af00  unit: RBX::ScriptContext  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060af00
//
// 0060af00  a16c2abe00           mov eax, dword ptr [0xbe2a6c]
// 0060af05  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060af09  50                   push eax
// 0060af0a  6a01                 push 1
// 0060af0c  51                   push ecx
// 0060af0d  e8fe7e1100           call 0x722e10
// 0060af12  83c40c               add esp, 0xc
// 0060af15  33c0                 xor eax, eax
// 0060af17  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
