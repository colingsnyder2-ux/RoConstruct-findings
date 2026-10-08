// from server: 100% by auto
// roc 2007-08 005beb50  unit: boost::detail::H::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005beb50
//
// 005beb50  55                   push ebp
// 005beb51  8b6c2408             mov ebp, dword ptr [esp + 8]
// 005beb55  56                   push esi
// 005beb56  be01000000           mov esi, 1
// 005beb5b  397504               cmp dword ptr [ebp + 4], esi
// 005beb5e  7e63                 jle 0x5bebc3
// 005beb60  53                   push ebx
// 005beb61  8b5d08               mov ebx, dword ptr [ebp + 8]
// 005beb64  57                   push edi
// 005beb65  6aff                 push -1
// 005beb67  53                   push ebx
// 005beb68  e883eeffff           call 0x5bd9f0
// 005beb6d  83c408               add esp, 8
// 005beb70  89442414             mov dword ptr [esp + 0x14], eax
// 005beb74  bffeffffff           mov edi, 0xfffffffe
// 005beb79  8da42400000000       lea esp, [esp]
// 005beb80  57                   push edi
// 005beb81  53                   push ebx
// 005beb82  e869eeffff           call 0x5bd9f0
// 005beb87  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005beb8a  8bd1                 mov edx, ecx
// 005beb8c  2bd6                 sub edx, esi
// 005beb8e  83c201               add edx, 1
// 005beb91  83c408               add esp, 8
// 005beb94  83fa0a               cmp edx, 0xa
// 005beb97  7d06                 jge 0x5beb9f
// 005beb99  39442414             cmp dword ptr [esp + 0x14], eax
// 005beb9d  760e                 jbe 0x5bebad
// 005beb9f  01442414             add dword ptr [esp + 0x14], eax
// 005beba3  83c601               add esi, 1
// 005beba6  83ef01               sub edi, 1
// 005beba9  3bf1                 cmp esi, ecx
// 005bebab  7cd3                 jl 0x5beb80
// 005bebad  56                   push esi
// 005bebae  53                   push ebx
// 005bebaf  e87cf9ffff           call 0x5be530
// 005bebb4  83c408               add esp, 8
// 005bebb7  b801000000           mov eax, 1
// 005bebbc  2bc6                 sub eax, esi
// 005bebbe  014504               add dword ptr [ebp + 4], eax
// 005bebc1  5f                   pop edi
// 005bebc2  5b                   pop ebx
// 005bebc3  5e                   pop esi
// 005bebc4  5d                   pop ebp
// 005bebc5  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _adjuststack)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
