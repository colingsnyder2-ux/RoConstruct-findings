// roc 2007-03 004f3d50  unit: seg_004f0000  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3d50
//
// 004f3d50  6aff                 push -1
// 004f3d52  68f1f37400           push 0x74f3f1
// 004f3d57  64a100000000         mov eax, dword ptr fs:[0]
// 004f3d5d  50                   push eax
// 004f3d5e  83ec08               sub esp, 8
// 004f3d61  53                   push ebx
// 004f3d62  55                   push ebp
// 004f3d63  56                   push esi
// 004f3d64  57                   push edi
// 004f3d65  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f3d6a  33c4                 xor eax, esp
// 004f3d6c  50                   push eax
// 004f3d6d  8d44241c             lea eax, [esp + 0x1c]
// 004f3d71  64a300000000         mov dword ptr fs:[0], eax
// 004f3d77  8bf9                 mov edi, ecx
// 004f3d79  8b4708               mov eax, dword ptr [edi + 8]
// 004f3d7c  8b2f                 mov ebp, dword ptr [edi]
// 004f3d7e  8d0cc500000000       lea ecx, [eax*8]
// 004f3d85  2bc8                 sub ecx, eax
// 004f3d87  03c9                 add ecx, ecx
// 004f3d89  03c9                 add ecx, ecx
// 004f3d8b  6a10                 push 0x10
// 004f3d8d  51                   push ecx
// 004f3d8e  e83dfeffff           call 0x4f3bd0
// 004f3d93  8b4f08               mov ecx, dword ptr [edi + 8]
// 004f3d96  8b542434             mov edx, dword ptr [esp + 0x34]
// 004f3d9a  83c408               add esp, 8
// 004f3d9d  3bd1                 cmp edx, ecx
// 004f3d9f  8907                 mov dword ptr [edi], eax
// 004f3da1  7d02                 jge 0x4f3da5
// 004f3da3  8bca                 mov ecx, edx
// 004f3da5  8d34cd00000000       lea esi, [ecx*8]
// 004f3dac  2bf1                 sub esi, ecx
// 004f3dae  8d3cb0               lea edi, [eax + esi*4]
// 004f3db1  8bf0                 mov esi, eax
// 004f3db3  3bf7                 cmp esi, edi
// 004f3db5  8bdd                 mov ebx, ebp
// 004f3db7  89742414             mov dword ptr [esp + 0x14], esi
// 004f3dbb  7336                 jae 0x4f3df3
// 004f3dbd  8d4900               lea ecx, [ecx]
// 004f3dc0  89742418             mov dword ptr [esp + 0x18], esi
// 004f3dc4  85f6                 test esi, esi
// 004f3dc6  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004f3dce  740d                 je 0x4f3ddd
// 004f3dd0  53                   push ebx
// 004f3dd1  8bce                 mov ecx, esi
// 004f3dd3  ff157ce77700         call dword ptr [0x77e77c]
// 004f3dd9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004f3ddd  83c61c               add esi, 0x1c
// 004f3de0  83c31c               add ebx, 0x1c
// 004f3de3  3bf7                 cmp esi, edi
// 004f3de5  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004f3ded  89742414             mov dword ptr [esp + 0x14], esi
// 004f3df1  72cd                 jb 0x4f3dc0
// 004f3df3  8d04d500000000       lea eax, [edx*8]
// 004f3dfa  2bc2                 sub eax, edx
// 004f3dfc  8d7c8500             lea edi, [ebp + eax*4]
// 004f3e00  3bef                 cmp ebp, edi
// 004f3e02  8bf5                 mov esi, ebp
// 004f3e04  730f                 jae 0x4f3e15
// 004f3e06  8bce                 mov ecx, esi
// 004f3e08  ff158ce77700         call dword ptr [0x77e78c]
// 004f3e0e  83c61c               add esi, 0x1c
// 004f3e11  3bf7                 cmp esi, edi
// 004f3e13  72f1                 jb 0x4f3e06
// 004f3e15  55                   push ebp
// 004f3e16  e865f5ffff           call 0x4f3380
// 004f3e1b  83c404               add esp, 4
// 004f3e1e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f3e22  64890d00000000       mov dword ptr fs:[0], ecx
// 004f3e29  59                   pop ecx
// 004f3e2a  5f                   pop edi
// 004f3e2b  5e                   pop esi
// 004f3e2c  5d                   pop ebp
// 004f3e2d  5b                   pop ebx
// 004f3e2e  83c414               add esp, 0x14
// 004f3e31  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
