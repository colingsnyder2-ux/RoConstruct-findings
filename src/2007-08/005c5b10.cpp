// from server: 100% by auto
// roc 2007-08 005c5b10  unit: lua_exception  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5b10
//
// 005c5b10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c5b14  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 005c5b17  8b542408             mov edx, dword ptr [esp + 8]
// 005c5b1b  3bd0                 cmp edx, eax
// 005c5b1d  894c2404             mov dword ptr [esp + 4], ecx
// 005c5b21  7f0b                 jg 0x5c5b2e
// 005c5b23  03c0                 add eax, eax
// 005c5b25  89442408             mov dword ptr [esp + 8], eax
// 005c5b29  e902ffffff           jmp 0x5c5a30
// 005c5b2e  03c2                 add eax, edx
// 005c5b30  89442408             mov dword ptr [esp + 8], eax
// 005c5b34  e9f7feffff           jmp 0x5c5a30
// library lua-5.1.4/ldo.c (function _luaD_growstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
