// from server: 100% by auto
// roc 2008-06 006262e0  unit: seg_00620000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006262e0
//
// 006262e0  51                   push ecx
// 006262e1  56                   push esi
// 006262e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006262e6  8d442404             lea eax, [esp + 4]
// 006262ea  50                   push eax
// 006262eb  6a01                 push 1
// 006262ed  56                   push esi
// 006262ee  e8cdb3feff           call 0x6116c0
// 006262f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006262f7  51                   push ecx
// 006262f8  56                   push esi
// 006262f9  e822bffeff           call 0x612220
// 006262fe  83c414               add esp, 0x14
// 00626301  b801000000           mov eax, 1
// 00626306  5e                   pop esi
// 00626307  59                   pop ecx
// 00626308  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_len)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
