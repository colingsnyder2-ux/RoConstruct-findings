// roc 2009-12 00855340  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00855340
//
// 00855340  c7012ccc9f00         mov dword ptr [ecx], 0x9fcc2c
// 00855346  8b4904               mov ecx, dword ptr [ecx + 4]
// 00855349  85c9                 test ecx, ecx
// 0085534b  7407                 je 0x855354
// 0085534d  51                   push ecx
// 0085534e  e8b3e7f9ff           call 0x7f3b06
// 00855353  59                   pop ecx
// 00855354  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
