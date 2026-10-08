// roc 2009-12 008706d0  unit: CXTPHookManagerHookAble  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008706d0
//
// 008706d0  c701800da000         mov dword ptr [ecx], 0xa00d80
// 008706d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008706d9  85c9                 test ecx, ecx
// 008706db  7407                 je 0x8706e4
// 008706dd  51                   push ecx
// 008706de  e82334f8ff           call 0x7f3b06
// 008706e3  59                   pop ecx
// 008706e4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
