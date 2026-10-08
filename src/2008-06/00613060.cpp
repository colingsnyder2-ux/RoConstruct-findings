// roc 2008-06 00613060  unit: seg_00610000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613060
//
// 00613060  8bc1                 mov eax, ecx
// 00613062  33c9                 xor ecx, ecx
// 00613064  89480c               mov dword ptr [eax + 0xc], ecx
// 00613067  894810               mov dword ptr [eax + 0x10], ecx
// 0061306a  894804               mov dword ptr [eax + 4], ecx
// 0061306d  894808               mov dword ptr [eax + 8], ecx
// 00613070  c3                   ret 
// library rbxgs/v8kernel\Pair.cpp (function ??0GeoPair@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Pair.cpp
