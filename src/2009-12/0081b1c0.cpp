// roc 2009-12 0081b1c0  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b1c0
//
// 0081b1c0  c701a0499f00         mov dword ptr [ecx], 0x9f49a0
// 0081b1c6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0081b1c9  85c9                 test ecx, ecx
// 0081b1cb  7407                 je 0x81b1d4
// 0081b1cd  51                   push ecx
// 0081b1ce  e83389fdff           call 0x7f3b06
// 0081b1d3  59                   pop ecx
// 0081b1d4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
