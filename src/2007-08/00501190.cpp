// from server: 100% by tester
// roc 2007-03 004f4d00  unit: seg_004f0000  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f4d00
//
// 004f4d00  6aff                 push -1
// 004f4d02  6849fd7400           push 0x74fd49
// 004f4d07  64a100000000         mov eax, dword ptr fs:[0]
// 004f4d0d  50                   push eax
// 004f4d0e  83ec08               sub esp, 8
// 004f4d11  53                   push ebx
// 004f4d12  55                   push ebp
// 004f4d13  56                   push esi
// 004f4d14  57                   push edi
// 004f4d15  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f4d1a  33c4                 xor eax, esp
// 004f4d1c  50                   push eax
// 004f4d1d  8d44241c             lea eax, [esp + 0x1c]
// 004f4d21  64a300000000         mov dword ptr fs:[0], eax
// 004f4d27  8bf1                 mov esi, ecx
// 004f4d29  89742418             mov dword ptr [esp + 0x18], esi
// 004f4d2d  8b4604               mov eax, dword ptr [esi + 4]
// 004f4d30  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004f4d34  3be8                 cmp ebp, eax
// 004f4d36  89442414             mov dword ptr [esp + 0x14], eax
// 004f4d3a  896e04               mov dword ptr [esi + 4], ebp
// 004f4d3d  7d27                 jge 0x4f4d66
// 004f4d3f  8d3ced00000000       lea edi, [ebp*8]
// 004f4d46  2bfd                 sub edi, ebp
// 004f4d48  03ff                 add edi, edi
// 004f4d4a  8bd8                 mov ebx, eax
// 004f4d4c  03ff                 add edi, edi
// 004f4d4e  2bdd                 sub ebx, ebp
// 004f4d50  8b0e                 mov ecx, dword ptr [esi]
// 004f4d52  03cf                 add ecx, edi
// 004f4d54  ff158ce77700         call dword ptr [0x77e78c]
// 004f4d5a  83c71c               add edi, 0x1c
// 004f4d5d  83eb01               sub ebx, 1
// 004f4d60  75ee                 jne 0x4f4d50
// 004f4d62  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f4d66  f60508ae8b0001       test byte ptr [0x8bae08], 1
// 004f4d6d  7514                 jne 0x4f4d83
// 004f4d6f  830d08ae8b0001       or dword ptr [0x8bae08], 1
// 004f4d76  bb0a000000           mov ebx, 0xa
// 004f4d7b  891d04ae8b00         mov dword ptr [0x8bae04], ebx
// 004f4d81  eb06                 jmp 0x4f4d89
// 004f4d83  8b1d04ae8b00         mov ebx, dword ptr [0x8bae04]
// 004f4d89  8b7e04               mov edi, dword ptr [esi + 4]
// 004f4d8c  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f4d8f  3bf9                 cmp edi, ecx
// 004f4d91  7e7f                 jle 0x4f4e12
// 004f4d93  85c9                 test ecx, ecx
// 004f4d95  7509                 jne 0x4f4da0
// 004f4d97  896e08               mov dword ptr [esi + 8], ebp
// 004f4d9a  50                   push eax
// 004f4d9b  e99a000000           jmp 0x4f4e3a
// 004f4da0  3bfb                 cmp edi, ebx
// 004f4da2  7d09                 jge 0x4f4dad
// 004f4da4  895e08               mov dword ptr [esi + 8], ebx
// 004f4da7  50                   push eax
// 004f4da8  e98d000000           jmp 0x4f4e3a
// 004f4dad  d905104c7900         fld dword ptr [0x794c10]
// 004f4db3  8d04cd00000000       lea eax, [ecx*8]
// 004f4dba  2bc1                 sub eax, ecx
// 004f4dbc  d95c2430             fstp dword ptr [esp + 0x30]
// 004f4dc0  03c0                 add eax, eax
// 004f4dc2  03c0                 add eax, eax
// 004f4dc4  3d801a0600           cmp eax, 0x61a80
// 004f4dc9  7608                 jbe 0x4f4dd3
// 004f4dcb  d9050c4c7900         fld dword ptr [0x794c0c]
// 004f4dd1  eb0d                 jmp 0x4f4de0
// 004f4dd3  3d00fa0000           cmp eax, 0xfa00
// 004f4dd8  760a                 jbe 0x4f4de4
// 004f4dda  d905084c7900         fld dword ptr [0x794c08]
// 004f4de0  d95c2430             fstp dword ptr [esp + 0x30]
// 004f4de4  8be9                 mov ebp, ecx
// 004f4de6  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004f4dea  db44242c             fild dword ptr [esp + 0x2c]
// 004f4dee  d84c2430             fmul dword ptr [esp + 0x30]
// 004f4df2  e809a41200           call 0x61f200
// 004f4df7  2bc5                 sub eax, ebp
// 004f4df9  03c7                 add eax, edi
// 004f4dfb  894608               mov dword ptr [esi + 8], eax
// 004f4dfe  8b0d04ae8b00         mov ecx, dword ptr [0x8bae04]
// 004f4e04  3bc1                 cmp eax, ecx
// 004f4e06  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f4e0a  7d03                 jge 0x4f4e0f
// 004f4e0c  894e08               mov dword ptr [esi + 8], ecx
// 004f4e0f  50                   push eax
// 004f4e10  eb28                 jmp 0x4f4e3a
// 004f4e12  b856555555           mov eax, 0x55555556
// 004f4e17  f7e9                 imul ecx
// 004f4e19  8bc2                 mov eax, edx
// 004f4e1b  c1e81f               shr eax, 0x1f
// 004f4e1e  03c2                 add eax, edx
// 004f4e20  3bf8                 cmp edi, eax
// 004f4e22  7f1d                 jg 0x4f4e41
// 004f4e24  807c243000           cmp byte ptr [esp + 0x30], 0
// 004f4e29  7416                 je 0x4f4e41
// 004f4e2b  3bfb                 cmp edi, ebx
// 004f4e2d  7e12                 jle 0x4f4e41
// 004f4e2f  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f4e33  3bf8                 cmp edi, eax
// 004f4e35  7c02                 jl 0x4f4e39
// 004f4e37  8bf8                 mov edi, eax
// 004f4e39  57                   push edi
// 004f4e3a  8bce                 mov ecx, esi
// 004f4e3c  e80fefffff           call 0x4f3d50
// 004f4e41  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f4e45  3b7e04               cmp edi, dword ptr [esi + 4]
// 004f4e48  897c2430             mov dword ptr [esp + 0x30], edi
// 004f4e4c  7d37                 jge 0x4f4e85
// 004f4e4e  83cbff               or ebx, 0xffffffff
// 004f4e51  8b16                 mov edx, dword ptr [esi]
// 004f4e53  8d0cfd00000000       lea ecx, [edi*8]
// 004f4e5a  2bcf                 sub ecx, edi
// 004f4e5c  8d0c8a               lea ecx, [edx + ecx*4]
// 004f4e5f  894c242c             mov dword ptr [esp + 0x2c], ecx
// 004f4e63  85c9                 test ecx, ecx
// 004f4e65  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004f4e6d  7406                 je 0x4f4e75
// 004f4e6f  ff1584e77700         call dword ptr [0x77e784]
// 004f4e75  83c701               add edi, 1
// 004f4e78  3b7e04               cmp edi, dword ptr [esi + 4]
// 004f4e7b  895c2424             mov dword ptr [esp + 0x24], ebx
// 004f4e7f  897c2430             mov dword ptr [esp + 0x30], edi
// 004f4e83  7ccc                 jl 0x4f4e51
// 004f4e85  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f4e89  64890d00000000       mov dword ptr fs:[0], ecx
// 004f4e90  59                   pop ecx
// 004f4e91  5f                   pop edi
// 004f4e92  5e                   pop esi
// 004f4e93  5d                   pop ebp
// 004f4e94  5b                   pop ebx
// 004f4e95  83c414               add esp, 0x14
// 004f4e98  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
