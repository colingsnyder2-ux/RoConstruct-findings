// roc 2007-03 004e7ca0  unit: seg_004e0000  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e7ca0
//
// 004e7ca0  6aff                 push -1
// 004e7ca2  6879e97400           push 0x74e979
// 004e7ca7  64a100000000         mov eax, dword ptr fs:[0]
// 004e7cad  50                   push eax
// 004e7cae  51                   push ecx
// 004e7caf  53                   push ebx
// 004e7cb0  55                   push ebp
// 004e7cb1  56                   push esi
// 004e7cb2  57                   push edi
// 004e7cb3  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004e7cb8  33c4                 xor eax, esp
// 004e7cba  50                   push eax
// 004e7cbb  8d442418             lea eax, [esp + 0x18]
// 004e7cbf  64a300000000         mov dword ptr fs:[0], eax
// 004e7cc5  8bf1                 mov esi, ecx
// 004e7cc7  89742414             mov dword ptr [esp + 0x14], esi
// 004e7ccb  8b442428             mov eax, dword ptr [esp + 0x28]
// 004e7ccf  8b5e04               mov ebx, dword ptr [esi + 4]
// 004e7cd2  894604               mov dword ptr [esi + 4], eax
// 004e7cd5  f60584a08b0001       test byte ptr [0x8ba084], 1
// 004e7cdc  7514                 jne 0x4e7cf2
// 004e7cde  830d84a08b0001       or dword ptr [0x8ba084], 1
// 004e7ce5  bf0a000000           mov edi, 0xa
// 004e7cea  893d80a08b00         mov dword ptr [0x8ba080], edi
// 004e7cf0  eb06                 jmp 0x4e7cf8
// 004e7cf2  8b3d80a08b00         mov edi, dword ptr [0x8ba080]
// 004e7cf8  8b6e04               mov ebp, dword ptr [esi + 4]
// 004e7cfb  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e7cfe  3be9                 cmp ebp, ecx
// 004e7d00  7e70                 jle 0x4e7d72
// 004e7d02  85c9                 test ecx, ecx
// 004e7d04  7509                 jne 0x4e7d0f
// 004e7d06  894608               mov dword ptr [esi + 8], eax
// 004e7d09  53                   push ebx
// 004e7d0a  e987000000           jmp 0x4e7d96
// 004e7d0f  3bef                 cmp ebp, edi
// 004e7d11  7d06                 jge 0x4e7d19
// 004e7d13  897e08               mov dword ptr [esi + 8], edi
// 004e7d16  53                   push ebx
// 004e7d17  eb7d                 jmp 0x4e7d96
// 004e7d19  d905104c7900         fld dword ptr [0x794c10]
// 004e7d1f  8bc1                 mov eax, ecx
// 004e7d21  c1e004               shl eax, 4
// 004e7d24  d95c242c             fstp dword ptr [esp + 0x2c]
// 004e7d28  3d801a0600           cmp eax, 0x61a80
// 004e7d2d  7608                 jbe 0x4e7d37
// 004e7d2f  d9050c4c7900         fld dword ptr [0x794c0c]
// 004e7d35  eb0d                 jmp 0x4e7d44
// 004e7d37  3d00fa0000           cmp eax, 0xfa00
// 004e7d3c  760a                 jbe 0x4e7d48
// 004e7d3e  d905084c7900         fld dword ptr [0x794c08]
// 004e7d44  d95c242c             fstp dword ptr [esp + 0x2c]
// 004e7d48  8bf9                 mov edi, ecx
// 004e7d4a  897c2428             mov dword ptr [esp + 0x28], edi
// 004e7d4e  db442428             fild dword ptr [esp + 0x28]
// 004e7d52  d84c242c             fmul dword ptr [esp + 0x2c]
// 004e7d56  e8a5741300           call 0x61f200
// 004e7d5b  2bc7                 sub eax, edi
// 004e7d5d  03c5                 add eax, ebp
// 004e7d5f  894608               mov dword ptr [esi + 8], eax
// 004e7d62  8b0d80a08b00         mov ecx, dword ptr [0x8ba080]
// 004e7d68  3bc1                 cmp eax, ecx
// 004e7d6a  7d03                 jge 0x4e7d6f
// 004e7d6c  894e08               mov dword ptr [esi + 8], ecx
// 004e7d6f  53                   push ebx
// 004e7d70  eb24                 jmp 0x4e7d96
// 004e7d72  b856555555           mov eax, 0x55555556
// 004e7d77  f7e9                 imul ecx
// 004e7d79  8bc2                 mov eax, edx
// 004e7d7b  c1e81f               shr eax, 0x1f
// 004e7d7e  03c2                 add eax, edx
// 004e7d80  3be8                 cmp ebp, eax
// 004e7d82  7f19                 jg 0x4e7d9d
// 004e7d84  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004e7d89  7412                 je 0x4e7d9d
// 004e7d8b  3bef                 cmp ebp, edi
// 004e7d8d  7e0e                 jle 0x4e7d9d
// 004e7d8f  3beb                 cmp ebp, ebx
// 004e7d91  7c02                 jl 0x4e7d95
// 004e7d93  8beb                 mov ebp, ebx
// 004e7d95  55                   push ebp
// 004e7d96  8bce                 mov ecx, esi
// 004e7d98  e843fbffff           call 0x4e78e0
// 004e7d9d  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004e7da0  8bfb                 mov edi, ebx
// 004e7da2  897c242c             mov dword ptr [esp + 0x2c], edi
// 004e7da6  7d32                 jge 0x4e7dda
// 004e7da8  83cbff               or ebx, 0xffffffff
// 004e7dab  eb03                 jmp 0x4e7db0
// 004e7dad  8d4900               lea ecx, [ecx]
// 004e7db0  8bcf                 mov ecx, edi
// 004e7db2  c1e104               shl ecx, 4
// 004e7db5  030e                 add ecx, dword ptr [esi]
// 004e7db7  894c2428             mov dword ptr [esp + 0x28], ecx
// 004e7dbb  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004e7dc3  7405                 je 0x4e7dca
// 004e7dc5  e816c00100           call 0x503de0
// 004e7dca  83c701               add edi, 1
// 004e7dcd  3b7e04               cmp edi, dword ptr [esi + 4]
// 004e7dd0  895c2420             mov dword ptr [esp + 0x20], ebx
// 004e7dd4  897c242c             mov dword ptr [esp + 0x2c], edi
// 004e7dd8  7cd6                 jl 0x4e7db0
// 004e7dda  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e7dde  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7de5  59                   pop ecx
// 004e7de6  5f                   pop edi
// 004e7de7  5e                   pop esi
// 004e7de8  5d                   pop ebp
// 004e7de9  5b                   pop ebx
// 004e7dea  83c410               add esp, 0x10
// 004e7ded  c20800               ret 8
// library g3d-6.09/G3Dcpp\Discovery.cpp (function ?resize@?$Array@VNetAddress@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Discovery.cpp
