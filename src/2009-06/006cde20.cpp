// roc 2009-06 006cde20  unit: RBX::AxisMoveTool  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cde20
//
// 006cde20  8bc1                 mov eax, ecx
// 006cde22  33c9                 xor ecx, ecx
// 006cde24  89480c               mov dword ptr [eax + 0xc], ecx
// 006cde27  894810               mov dword ptr [eax + 0x10], ecx
// 006cde2a  894804               mov dword ptr [eax + 4], ecx
// 006cde2d  894808               mov dword ptr [eax + 8], ecx
// 006cde30  c3                   ret 
// library rbxgs/v8kernel\Pair.cpp (function ??0GeoPair@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Pair.cpp
