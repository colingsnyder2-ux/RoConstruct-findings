// roc 2009-12 0084f240  unit: CXTPPropertyGrid  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f240
//
// 0084f240  c701b0bf9f00         mov dword ptr [ecx], 0x9fbfb0
// 0084f246  8b4904               mov ecx, dword ptr [ecx + 4]
// 0084f249  85c9                 test ecx, ecx
// 0084f24b  7407                 je 0x84f254
// 0084f24d  51                   push ecx
// 0084f24e  e8b348faff           call 0x7f3b06
// 0084f253  59                   pop ecx
// 0084f254  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
