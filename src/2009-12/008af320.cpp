// roc 2009-12 008af320  unit: CXTPDockingPaneMiniWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008af320
//
// 008af320  c7019870a000         mov dword ptr [ecx], 0xa07098
// 008af326  8b4904               mov ecx, dword ptr [ecx + 4]
// 008af329  85c9                 test ecx, ecx
// 008af32b  7407                 je 0x8af334
// 008af32d  51                   push ecx
// 008af32e  e8d347f4ff           call 0x7f3b06
// 008af333  59                   pop ecx
// 008af334  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
