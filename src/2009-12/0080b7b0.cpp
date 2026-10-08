// roc 2009-12 0080b7b0  unit: CXTPImageManagerResource::CBitmapDC  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080b7b0
//
// 0080b7b0  c70120319f00         mov dword ptr [ecx], 0x9f3120
// 0080b7b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080b7b9  85c9                 test ecx, ecx
// 0080b7bb  7407                 je 0x80b7c4
// 0080b7bd  51                   push ecx
// 0080b7be  e84383feff           call 0x7f3b06
// 0080b7c3  59                   pop ecx
// 0080b7c4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
