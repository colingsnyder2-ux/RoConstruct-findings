// roc 2007-03 0056ca90  unit: seg_00560000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056ca90
//
// 0056ca90  51                   push ecx
// 0056ca91  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056ca95  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056ca99  56                   push esi
// 0056ca9a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056ca9e  50                   push eax
// 0056ca9f  51                   push ecx
// 0056caa0  8bce                 mov ecx, esi
// 0056caa2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056caaa  e801feffff           call 0x56c8b0
// 0056caaf  8bc6                 mov eax, esi
// 0056cab1  5e                   pop esi
// 0056cab2  59                   pop ecx
// 0056cab3  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?lua_tofunction@Lua@RBX@@YA?AVFunctionRef@12@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
