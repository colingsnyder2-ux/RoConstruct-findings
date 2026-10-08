// roc 2012-06 0083ace0  unit: seg_00830000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083ace0
//
// 0083ace0  a1c013de00           mov eax, dword ptr [0xde13c0]
// 0083ace5  56                   push esi
// 0083ace6  8b742408             mov esi, dword ptr [esp + 8]
// 0083acea  50                   push eax
// 0083aceb  6a01                 push 1
// 0083aced  56                   push esi
// 0083acee  e81d8bffff           call 0x833810
// 0083acf3  56                   push esi
// 0083acf4  50                   push eax
// 0083acf5  e8f6880000           call 0x8435f0
// 0083acfa  83c414               add esp, 0x14
// 0083acfd  5e                   pop esi
// 0083acfe  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
