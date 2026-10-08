// roc 2009-12 00865e80  unit: CXTPPropertyGridItemConstraints  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865e80
//
// 00865e80  c701c8e99f00         mov dword ptr [ecx], 0x9fe9c8
// 00865e86  8b4904               mov ecx, dword ptr [ecx + 4]
// 00865e89  85c9                 test ecx, ecx
// 00865e8b  7407                 je 0x865e94
// 00865e8d  51                   push ecx
// 00865e8e  e873dcf8ff           call 0x7f3b06
// 00865e93  59                   pop ecx
// 00865e94  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
