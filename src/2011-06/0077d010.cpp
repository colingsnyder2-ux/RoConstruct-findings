// roc 2011-06 0077d010  unit: seg_00770000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077d010
//
// 0077d010  8b442404             mov eax, dword ptr [esp + 4]
// 0077d014  8b4044               mov eax, dword ptr [eax + 0x44]
// 0077d017  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_gethook)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
