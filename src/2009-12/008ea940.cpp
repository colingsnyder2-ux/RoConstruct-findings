// roc 2009-12 008ea940  unit: CXTPRibbonTab  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea940
//
// 008ea940  8bc1                 mov eax, ecx
// 008ea942  33c9                 xor ecx, ecx
// 008ea944  c70018d1a000         mov dword ptr [eax], 0xa0d118
// 008ea94a  894804               mov dword ptr [eax + 4], ecx
// 008ea94d  894810               mov dword ptr [eax + 0x10], ecx
// 008ea950  89480c               mov dword ptr [eax + 0xc], ecx
// 008ea953  894808               mov dword ptr [eax + 8], ecx
// 008ea956  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
