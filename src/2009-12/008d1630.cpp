// roc 2009-12 008d1630  unit: CXTPTabPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d1630
//
// 008d1630  c70134aba000         mov dword ptr [ecx], 0xa0ab34
// 008d1636  8b4904               mov ecx, dword ptr [ecx + 4]
// 008d1639  85c9                 test ecx, ecx
// 008d163b  7407                 je 0x8d1644
// 008d163d  51                   push ecx
// 008d163e  e8c324f2ff           call 0x7f3b06
// 008d1643  59                   pop ecx
// 008d1644  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
