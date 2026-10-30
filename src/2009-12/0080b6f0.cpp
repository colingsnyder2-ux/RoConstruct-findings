// roc 2009-12 0080b6f0  unit: CXTPImageManagerResource::CBitmapDC  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080b6f0
//
// 0080b6f0  c701d8309f00         mov dword ptr [ecx], 0x9f30d8
// 0080b6f6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080b6f9  85c9                 test ecx, ecx
// 0080b6fb  7407                 je 0x80b704
// 0080b6fd  51                   push ecx
// 0080b6fe  e80384feff           call 0x7f3b06
// 0080b703  59                   pop ecx
// 0080b704  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
