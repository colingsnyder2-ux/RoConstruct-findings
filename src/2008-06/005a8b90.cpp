// roc 2008-06 005a8b90  unit: RBX::ScriptContext  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8b90
//
// 005a8b90  a1dcb19500           mov eax, dword ptr [0x95b1dc]
// 005a8b95  56                   push esi
// 005a8b96  8b742408             mov esi, dword ptr [esp + 8]
// 005a8b9a  50                   push eax
// 005a8b9b  6a01                 push 1
// 005a8b9d  56                   push esi
// 005a8b9e  e80d8a0600           call 0x6115b0
// 005a8ba3  56                   push esi
// 005a8ba4  50                   push eax
// 005a8ba5  e806faffff           call 0x5a85b0
// 005a8baa  83c414               add esp, 0x14
// 005a8bad  5e                   pop esi
// 005a8bae  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
