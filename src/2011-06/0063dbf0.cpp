// from server: 100% by auto
// roc 2011-06 0063dbf0  unit: RBX::ArrowToolBase  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063dbf0
//
// 0063dbf0  8b442404             mov eax, dword ptr [esp + 4]
// 0063dbf4  6a00                 push 0
// 0063dbf6  50                   push eax
// 0063dbf7  e8248fe8ff           call 0x4c6b20
// 0063dbfc  83c408               add esp, 8
// 0063dbff  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
