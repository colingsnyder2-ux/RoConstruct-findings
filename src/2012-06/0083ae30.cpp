// roc 2012-06 0083ae30  unit: seg_00830000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083ae30
//
// 0083ae30  a1cc13de00           mov eax, dword ptr [0xde13cc]
// 0083ae35  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0083ae39  50                   push eax
// 0083ae3a  6a01                 push 1
// 0083ae3c  51                   push ecx
// 0083ae3d  e8ce89ffff           call 0x833810
// 0083ae42  83c40c               add esp, 0xc
// 0083ae45  33c0                 xor eax, eax
// 0083ae47  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
