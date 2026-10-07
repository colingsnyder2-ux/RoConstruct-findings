// roc 2011-06 0077d020  unit: seg_00770000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077d020
//
// 0077d020  8b442404             mov eax, dword ptr [esp + 4]
// 0077d024  0fb64038             movzx eax, byte ptr [eax + 0x38]
// 0077d028  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_gethookmask)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
