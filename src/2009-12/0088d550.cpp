// roc 2009-12 0088d550  unit: CXTPControlEditCtrl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088d550
//
// 0088d550  c7015c31a000         mov dword ptr [ecx], 0xa0315c
// 0088d556  8b4904               mov ecx, dword ptr [ecx + 4]
// 0088d559  85c9                 test ecx, ecx
// 0088d55b  7407                 je 0x88d564
// 0088d55d  51                   push ecx
// 0088d55e  e8a365f6ff           call 0x7f3b06
// 0088d563  59                   pop ecx
// 0088d564  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
