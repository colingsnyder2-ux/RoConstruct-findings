// roc 2009-12 0082d940  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d940
//
// 0082d940  c70158629f00         mov dword ptr [ecx], 0x9f6258
// 0082d946  8b4904               mov ecx, dword ptr [ecx + 4]
// 0082d949  85c9                 test ecx, ecx
// 0082d94b  7407                 je 0x82d954
// 0082d94d  51                   push ecx
// 0082d94e  e8b361fcff           call 0x7f3b06
// 0082d953  59                   pop ecx
// 0082d954  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
