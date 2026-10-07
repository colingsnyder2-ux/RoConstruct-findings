// roc 2012-06 008546e0  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008546e0
//
// 008546e0  53                   push ebx
// 008546e1  55                   push ebp
// 008546e2  56                   push esi
// 008546e3  8b742410             mov esi, dword ptr [esp + 0x10]
// 008546e7  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 008546ea  57                   push edi
// 008546eb  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008546ef  8d4701               lea eax, [edi + 1]
// 008546f2  3daaaaaa0a           cmp eax, 0xaaaaaaa
// 008546f7  7723                 ja 0x85471c
// 008546f9  8b4630               mov eax, dword ptr [esi + 0x30]
// 008546fc  8d0c7f               lea ecx, [edi + edi*2]
// 008546ff  03c9                 add ecx, ecx
// 00854701  8d1440               lea edx, [eax + eax*2]
// 00854704  03d2                 add edx, edx
// 00854706  03c9                 add ecx, ecx
// 00854708  03c9                 add ecx, ecx
// 0085470a  51                   push ecx
// 0085470b  03d2                 add edx, edx
// 0085470d  03d2                 add edx, edx
// 0085470f  52                   push edx
// 00854710  55                   push ebp
// 00854711  56                   push esi
// 00854712  e849280e00           call 0x936f60
// 00854717  83c410               add esp, 0x10
// 0085471a  eb09                 jmp 0x854725
// 0085471c  56                   push esi
// 0085471d  e81e280e00           call 0x936f40
// 00854722  83c404               add esp, 4
// 00854725  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00854728  8bd8                 mov ebx, eax
// 0085472a  2bcd                 sub ecx, ebp
// 0085472c  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00854731  f7e9                 imul ecx
// 00854733  c1fa02               sar edx, 2
// 00854736  8bc2                 mov eax, edx
// 00854738  c1e81f               shr eax, 0x1f
// 0085473b  03c2                 add eax, edx
// 0085473d  8d0440               lea eax, [eax + eax*2]
// 00854740  8d0cc3               lea ecx, [ebx + eax*8]
// 00854743  8d147f               lea edx, [edi + edi*2]
// 00854746  897e30               mov dword ptr [esi + 0x30], edi
// 00854749  8d44d3e8             lea eax, [ebx + edx*8 - 0x18]
// 0085474d  5f                   pop edi
// 0085474e  895e28               mov dword ptr [esi + 0x28], ebx
// 00854751  894e14               mov dword ptr [esi + 0x14], ecx
// 00854754  894624               mov dword ptr [esi + 0x24], eax
// 00854757  5e                   pop esi
// 00854758  5d                   pop ebp
// 00854759  5b                   pop ebx
// 0085475a  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_reallocCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
