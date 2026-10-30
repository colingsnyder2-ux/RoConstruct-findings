// roc 2009-12 0086d670  unit: CXTCaption  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d670
//
// 0086d670  8bc1                 mov eax, ecx
// 0086d672  33c9                 xor ecx, ecx
// 0086d674  c7007404a000         mov dword ptr [eax], 0xa00474
// 0086d67a  894804               mov dword ptr [eax + 4], ecx
// 0086d67d  894810               mov dword ptr [eax + 0x10], ecx
// 0086d680  89480c               mov dword ptr [eax + 0xc], ecx
// 0086d683  894808               mov dword ptr [eax + 8], ecx
// 0086d686  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
