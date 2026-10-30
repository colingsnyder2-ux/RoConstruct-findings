// from server: 100% by auto
// roc 2011-06 0077e2d0  unit: lua_exception  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e2d0
//
// 0077e2d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0077e2d4  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0077e2d7  8b542408             mov edx, dword ptr [esp + 8]
// 0077e2db  3bd0                 cmp edx, eax
// 0077e2dd  894c2404             mov dword ptr [esp + 4], ecx
// 0077e2e1  7f0b                 jg 0x77e2ee
// 0077e2e3  03c0                 add eax, eax
// 0077e2e5  89442408             mov dword ptr [esp + 8], eax
// 0077e2e9  e902ffffff           jmp 0x77e1f0
// 0077e2ee  03c2                 add eax, edx
// 0077e2f0  89442408             mov dword ptr [esp + 8], eax
// 0077e2f4  e9f7feffff           jmp 0x77e1f0
// library lua-5.1.4/ldo.c (function _luaD_growstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
