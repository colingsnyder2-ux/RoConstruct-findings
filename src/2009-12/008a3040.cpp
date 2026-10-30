// roc 2009-12 008a3040  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3040
//
// 008a3040  8bc1                 mov eax, ecx
// 008a3042  33c9                 xor ecx, ecx
// 008a3044  c7006459a000         mov dword ptr [eax], 0xa05964
// 008a304a  894804               mov dword ptr [eax + 4], ecx
// 008a304d  894810               mov dword ptr [eax + 0x10], ecx
// 008a3050  89480c               mov dword ptr [eax + 0xc], ecx
// 008a3053  894808               mov dword ptr [eax + 8], ecx
// 008a3056  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
