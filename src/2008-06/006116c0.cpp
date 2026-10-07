// roc 2008-06 006116c0  unit: seg_00610000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006116c0
//
// 006116c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006116c4  53                   push ebx
// 006116c5  56                   push esi
// 006116c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006116ca  57                   push edi
// 006116cb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006116cf  50                   push eax
// 006116d0  57                   push edi
// 006116d1  56                   push esi
// 006116d2  e839090000           call 0x612010
// 006116d7  8bd8                 mov ebx, eax
// 006116d9  83c40c               add esp, 0xc
// 006116dc  85db                 test ebx, ebx
// 006116de  7534                 jne 0x611714
// 006116e0  55                   push ebp
// 006116e1  6a04                 push 4
// 006116e3  56                   push esi
// 006116e4  e837070000           call 0x611e20
// 006116e9  57                   push edi
// 006116ea  56                   push esi
// 006116eb  8be8                 mov ebp, eax
// 006116ed  e80e070000           call 0x611e00
// 006116f2  50                   push eax
// 006116f3  56                   push esi
// 006116f4  e827070000           call 0x611e20
// 006116f9  50                   push eax
// 006116fa  55                   push ebp
// 006116fb  6820388400           push 0x843820
// 00611700  56                   push esi
// 00611701  e81a0c0000           call 0x612320
// 00611706  50                   push eax
// 00611707  57                   push edi
// 00611708  56                   push esi
// 00611709  e8c2fdffff           call 0x6114d0
// 0061170e  83c434               add esp, 0x34
// 00611711  8bc3                 mov eax, ebx
// 00611713  5d                   pop ebp
// 00611714  5f                   pop edi
// 00611715  5e                   pop esi
// 00611716  5b                   pop ebx
// 00611717  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checklstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
