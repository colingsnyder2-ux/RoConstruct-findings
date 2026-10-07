// roc 2011-06 0077d030  unit: seg_00770000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077d030
//
// 0077d030  8b442404             mov eax, dword ptr [esp + 4]
// 0077d034  8b403c               mov eax, dword ptr [eax + 0x3c]
// 0077d037  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_gethookcount)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
