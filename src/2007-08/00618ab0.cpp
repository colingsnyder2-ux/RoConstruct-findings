// roc 2007-08 00618ab0  unit: RBX::Edge  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00618ab0
//
// 00618ab0  8bc1                 mov eax, ecx
// 00618ab2  33c9                 xor ecx, ecx
// 00618ab4  89480c               mov dword ptr [eax + 0xc], ecx
// 00618ab7  894810               mov dword ptr [eax + 0x10], ecx
// 00618aba  894804               mov dword ptr [eax + 4], ecx
// 00618abd  894808               mov dword ptr [eax + 8], ecx
// 00618ac0  c3                   ret 
// library rbxgs/v8kernel\Pair.cpp (function ??0GeoPair@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Pair.cpp
