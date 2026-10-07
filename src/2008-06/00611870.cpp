// roc 2008-06 00611870  unit: seg_00610000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611870
//
// 00611870  56                   push esi
// 00611871  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00611875  57                   push edi
// 00611876  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061187a  56                   push esi
// 0061187b  57                   push edi
// 0061187c  e87f050000           call 0x611e00
// 00611881  83c408               add esp, 8
// 00611884  85c0                 test eax, eax
// 00611886  7f07                 jg 0x61188f
// 00611888  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061188c  5f                   pop edi
// 0061188d  5e                   pop esi
// 0061188e  c3                   ret 
// 0061188f  56                   push esi
// 00611890  57                   push edi
// 00611891  e86affffff           call 0x611800
// 00611896  83c408               add esp, 8
// 00611899  5f                   pop edi
// 0061189a  5e                   pop esi
// 0061189b  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
