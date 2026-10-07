// roc 2007-08 004f6e40  unit: boost::bad_lexical_cast  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f6e40
//
// 004f6e40  6aff                 push -1
// 004f6e42  68b1de7400           push 0x74deb1
// 004f6e47  64a100000000         mov eax, dword ptr fs:[0]
// 004f6e4d  50                   push eax
// 004f6e4e  83ec10               sub esp, 0x10
// 004f6e51  53                   push ebx
// 004f6e52  55                   push ebp
// 004f6e53  56                   push esi
// 004f6e54  57                   push edi
// 004f6e55  a188518b00           mov eax, dword ptr [0x8b5188]
// 004f6e5a  33c4                 xor eax, esp
// 004f6e5c  50                   push eax
// 004f6e5d  8d442424             lea eax, [esp + 0x24]
// 004f6e61  64a300000000         mov dword ptr fs:[0], eax
// 004f6e67  8bf1                 mov esi, ecx
// 004f6e69  8b4604               mov eax, dword ptr [esi + 4]
// 004f6e6c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 004f6e70  3be8                 cmp ebp, eax
// 004f6e72  89442420             mov dword ptr [esp + 0x20], eax
// 004f6e76  896e04               mov dword ptr [esi + 4], ebp
// 004f6e79  7d2a                 jge 0x4f6ea5
// 004f6e7b  8d7c6d00             lea edi, [ebp + ebp*2]
// 004f6e7f  03ff                 add edi, edi
// 004f6e81  03ff                 add edi, edi
// 004f6e83  8bd8                 mov ebx, eax
// 004f6e85  03ff                 add edi, edi
// 004f6e87  2bdd                 sub ebx, ebp
// 004f6e89  8da42400000000       lea esp, [esp]
// 004f6e90  8b0e                 mov ecx, dword ptr [esi]
// 004f6e92  03cf                 add ecx, edi
// 004f6e94  e8c7d1ffff           call 0x4f4060
// 004f6e99  83c718               add edi, 0x18
// 004f6e9c  83eb01               sub ebx, 1
// 004f6e9f  75ef                 jne 0x4f6e90
// 004f6ea1  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f6ea5  f605d8fb8b0001       test byte ptr [0x8bfbd8], 1
// 004f6eac  7514                 jne 0x4f6ec2
// 004f6eae  830dd8fb8b0001       or dword ptr [0x8bfbd8], 1
// 004f6eb5  bb0a000000           mov ebx, 0xa
// 004f6eba  891dd4fb8b00         mov dword ptr [0x8bfbd4], ebx
// 004f6ec0  eb06                 jmp 0x4f6ec8
// 004f6ec2  8b1dd4fb8b00         mov ebx, dword ptr [0x8bfbd4]
// 004f6ec8  8b7e04               mov edi, dword ptr [esi + 4]
// 004f6ecb  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f6ece  3bf9                 cmp edi, ecx
// 004f6ed0  0f8ed6000000         jle 0x4f6fac
// 004f6ed6  85c9                 test ecx, ecx
// 004f6ed8  7560                 jne 0x4f6f3a
// 004f6eda  896e08               mov dword ptr [esi + 8], ebp
// 004f6edd  50                   push eax
// 004f6ede  8bce                 mov ecx, esi
// 004f6ee0  e82bf3ffff           call 0x4f6210
// 004f6ee5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004f6ee9  3b6e04               cmp ebp, dword ptr [esi + 4]
// 004f6eec  8bd5                 mov edx, ebp
// 004f6eee  7d34                 jge 0x4f6f24
// 004f6ef0  8d4c6d00             lea ecx, [ebp + ebp*2]
// 004f6ef4  03c9                 add ecx, ecx
// 004f6ef6  03c9                 add ecx, ecx
// 004f6ef8  03c9                 add ecx, ecx
// 004f6efa  8d9b00000000         lea ebx, [ebx]
// 004f6f00  8b06                 mov eax, dword ptr [esi]
// 004f6f02  03c1                 add eax, ecx
// 004f6f04  7413                 je 0x4f6f19
// 004f6f06  33ff                 xor edi, edi
// 004f6f08  897804               mov dword ptr [eax + 4], edi
// 004f6f0b  897808               mov dword ptr [eax + 8], edi
// 004f6f0e  8938                 mov dword ptr [eax], edi
// 004f6f10  897810               mov dword ptr [eax + 0x10], edi
// 004f6f13  897814               mov dword ptr [eax + 0x14], edi
// 004f6f16  89780c               mov dword ptr [eax + 0xc], edi
// 004f6f19  83c201               add edx, 1
// 004f6f1c  83c118               add ecx, 0x18
// 004f6f1f  3b5604               cmp edx, dword ptr [esi + 4]
// 004f6f22  7cdc                 jl 0x4f6f00
// 004f6f24  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004f6f28  64890d00000000       mov dword ptr fs:[0], ecx
// 004f6f2f  59                   pop ecx
// 004f6f30  5f                   pop edi
// 004f6f31  5e                   pop esi
// 004f6f32  5d                   pop ebp
// 004f6f33  5b                   pop ebx
// 004f6f34  83c41c               add esp, 0x1c
// 004f6f37  c20800               ret 8
// 004f6f3a  3bfb                 cmp edi, ebx
// 004f6f3c  7d05                 jge 0x4f6f43
// 004f6f3e  895e08               mov dword ptr [esi + 8], ebx
// 004f6f41  eb9a                 jmp 0x4f6edd
// 004f6f43  d905387b7900         fld dword ptr [0x797b38]
// 004f6f49  8bc1                 mov eax, ecx
// 004f6f4b  8d0440               lea eax, [eax + eax*2]
// 004f6f4e  d95c2438             fstp dword ptr [esp + 0x38]
// 004f6f52  03c0                 add eax, eax
// 004f6f54  03c0                 add eax, eax
// 004f6f56  03c0                 add eax, eax
// 004f6f58  3d801a0600           cmp eax, 0x61a80
// 004f6f5d  7608                 jbe 0x4f6f67
// 004f6f5f  d905347b7900         fld dword ptr [0x797b34]
// 004f6f65  eb0d                 jmp 0x4f6f74
// 004f6f67  3d00fa0000           cmp eax, 0xfa00
// 004f6f6c  760a                 jbe 0x4f6f78
// 004f6f6e  d90588797900         fld dword ptr [0x797988]
// 004f6f74  d95c2438             fstp dword ptr [esp + 0x38]
// 004f6f78  8be9                 mov ebp, ecx
// 004f6f7a  896c2434             mov dword ptr [esp + 0x34], ebp
// 004f6f7e  db442434             fild dword ptr [esp + 0x34]
// 004f6f82  d84c2438             fmul dword ptr [esp + 0x38]
// 004f6f86  e8d59d1300           call 0x630d60
// 004f6f8b  2bc5                 sub eax, ebp
// 004f6f8d  03c7                 add eax, edi
// 004f6f8f  894608               mov dword ptr [esi + 8], eax
// 004f6f92  8b0dd4fb8b00         mov ecx, dword ptr [0x8bfbd4]
// 004f6f98  3bc1                 cmp eax, ecx
// 004f6f9a  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f6f9e  0f8d39ffffff         jge 0x4f6edd
// 004f6fa4  894e08               mov dword ptr [esi + 8], ecx
// 004f6fa7  e931ffffff           jmp 0x4f6edd
// 004f6fac  b856555555           mov eax, 0x55555556
// 004f6fb1  f7e9                 imul ecx
// 004f6fb3  8bc2                 mov eax, edx
// 004f6fb5  c1e81f               shr eax, 0x1f
// 004f6fb8  03c2                 add eax, edx
// 004f6fba  3bf8                 cmp edi, eax
// 004f6fbc  0f8f23ffffff         jg 0x4f6ee5
// 004f6fc2  807c243800           cmp byte ptr [esp + 0x38], 0
// 004f6fc7  0f8418ffffff         je 0x4f6ee5
// 004f6fcd  3bfb                 cmp edi, ebx
// 004f6fcf  0f8e10ffffff         jle 0x4f6ee5
// 004f6fd5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004f6fd9  3bfd                 cmp edi, ebp
// 004f6fdb  7c02                 jl 0x4f6fdf
// 004f6fdd  8bfd                 mov edi, ebp
// 004f6fdf  57                   push edi
// 004f6fe0  8bce                 mov ecx, esi
// 004f6fe2  e829f2ffff           call 0x4f6210
// 004f6fe7  e9fdfeffff           jmp 0x4f6ee9
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?resize@?$Array@VVertex@MeshAlg@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
