// from server: 100% by auto
// roc 2008-06 00611640  unit: seg_00610000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611640
//
// 00611640  56                   push esi
// 00611641  8b742408             mov esi, dword ptr [esp + 8]
// 00611645  57                   push edi
// 00611646  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0061164a  57                   push edi
// 0061164b  56                   push esi
// 0061164c  e8af070000           call 0x611e00
// 00611651  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00611655  83c408               add esp, 8
// 00611658  3bc1                 cmp eax, ecx
// 0061165a  7431                 je 0x61168d
// 0061165c  53                   push ebx
// 0061165d  51                   push ecx
// 0061165e  56                   push esi
// 0061165f  e8bc070000           call 0x611e20
// 00611664  57                   push edi
// 00611665  56                   push esi
// 00611666  8bd8                 mov ebx, eax
// 00611668  e893070000           call 0x611e00
// 0061166d  50                   push eax
// 0061166e  56                   push esi
// 0061166f  e8ac070000           call 0x611e20
// 00611674  50                   push eax
// 00611675  53                   push ebx
// 00611676  6820388400           push 0x843820
// 0061167b  56                   push esi
// 0061167c  e89f0c0000           call 0x612320
// 00611681  50                   push eax
// 00611682  57                   push edi
// 00611683  56                   push esi
// 00611684  e847feffff           call 0x6114d0
// 00611689  83c434               add esp, 0x34
// 0061168c  5b                   pop ebx
// 0061168d  5f                   pop edi
// 0061168e  5e                   pop esi
// 0061168f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checktype)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
