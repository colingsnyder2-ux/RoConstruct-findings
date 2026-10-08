// from server: 100% by auto
// roc 2010-06 0072fb90  unit: lua_exception  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072fb90
//
// 0072fb90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0072fb94  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0072fb97  8b542408             mov edx, dword ptr [esp + 8]
// 0072fb9b  3bd0                 cmp edx, eax
// 0072fb9d  894c2404             mov dword ptr [esp + 4], ecx
// 0072fba1  7f0b                 jg 0x72fbae
// 0072fba3  03c0                 add eax, eax
// 0072fba5  89442408             mov dword ptr [esp + 8], eax
// 0072fba9  e902ffffff           jmp 0x72fab0
// 0072fbae  03c2                 add eax, edx
// 0072fbb0  89442408             mov dword ptr [esp + 8], eax
// 0072fbb4  e9f7feffff           jmp 0x72fab0
// library lua-5.1.4/ldo.c (function _luaD_growstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
