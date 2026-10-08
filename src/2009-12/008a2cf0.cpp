// roc 2009-12 008a2cf0  unit: CXTPReportHyperlinks  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2cf0
//
// 008a2cf0  c7016459a000         mov dword ptr [ecx], 0xa05964
// 008a2cf6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008a2cf9  85c9                 test ecx, ecx
// 008a2cfb  7407                 je 0x8a2d04
// 008a2cfd  51                   push ecx
// 008a2cfe  e8030ef5ff           call 0x7f3b06
// 008a2d03  59                   pop ecx
// 008a2d04  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
