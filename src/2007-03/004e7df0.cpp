// roc 2007-03 004e7df0  unit: seg_004e0000  size: 343 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e7df0
//
// 004e7df0  6aff                 push -1
// 004e7df2  68b9e97400           push 0x74e9b9
// 004e7df7  64a100000000         mov eax, dword ptr fs:[0]
// 004e7dfd  50                   push eax
// 004e7dfe  51                   push ecx
// 004e7dff  53                   push ebx
// 004e7e00  55                   push ebp
// 004e7e01  56                   push esi
// 004e7e02  57                   push edi
// 004e7e03  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004e7e08  33c4                 xor eax, esp
// 004e7e0a  50                   push eax
// 004e7e0b  8d442418             lea eax, [esp + 0x18]
// 004e7e0f  64a300000000         mov dword ptr fs:[0], eax
// 004e7e15  8bf1                 mov esi, ecx
// 004e7e17  89742414             mov dword ptr [esp + 0x14], esi
// 004e7e1b  8b442428             mov eax, dword ptr [esp + 0x28]
// 004e7e1f  8b5e04               mov ebx, dword ptr [esi + 4]
// 004e7e22  894604               mov dword ptr [esi + 4], eax
// 004e7e25  f6058ca08b0001       test byte ptr [0x8ba08c], 1
// 004e7e2c  7514                 jne 0x4e7e42
// 004e7e2e  830d8ca08b0001       or dword ptr [0x8ba08c], 1
// 004e7e35  bf0a000000           mov edi, 0xa
// 004e7e3a  893d88a08b00         mov dword ptr [0x8ba088], edi
// 004e7e40  eb06                 jmp 0x4e7e48
// 004e7e42  8b3d88a08b00         mov edi, dword ptr [0x8ba088]
// 004e7e48  8b6e04               mov ebp, dword ptr [esi + 4]
// 004e7e4b  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e7e4e  3be9                 cmp ebp, ecx
// 004e7e50  7e79                 jle 0x4e7ecb
// 004e7e52  85c9                 test ecx, ecx
// 004e7e54  7509                 jne 0x4e7e5f
// 004e7e56  894608               mov dword ptr [esi + 8], eax
// 004e7e59  53                   push ebx
// 004e7e5a  e990000000           jmp 0x4e7eef
// 004e7e5f  3bef                 cmp ebp, edi
// 004e7e61  7d09                 jge 0x4e7e6c
// 004e7e63  897e08               mov dword ptr [esi + 8], edi
// 004e7e66  53                   push ebx
// 004e7e67  e983000000           jmp 0x4e7eef
// 004e7e6c  d905104c7900         fld dword ptr [0x794c10]
// 004e7e72  8bc1                 mov eax, ecx
// 004e7e74  8d0440               lea eax, [eax + eax*2]
// 004e7e77  d95c242c             fstp dword ptr [esp + 0x2c]
// 004e7e7b  03c0                 add eax, eax
// 004e7e7d  03c0                 add eax, eax
// 004e7e7f  03c0                 add eax, eax
// 004e7e81  3d801a0600           cmp eax, 0x61a80
// 004e7e86  7608                 jbe 0x4e7e90
// 004e7e88  d9050c4c7900         fld dword ptr [0x794c0c]
// 004e7e8e  eb0d                 jmp 0x4e7e9d
// 004e7e90  3d00fa0000           cmp eax, 0xfa00
// 004e7e95  760a                 jbe 0x4e7ea1
// 004e7e97  d905084c7900         fld dword ptr [0x794c08]
// 004e7e9d  d95c242c             fstp dword ptr [esp + 0x2c]
// 004e7ea1  8bf9                 mov edi, ecx
// 004e7ea3  897c2428             mov dword ptr [esp + 0x28], edi
// 004e7ea7  db442428             fild dword ptr [esp + 0x28]
// 004e7eab  d84c242c             fmul dword ptr [esp + 0x2c]
// 004e7eaf  e84c731300           call 0x61f200
// 004e7eb4  2bc7                 sub eax, edi
// 004e7eb6  03c5                 add eax, ebp
// 004e7eb8  894608               mov dword ptr [esi + 8], eax
// 004e7ebb  8b0d88a08b00         mov ecx, dword ptr [0x8ba088]
// 004e7ec1  3bc1                 cmp eax, ecx
// 004e7ec3  7d03                 jge 0x4e7ec8
// 004e7ec5  894e08               mov dword ptr [esi + 8], ecx
// 004e7ec8  53                   push ebx
// 004e7ec9  eb24                 jmp 0x4e7eef
// 004e7ecb  b856555555           mov eax, 0x55555556
// 004e7ed0  f7e9                 imul ecx
// 004e7ed2  8bc2                 mov eax, edx
// 004e7ed4  c1e81f               shr eax, 0x1f
// 004e7ed7  03c2                 add eax, edx
// 004e7ed9  3be8                 cmp ebp, eax
// 004e7edb  7f19                 jg 0x4e7ef6
// 004e7edd  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004e7ee2  7412                 je 0x4e7ef6
// 004e7ee4  3bef                 cmp ebp, edi
// 004e7ee6  7e0e                 jle 0x4e7ef6
// 004e7ee8  3beb                 cmp ebp, ebx
// 004e7eea  7c02                 jl 0x4e7eee
// 004e7eec  8beb                 mov ebp, ebx
// 004e7eee  55                   push ebp
// 004e7eef  8bce                 mov ecx, esi
// 004e7ef1  e85afaffff           call 0x4e7950
// 004e7ef6  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004e7ef9  8bfb                 mov edi, ebx
// 004e7efb  897c242c             mov dword ptr [esp + 0x2c], edi
// 004e7eff  7d30                 jge 0x4e7f31
// 004e7f01  83cbff               or ebx, 0xffffffff
// 004e7f04  8b16                 mov edx, dword ptr [esi]
// 004e7f06  8d0c7f               lea ecx, [edi + edi*2]
// 004e7f09  8d0cca               lea ecx, [edx + ecx*8]
// 004e7f0c  894c2428             mov dword ptr [esp + 0x28], ecx
// 004e7f10  85c9                 test ecx, ecx
// 004e7f12  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004e7f1a  7405                 je 0x4e7f21
// 004e7f1c  e89fbe0100           call 0x503dc0
// 004e7f21  83c701               add edi, 1
// 004e7f24  3b7e04               cmp edi, dword ptr [esi + 4]
// 004e7f27  895c2420             mov dword ptr [esp + 0x20], ebx
// 004e7f2b  897c242c             mov dword ptr [esp + 0x2c], edi
// 004e7f2f  7cd3                 jl 0x4e7f04
// 004e7f31  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e7f35  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7f3c  59                   pop ecx
// 004e7f3d  5f                   pop edi
// 004e7f3e  5e                   pop esi
// 004e7f3f  5d                   pop ebp
// 004e7f40  5b                   pop ebx
// 004e7f41  83c410               add esp, 0x10
// 004e7f44  c20800               ret 8
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Array@VFace@MeshAlg@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
