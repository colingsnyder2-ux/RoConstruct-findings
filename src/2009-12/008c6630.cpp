// roc 2009-12 008c6630  unit: CXTPPropertyGridInplaceButton  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6630
//
// 008c6630  c701089ba000         mov dword ptr [ecx], 0xa09b08
// 008c6636  8b4904               mov ecx, dword ptr [ecx + 4]
// 008c6639  85c9                 test ecx, ecx
// 008c663b  7407                 je 0x8c6644
// 008c663d  51                   push ecx
// 008c663e  e8c3d4f2ff           call 0x7f3b06
// 008c6643  59                   pop ecx
// 008c6644  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
