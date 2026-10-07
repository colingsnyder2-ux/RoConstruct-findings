// roc 2008-06 00621ad0  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00621ad0
//
// 00621ad0  53                   push ebx
// 00621ad1  55                   push ebp
// 00621ad2  56                   push esi
// 00621ad3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00621ad7  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 00621ada  57                   push edi
// 00621adb  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00621adf  8d4701               lea eax, [edi + 1]
// 00621ae2  3daaaaaa0a           cmp eax, 0xaaaaaaa
// 00621ae7  7723                 ja 0x621b0c
// 00621ae9  8b4630               mov eax, dword ptr [esi + 0x30]
// 00621aec  8d0c7f               lea ecx, [edi + edi*2]
// 00621aef  03c9                 add ecx, ecx
// 00621af1  8d1440               lea edx, [eax + eax*2]
// 00621af4  03d2                 add edx, edx
// 00621af6  03c9                 add ecx, ecx
// 00621af8  03c9                 add ecx, ecx
// 00621afa  51                   push ecx
// 00621afb  03d2                 add edx, edx
// 00621afd  03d2                 add edx, edx
// 00621aff  52                   push edx
// 00621b00  55                   push ebp
// 00621b01  56                   push esi
// 00621b02  e8e9eb0300           call 0x6606f0
// 00621b07  83c410               add esp, 0x10
// 00621b0a  eb09                 jmp 0x621b15
// 00621b0c  56                   push esi
// 00621b0d  e8beeb0300           call 0x6606d0
// 00621b12  83c404               add esp, 4
// 00621b15  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00621b18  8bd8                 mov ebx, eax
// 00621b1a  2bcd                 sub ecx, ebp
// 00621b1c  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00621b21  f7e9                 imul ecx
// 00621b23  c1fa02               sar edx, 2
// 00621b26  8bc2                 mov eax, edx
// 00621b28  c1e81f               shr eax, 0x1f
// 00621b2b  03c2                 add eax, edx
// 00621b2d  8d0440               lea eax, [eax + eax*2]
// 00621b30  8d0cc3               lea ecx, [ebx + eax*8]
// 00621b33  8d147f               lea edx, [edi + edi*2]
// 00621b36  897e30               mov dword ptr [esi + 0x30], edi
// 00621b39  8d44d3e8             lea eax, [ebx + edx*8 - 0x18]
// 00621b3d  5f                   pop edi
// 00621b3e  895e28               mov dword ptr [esi + 0x28], ebx
// 00621b41  894e14               mov dword ptr [esi + 0x14], ecx
// 00621b44  894624               mov dword ptr [esi + 0x24], eax
// 00621b47  5e                   pop esi
// 00621b48  5d                   pop ebp
// 00621b49  5b                   pop ebx
// 00621b4a  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_reallocCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
