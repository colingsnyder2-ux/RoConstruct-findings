// roc 2009-12 006a01a0  unit: std::strstream  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a01a0
//
// 006a01a0  6aff                 push -1
// 006a01a2  6888989300           push 0x939888
// 006a01a7  64a100000000         mov eax, dword ptr fs:[0]
// 006a01ad  50                   push eax
// 006a01ae  64892500000000       mov dword ptr fs:[0], esp
// 006a01b5  51                   push ecx
// 006a01b6  56                   push esi
// 006a01b7  8bf1                 mov esi, ecx
// 006a01b9  89742404             mov dword ptr [esp + 4], esi
// 006a01bd  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a01c1  50                   push eax
// 006a01c2  8d4e04               lea ecx, [esi + 4]
// 006a01c5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006a01cd  c706102b9d00         mov dword ptr [esi], 0x9d2b10
// 006a01d3  e868b40900           call 0x73b640
// 006a01d8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a01dc  8bc6                 mov eax, esi
// 006a01de  5e                   pop esi
// 006a01df  64890d00000000       mov dword ptr fs:[0], ecx
// 006a01e6  83c410               add esp, 0x10
// 006a01e9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
