// roc 2009-12 0082ce20  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082ce20
//
// 0082ce20  8bc1                 mov eax, ecx
// 0082ce22  33c9                 xor ecx, ecx
// 0082ce24  c700b0619f00         mov dword ptr [eax], 0x9f61b0
// 0082ce2a  894804               mov dword ptr [eax + 4], ecx
// 0082ce2d  894810               mov dword ptr [eax + 0x10], ecx
// 0082ce30  89480c               mov dword ptr [eax + 0xc], ecx
// 0082ce33  894808               mov dword ptr [eax + 8], ecx
// 0082ce36  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
