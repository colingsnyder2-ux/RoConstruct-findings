// roc 2009-12 00855300  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00855300
//
// 00855300  c70114cc9f00         mov dword ptr [ecx], 0x9fcc14
// 00855306  8b4904               mov ecx, dword ptr [ecx + 4]
// 00855309  85c9                 test ecx, ecx
// 0085530b  7407                 je 0x855314
// 0085530d  51                   push ecx
// 0085530e  e8f3e7f9ff           call 0x7f3b06
// 00855313  59                   pop ecx
// 00855314  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
