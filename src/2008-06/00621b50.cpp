// roc 2008-06 00621b50  unit: lua_exception  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00621b50
//
// 00621b50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00621b54  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00621b57  8b542408             mov edx, dword ptr [esp + 8]
// 00621b5b  3bd0                 cmp edx, eax
// 00621b5d  894c2404             mov dword ptr [esp + 4], ecx
// 00621b61  7f0b                 jg 0x621b6e
// 00621b63  03c0                 add eax, eax
// 00621b65  89442408             mov dword ptr [esp + 8], eax
// 00621b69  e902ffffff           jmp 0x621a70
// 00621b6e  03c2                 add eax, edx
// 00621b70  89442408             mov dword ptr [esp + 8], eax
// 00621b74  e9f7feffff           jmp 0x621a70
// library lua-5.1.4/ldo.c (function _luaD_growstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
