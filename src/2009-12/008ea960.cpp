// roc 2009-12 008ea960  unit: CXTPRibbonTab  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea960
//
// 008ea960  c70118d1a000         mov dword ptr [ecx], 0xa0d118
// 008ea966  8b4904               mov ecx, dword ptr [ecx + 4]
// 008ea969  85c9                 test ecx, ecx
// 008ea96b  7407                 je 0x8ea974
// 008ea96d  51                   push ecx
// 008ea96e  e89391f0ff           call 0x7f3b06
// 008ea973  59                   pop ecx
// 008ea974  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
