// roc 2009-12 008147a0  unit: CRobloxControlColorSelector  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008147a0
//
// 008147a0  c701943d9f00         mov dword ptr [ecx], 0x9f3d94
// 008147a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008147a9  85c9                 test ecx, ecx
// 008147ab  7407                 je 0x8147b4
// 008147ad  51                   push ecx
// 008147ae  e853f3fdff           call 0x7f3b06
// 008147b3  59                   pop ecx
// 008147b4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
