// roc 2010-06 0072fb10  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072fb10
//
// 0072fb10  53                   push ebx
// 0072fb11  55                   push ebp
// 0072fb12  56                   push esi
// 0072fb13  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072fb17  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 0072fb1a  57                   push edi
// 0072fb1b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072fb1f  8d4701               lea eax, [edi + 1]
// 0072fb22  3daaaaaa0a           cmp eax, 0xaaaaaaa
// 0072fb27  7723                 ja 0x72fb4c
// 0072fb29  8b4630               mov eax, dword ptr [esi + 0x30]
// 0072fb2c  8d0c7f               lea ecx, [edi + edi*2]
// 0072fb2f  03c9                 add ecx, ecx
// 0072fb31  8d1440               lea edx, [eax + eax*2]
// 0072fb34  03d2                 add edx, edx
// 0072fb36  03c9                 add ecx, ecx
// 0072fb38  03c9                 add ecx, ecx
// 0072fb3a  51                   push ecx
// 0072fb3b  03d2                 add edx, edx
// 0072fb3d  03d2                 add edx, edx
// 0072fb3f  52                   push edx
// 0072fb40  55                   push ebp
// 0072fb41  56                   push esi
// 0072fb42  e8b9ee0400           call 0x77ea00
// 0072fb47  83c410               add esp, 0x10
// 0072fb4a  eb09                 jmp 0x72fb55
// 0072fb4c  56                   push esi
// 0072fb4d  e88eee0400           call 0x77e9e0
// 0072fb52  83c404               add esp, 4
// 0072fb55  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0072fb58  8bd8                 mov ebx, eax
// 0072fb5a  2bcd                 sub ecx, ebp
// 0072fb5c  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0072fb61  f7e9                 imul ecx
// 0072fb63  c1fa02               sar edx, 2
// 0072fb66  8bc2                 mov eax, edx
// 0072fb68  c1e81f               shr eax, 0x1f
// 0072fb6b  03c2                 add eax, edx
// 0072fb6d  8d0440               lea eax, [eax + eax*2]
// 0072fb70  8d0cc3               lea ecx, [ebx + eax*8]
// 0072fb73  8d147f               lea edx, [edi + edi*2]
// 0072fb76  897e30               mov dword ptr [esi + 0x30], edi
// 0072fb79  8d44d3e8             lea eax, [ebx + edx*8 - 0x18]
// 0072fb7d  5f                   pop edi
// 0072fb7e  895e28               mov dword ptr [esi + 0x28], ebx
// 0072fb81  894e14               mov dword ptr [esi + 0x14], ecx
// 0072fb84  894624               mov dword ptr [esi + 0x24], eax
// 0072fb87  5e                   pop esi
// 0072fb88  5d                   pop ebp
// 0072fb89  5b                   pop ebx
// 0072fb8a  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_reallocCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
