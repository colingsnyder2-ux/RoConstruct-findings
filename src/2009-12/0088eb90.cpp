// roc 2009-12 0088eb90  unit: CXTPShortcutManager::CKeyHelper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088eb90
//
// 0088eb90  c7019431a000         mov dword ptr [ecx], 0xa03194
// 0088eb96  8b4904               mov ecx, dword ptr [ecx + 4]
// 0088eb99  85c9                 test ecx, ecx
// 0088eb9b  7407                 je 0x88eba4
// 0088eb9d  51                   push ecx
// 0088eb9e  e8634ff6ff           call 0x7f3b06
// 0088eba3  59                   pop ecx
// 0088eba4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
