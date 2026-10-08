// roc 2009-12 00814740  unit: CRobloxControlColorSelector  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814740
//
// 00814740  c7017c3d9f00         mov dword ptr [ecx], 0x9f3d7c
// 00814746  8b4904               mov ecx, dword ptr [ecx + 4]
// 00814749  85c9                 test ecx, ecx
// 0081474b  7407                 je 0x814754
// 0081474d  51                   push ecx
// 0081474e  e8b3f3fdff           call 0x7f3b06
// 00814753  59                   pop ecx
// 00814754  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
