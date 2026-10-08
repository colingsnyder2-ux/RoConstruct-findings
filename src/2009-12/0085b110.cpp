// roc 2009-12 0085b110  unit: CXTPStatusBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b110
//
// 0085b110  c701fcd29f00         mov dword ptr [ecx], 0x9fd2fc
// 0085b116  8b4904               mov ecx, dword ptr [ecx + 4]
// 0085b119  85c9                 test ecx, ecx
// 0085b11b  7407                 je 0x85b124
// 0085b11d  51                   push ecx
// 0085b11e  e8e389f9ff           call 0x7f3b06
// 0085b123  59                   pop ecx
// 0085b124  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
