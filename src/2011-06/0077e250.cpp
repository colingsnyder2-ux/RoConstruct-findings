// roc 2011-06 0077e250  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e250
//
// 0077e250  53                   push ebx
// 0077e251  55                   push ebp
// 0077e252  56                   push esi
// 0077e253  8b742410             mov esi, dword ptr [esp + 0x10]
// 0077e257  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 0077e25a  57                   push edi
// 0077e25b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077e25f  8d4701               lea eax, [edi + 1]
// 0077e262  3daaaaaa0a           cmp eax, 0xaaaaaaa
// 0077e267  7723                 ja 0x77e28c
// 0077e269  8b4630               mov eax, dword ptr [esi + 0x30]
// 0077e26c  8d0c7f               lea ecx, [edi + edi*2]
// 0077e26f  03c9                 add ecx, ecx
// 0077e271  8d1440               lea edx, [eax + eax*2]
// 0077e274  03d2                 add edx, edx
// 0077e276  03c9                 add ecx, ecx
// 0077e278  03c9                 add ecx, ecx
// 0077e27a  51                   push ecx
// 0077e27b  03d2                 add edx, edx
// 0077e27d  03d2                 add edx, edx
// 0077e27f  52                   push edx
// 0077e280  55                   push ebp
// 0077e281  56                   push esi
// 0077e282  e8b9cb0500           call 0x7dae40
// 0077e287  83c410               add esp, 0x10
// 0077e28a  eb09                 jmp 0x77e295
// 0077e28c  56                   push esi
// 0077e28d  e88ecb0500           call 0x7dae20
// 0077e292  83c404               add esp, 4
// 0077e295  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0077e298  8bd8                 mov ebx, eax
// 0077e29a  2bcd                 sub ecx, ebp
// 0077e29c  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0077e2a1  f7e9                 imul ecx
// 0077e2a3  c1fa02               sar edx, 2
// 0077e2a6  8bc2                 mov eax, edx
// 0077e2a8  c1e81f               shr eax, 0x1f
// 0077e2ab  03c2                 add eax, edx
// 0077e2ad  8d0440               lea eax, [eax + eax*2]
// 0077e2b0  8d0cc3               lea ecx, [ebx + eax*8]
// 0077e2b3  8d147f               lea edx, [edi + edi*2]
// 0077e2b6  897e30               mov dword ptr [esi + 0x30], edi
// 0077e2b9  8d44d3e8             lea eax, [ebx + edx*8 - 0x18]
// 0077e2bd  5f                   pop edi
// 0077e2be  895e28               mov dword ptr [esi + 0x28], ebx
// 0077e2c1  894e14               mov dword ptr [esi + 0x14], ecx
// 0077e2c4  894624               mov dword ptr [esi + 0x24], eax
// 0077e2c7  5e                   pop esi
// 0077e2c8  5d                   pop ebp
// 0077e2c9  5b                   pop ebx
// 0077e2ca  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_reallocCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
