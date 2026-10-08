// roc 2007-03 005c10d0  unit: seg_005c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c10d0
//
// 005c10d0  8bc1                 mov eax, ecx
// 005c10d2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c10d6  8908                 mov dword ptr [eax], ecx
// 005c10d8  33c9                 xor ecx, ecx
// 005c10da  894808               mov dword ptr [eax + 8], ecx
// 005c10dd  89480c               mov dword ptr [eax + 0xc], ecx
// 005c10e0  894810               mov dword ptr [eax + 0x10], ecx
// 005c10e3  c20400               ret 4
// library rbxgs/util\Log.cpp (function ??0?$fpos@H@std@@QAE@J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Log.cpp
