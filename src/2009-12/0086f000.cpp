// roc 2009-12 0086f000  unit: CXTPResourceManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f000
//
// 0086f000  c701600ba000         mov dword ptr [ecx], 0xa00b60
// 0086f006  8b4904               mov ecx, dword ptr [ecx + 4]
// 0086f009  85c9                 test ecx, ecx
// 0086f00b  7407                 je 0x86f014
// 0086f00d  51                   push ecx
// 0086f00e  e8f34af8ff           call 0x7f3b06
// 0086f013  59                   pop ecx
// 0086f014  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
