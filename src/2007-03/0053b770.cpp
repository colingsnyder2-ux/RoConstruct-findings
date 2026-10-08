// roc 2007-03 0053b770  unit: seg_00530000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053b770
//
// 0053b770  a1b07f8a00           mov eax, dword ptr [0x8a7fb0]
// 0053b775  56                   push esi
// 0053b776  8b742408             mov esi, dword ptr [esp + 8]
// 0053b77a  50                   push eax
// 0053b77b  6a01                 push 1
// 0053b77d  56                   push esi
// 0053b77e  e82ded0700           call 0x5ba4b0
// 0053b783  56                   push esi
// 0053b784  50                   push eax
// 0053b785  e886fdffff           call 0x53b510
// 0053b78a  83c414               add esp, 0x14
// 0053b78d  5e                   pop esi
// 0053b78e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
