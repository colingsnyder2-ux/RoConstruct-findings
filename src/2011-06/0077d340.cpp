// from server: 100% by auto
// roc 2011-06 0077d340  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077d340
//
// 0077d340  8b442404             mov eax, dword ptr [esp + 4]
// 0077d344  8bc8                 mov ecx, eax
// 0077d346  83e13f               and ecx, 0x3f
// 0077d349  83f91c               cmp ecx, 0x1c
// 0077d34c  7c15                 jl 0x77d363
// 0077d34e  83f91e               cmp ecx, 0x1e
// 0077d351  7e05                 jle 0x77d358
// 0077d353  83f922               cmp ecx, 0x22
// 0077d356  750b                 jne 0x77d363
// 0077d358  25000080ff           and eax, 0xff800000
// 0077d35d  f7d8                 neg eax
// 0077d35f  1bc0                 sbb eax, eax
// 0077d361  40                   inc eax
// 0077d362  c3                   ret 
// 0077d363  33c0                 xor eax, eax
// 0077d365  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkopenop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
