// roc 2009-12 00869e00  unit: CXTPPropertyGridView  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00869e00
//
// 00869e00  c70174f29f00         mov dword ptr [ecx], 0x9ff274
// 00869e06  8b4904               mov ecx, dword ptr [ecx + 4]
// 00869e09  85c9                 test ecx, ecx
// 00869e0b  7407                 je 0x869e14
// 00869e0d  51                   push ecx
// 00869e0e  e8f39cf8ff           call 0x7f3b06
// 00869e13  59                   pop ecx
// 00869e14  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
