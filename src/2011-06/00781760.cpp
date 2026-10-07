// roc 2011-06 00781760  unit: lua_exception  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00781760
//
// 00781760  8b442404             mov eax, dword ptr [esp + 4]
// 00781764  68f87dab00           push 0xab7df8
// 00781769  50                   push eax
// 0078176a  e8a11ffeff           call 0x763710
// 0078176f  83c408               add esp, 8
// 00781772  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gfind_nodef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
