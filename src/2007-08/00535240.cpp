// roc 2007-08 00535240  unit: std::logic_error  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535240
//
// 00535240  a178be8a00           mov eax, dword ptr [0x8abe78]
// 00535245  56                   push esi
// 00535246  8b742408             mov esi, dword ptr [esp + 8]
// 0053524a  50                   push eax
// 0053524b  6a01                 push 1
// 0053524d  56                   push esi
// 0053524e  e8ed9f0800           call 0x5bf240
// 00535253  56                   push esi
// 00535254  50                   push eax
// 00535255  e826f0ffff           call 0x534280
// 0053525a  83c414               add esp, 0x14
// 0053525d  5e                   pop esi
// 0053525e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
