// roc 2009-12 007f78a0  unit: CPatchedControlComboBox  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f78a0
//
// 007f78a0  c701c8179f00         mov dword ptr [ecx], 0x9f17c8
// 007f78a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007f78a9  85c9                 test ecx, ecx
// 007f78ab  7407                 je 0x7f78b4
// 007f78ad  51                   push ecx
// 007f78ae  e853c2ffff           call 0x7f3b06
// 007f78b3  59                   pop ecx
// 007f78b4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
