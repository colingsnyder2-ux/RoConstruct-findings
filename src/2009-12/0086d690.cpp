// roc 2009-12 0086d690  unit: CXTCaption  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d690
//
// 0086d690  c7017404a000         mov dword ptr [ecx], 0xa00474
// 0086d696  8b4904               mov ecx, dword ptr [ecx + 4]
// 0086d699  85c9                 test ecx, ecx
// 0086d69b  7407                 je 0x86d6a4
// 0086d69d  51                   push ecx
// 0086d69e  e86364f8ff           call 0x7f3b06
// 0086d6a3  59                   pop ecx
// 0086d6a4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
