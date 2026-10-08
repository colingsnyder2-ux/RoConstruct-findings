// roc 2007-03 00536d10  unit: seg_00530000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536d10
//
// 00536d10  6aff                 push -1
// 00536d12  68181a7500           push 0x751a18
// 00536d17  64a100000000         mov eax, dword ptr fs:[0]
// 00536d1d  50                   push eax
// 00536d1e  64892500000000       mov dword ptr fs:[0], esp
// 00536d25  51                   push ecx
// 00536d26  56                   push esi
// 00536d27  8bf1                 mov esi, ecx
// 00536d29  89742404             mov dword ptr [esp + 4], esi
// 00536d2d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00536d31  50                   push eax
// 00536d32  8d4e04               lea ecx, [esi + 4]
// 00536d35  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00536d3d  c70678577a00         mov dword ptr [esi], 0x7a5778
// 00536d43  e8485c0300           call 0x56c990
// 00536d48  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00536d4c  8bc6                 mov eax, esi
// 00536d4e  5e                   pop esi
// 00536d4f  64890d00000000       mov dword ptr fs:[0], ecx
// 00536d56  83c410               add esp, 0x10
// 00536d59  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
