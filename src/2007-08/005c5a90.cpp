// from server: 100% by auto
// roc 2007-08 005c5a90  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5a90
//
// 005c5a90  53                   push ebx
// 005c5a91  55                   push ebp
// 005c5a92  56                   push esi
// 005c5a93  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c5a97  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 005c5a9a  57                   push edi
// 005c5a9b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005c5a9f  8d4701               lea eax, [edi + 1]
// 005c5aa2  3daaaaaa0a           cmp eax, 0xaaaaaaa
// 005c5aa7  7723                 ja 0x5c5acc
// 005c5aa9  8b4630               mov eax, dword ptr [esi + 0x30]
// 005c5aac  8d0c7f               lea ecx, [edi + edi*2]
// 005c5aaf  03c9                 add ecx, ecx
// 005c5ab1  8d1440               lea edx, [eax + eax*2]
// 005c5ab4  03d2                 add edx, edx
// 005c5ab6  03c9                 add ecx, ecx
// 005c5ab8  03c9                 add ecx, ecx
// 005c5aba  51                   push ecx
// 005c5abb  03d2                 add edx, edx
// 005c5abd  03d2                 add edx, edx
// 005c5abf  52                   push edx
// 005c5ac0  55                   push ebp
// 005c5ac1  56                   push esi
// 005c5ac2  e829df0400           call 0x6139f0
// 005c5ac7  83c410               add esp, 0x10
// 005c5aca  eb09                 jmp 0x5c5ad5
// 005c5acc  56                   push esi
// 005c5acd  e8fede0400           call 0x6139d0
// 005c5ad2  83c404               add esp, 4
// 005c5ad5  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005c5ad8  8bd8                 mov ebx, eax
// 005c5ada  2bcd                 sub ecx, ebp
// 005c5adc  b8abaaaa2a           mov eax, 0x2aaaaaab
// 005c5ae1  f7e9                 imul ecx
// 005c5ae3  c1fa02               sar edx, 2
// 005c5ae6  8bc2                 mov eax, edx
// 005c5ae8  c1e81f               shr eax, 0x1f
// 005c5aeb  03c2                 add eax, edx
// 005c5aed  8d0440               lea eax, [eax + eax*2]
// 005c5af0  8d0cc3               lea ecx, [ebx + eax*8]
// 005c5af3  8d147f               lea edx, [edi + edi*2]
// 005c5af6  897e30               mov dword ptr [esi + 0x30], edi
// 005c5af9  8d44d3e8             lea eax, [ebx + edx*8 - 0x18]
// 005c5afd  5f                   pop edi
// 005c5afe  895e28               mov dword ptr [esi + 0x28], ebx
// 005c5b01  894e14               mov dword ptr [esi + 0x14], ecx
// 005c5b04  894624               mov dword ptr [esi + 0x24], eax
// 005c5b07  5e                   pop esi
// 005c5b08  5d                   pop ebp
// 005c5b09  5b                   pop ebx
// 005c5b0a  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_reallocCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
