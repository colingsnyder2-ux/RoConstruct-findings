// roc 2009-12 00877e00  unit: CXTPControlGalleryPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877e00
//
// 00877e00  c7013019a000         mov dword ptr [ecx], 0xa01930
// 00877e06  8b4904               mov ecx, dword ptr [ecx + 4]
// 00877e09  85c9                 test ecx, ecx
// 00877e0b  7407                 je 0x877e14
// 00877e0d  51                   push ecx
// 00877e0e  e8f3bcf7ff           call 0x7f3b06
// 00877e13  59                   pop ecx
// 00877e14  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
