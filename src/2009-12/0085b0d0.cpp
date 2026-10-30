// roc 2009-12 0085b0d0  unit: CXTPStatusBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b0d0
//
// 0085b0d0  c701e4d29f00         mov dword ptr [ecx], 0x9fd2e4
// 0085b0d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0085b0d9  85c9                 test ecx, ecx
// 0085b0db  7407                 je 0x85b0e4
// 0085b0dd  51                   push ecx
// 0085b0de  e8238af9ff           call 0x7f3b06
// 0085b0e3  59                   pop ecx
// 0085b0e4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
