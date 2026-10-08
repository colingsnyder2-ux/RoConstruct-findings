// roc 2009-12 00840b60  unit: CXTPCustomizeCommandsPage  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00840b60
//
// 00840b60  c701909b9f00         mov dword ptr [ecx], 0x9f9b90
// 00840b66  8b4904               mov ecx, dword ptr [ecx + 4]
// 00840b69  85c9                 test ecx, ecx
// 00840b6b  7407                 je 0x840b74
// 00840b6d  51                   push ecx
// 00840b6e  e8932ffbff           call 0x7f3b06
// 00840b73  59                   pop ecx
// 00840b74  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
