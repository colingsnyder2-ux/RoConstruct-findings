// roc 2009-12 0088ebd0  unit: CXTPShortcutManager::CKeyHelper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088ebd0
//
// 0088ebd0  c701ac31a000         mov dword ptr [ecx], 0xa031ac
// 0088ebd6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0088ebd9  85c9                 test ecx, ecx
// 0088ebdb  7407                 je 0x88ebe4
// 0088ebdd  51                   push ecx
// 0088ebde  e8234ff6ff           call 0x7f3b06
// 0088ebe3  59                   pop ecx
// 0088ebe4  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\barstat.cpp (function ??1?$CArray@HABH@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barstat.cpp
