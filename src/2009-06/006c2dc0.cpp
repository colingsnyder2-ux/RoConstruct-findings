// roc 2009-06 006c2dc0  unit: lua_exception  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c2dc0
//
// 006c2dc0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c2dc4  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006c2dc7  8b542408             mov edx, dword ptr [esp + 8]
// 006c2dcb  3bd0                 cmp edx, eax
// 006c2dcd  894c2404             mov dword ptr [esp + 4], ecx
// 006c2dd1  7f0b                 jg 0x6c2dde
// 006c2dd3  03c0                 add eax, eax
// 006c2dd5  89442408             mov dword ptr [esp + 8], eax
// 006c2dd9  e902ffffff           jmp 0x6c2ce0
// 006c2dde  03c2                 add eax, edx
// 006c2de0  89442408             mov dword ptr [esp + 8], eax
// 006c2de4  e9f7feffff           jmp 0x6c2ce0
// library lua-5.1.4/ldo.c (function _luaD_growstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
