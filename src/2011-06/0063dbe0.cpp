// roc 2011-06 0063dbe0  unit: RBX::ArrowToolBase  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063dbe0
//
// 0063dbe0  8b442404             mov eax, dword ptr [esp + 4]
// 0063dbe4  6a00                 push 0
// 0063dbe6  50                   push eax
// 0063dbe7  e8448fe8ff           call 0x4c6b30
// 0063dbec  83c408               add esp, 8
// 0063dbef  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
