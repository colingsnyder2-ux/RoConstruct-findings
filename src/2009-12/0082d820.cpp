// roc 2009-12 0082d820  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d820
//
// 0082d820  8bc1                 mov eax, ecx
// 0082d822  33c9                 xor ecx, ecx
// 0082d824  c70040629f00         mov dword ptr [eax], 0x9f6240
// 0082d82a  894804               mov dword ptr [eax + 4], ecx
// 0082d82d  894810               mov dword ptr [eax + 0x10], ecx
// 0082d830  89480c               mov dword ptr [eax + 0xc], ecx
// 0082d833  894808               mov dword ptr [eax + 8], ecx
// 0082d836  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
