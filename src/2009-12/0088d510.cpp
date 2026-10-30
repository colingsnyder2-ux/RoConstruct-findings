// roc 2009-12 0088d510  unit: CXTPControlEditCtrl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088d510
//
// 0088d510  c7014431a000         mov dword ptr [ecx], 0xa03144
// 0088d516  8b4904               mov ecx, dword ptr [ecx + 4]
// 0088d519  85c9                 test ecx, ecx
// 0088d51b  7407                 je 0x88d524
// 0088d51d  51                   push ecx
// 0088d51e  e8e365f6ff           call 0x7f3b06
// 0088d523  59                   pop ecx
// 0088d524  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
