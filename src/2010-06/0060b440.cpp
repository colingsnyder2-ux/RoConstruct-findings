// roc 2010-06 0060b440  unit: RBX::ScriptContext  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b440
//
// 0060b440  a17c2abe00           mov eax, dword ptr [0xbe2a7c]
// 0060b445  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060b449  50                   push eax
// 0060b44a  6a01                 push 1
// 0060b44c  51                   push ecx
// 0060b44d  e8be791100           call 0x722e10
// 0060b452  83c40c               add esp, 0xc
// 0060b455  33c0                 xor eax, eax
// 0060b457  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
