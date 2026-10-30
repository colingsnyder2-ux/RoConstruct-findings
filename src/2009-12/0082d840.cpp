// roc 2009-12 0082d840  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d840
//
// 0082d840  c70140629f00         mov dword ptr [ecx], 0x9f6240
// 0082d846  8b4904               mov ecx, dword ptr [ecx + 4]
// 0082d849  85c9                 test ecx, ecx
// 0082d84b  7407                 je 0x82d854
// 0082d84d  51                   push ecx
// 0082d84e  e8b362fcff           call 0x7f3b06
// 0082d853  59                   pop ecx
// 0082d854  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
