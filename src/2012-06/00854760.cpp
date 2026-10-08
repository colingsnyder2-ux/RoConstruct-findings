// from server: 100% by auto
// roc 2012-06 00854760  unit: lua_exception  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854760
//
// 00854760  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00854764  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00854767  8b542408             mov edx, dword ptr [esp + 8]
// 0085476b  3bd0                 cmp edx, eax
// 0085476d  894c2404             mov dword ptr [esp + 4], ecx
// 00854771  7f0b                 jg 0x85477e
// 00854773  03c0                 add eax, eax
// 00854775  89442408             mov dword ptr [esp + 8], eax
// 00854779  e902ffffff           jmp 0x854680
// 0085477e  03c2                 add eax, edx
// 00854780  89442408             mov dword ptr [esp + 8], eax
// 00854784  e9f7feffff           jmp 0x854680
// library lua-5.1.4/ldo.c (function _luaD_growstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
