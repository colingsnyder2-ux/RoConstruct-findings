// roc 2009-12 00856d10  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856d10
//
// 00856d10  c7015ccc9f00         mov dword ptr [ecx], 0x9fcc5c
// 00856d16  8b4904               mov ecx, dword ptr [ecx + 4]
// 00856d19  85c9                 test ecx, ecx
// 00856d1b  7407                 je 0x856d24
// 00856d1d  51                   push ecx
// 00856d1e  e8e3cdf9ff           call 0x7f3b06
// 00856d23  59                   pop ecx
// 00856d24  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
