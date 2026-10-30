// roc 2009-12 0081eae0  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081eae0
//
// 0081eae0  8bc1                 mov eax, ecx
// 0081eae2  33c9                 xor ecx, ecx
// 0081eae4  c700044f9f00         mov dword ptr [eax], 0x9f4f04
// 0081eaea  894804               mov dword ptr [eax + 4], ecx
// 0081eaed  894810               mov dword ptr [eax + 0x10], ecx
// 0081eaf0  89480c               mov dword ptr [eax + 0xc], ecx
// 0081eaf3  894808               mov dword ptr [eax + 8], ecx
// 0081eaf6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
