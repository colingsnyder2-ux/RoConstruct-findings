// roc 2009-12 0081eaa0  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081eaa0
//
// 0081eaa0  8bc1                 mov eax, ecx
// 0081eaa2  33c9                 xor ecx, ecx
// 0081eaa4  c700ec4e9f00         mov dword ptr [eax], 0x9f4eec
// 0081eaaa  894804               mov dword ptr [eax + 4], ecx
// 0081eaad  894810               mov dword ptr [eax + 0x10], ecx
// 0081eab0  89480c               mov dword ptr [eax + 0xc], ecx
// 0081eab3  894808               mov dword ptr [eax + 8], ecx
// 0081eab6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
