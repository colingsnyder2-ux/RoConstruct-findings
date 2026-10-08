// roc 2007-03 005a69b0  unit: seg_005a0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a69b0
//
// 005a69b0  51                   push ecx
// 005a69b1  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a69b5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a69b9  56                   push esi
// 005a69ba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a69be  50                   push eax
// 005a69bf  51                   push ecx
// 005a69c0  8bce                 mov ecx, esi
// 005a69c2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a69ca  e8b181f7ff           call 0x51eb80
// 005a69cf  8bc6                 mov eax, esi
// 005a69d1  5e                   pop esi
// 005a69d2  59                   pop ecx
// 005a69d3  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?lua_tofunction@Lua@RBX@@YA?AVFunctionRef@12@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
