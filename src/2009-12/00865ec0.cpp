// roc 2009-12 00865ec0  unit: CXTPPropertyGridItemConstraints  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865ec0
//
// 00865ec0  c701e0e99f00         mov dword ptr [ecx], 0x9fe9e0
// 00865ec6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00865ec9  85c9                 test ecx, ecx
// 00865ecb  7407                 je 0x865ed4
// 00865ecd  51                   push ecx
// 00865ece  e833dcf8ff           call 0x7f3b06
// 00865ed3  59                   pop ecx
// 00865ed4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
