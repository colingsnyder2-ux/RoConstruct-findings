// from server: 100% by auto
// roc 2010-06 00495f00  unit: seg_00490000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00495f00
//
// 00495f00  64a100000000         mov eax, dword ptr fs:[0]
// 00495f06  6aff                 push -1
// 00495f08  6891299a00           push 0x9a2991
// 00495f0d  50                   push eax
// 00495f0e  64892500000000       mov dword ptr fs:[0], esp
// 00495f15  83ec08               sub esp, 8
// 00495f18  55                   push ebp
// 00495f19  56                   push esi
// 00495f1a  57                   push edi
// 00495f1b  8bf9                 mov edi, ecx
// 00495f1d  8b4708               mov eax, dword ptr [edi + 8]
// 00495f20  8b2f                 mov ebp, dword ptr [edi]
// 00495f22  69c060070000         imul eax, eax, 0x760
// 00495f28  6a10                 push 0x10
// 00495f2a  50                   push eax
// 00495f2b  e870790b00           call 0x54d8a0
// 00495f30  8b4f08               mov ecx, dword ptr [edi + 8]
// 00495f33  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00495f37  83c408               add esp, 8
// 00495f3a  3bd1                 cmp edx, ecx
// 00495f3c  8907                 mov dword ptr [edi], eax
// 00495f3e  7d02                 jge 0x495f42
// 00495f40  8bca                 mov ecx, edx
// 00495f42  69c960070000         imul ecx, ecx, 0x760
// 00495f48  03c8                 add ecx, eax
// 00495f4a  8bf0                 mov esi, eax
// 00495f4c  8bf9                 mov edi, ecx
// 00495f4e  53                   push ebx
// 00495f4f  8bdd                 mov ebx, ebp
// 00495f51  89742410             mov dword ptr [esp + 0x10], esi
// 00495f55  3bf7                 cmp esi, edi
// 00495f57  733f                 jae 0x495f98
// 00495f59  8da42400000000       lea esp, [esp]
// 00495f60  89742414             mov dword ptr [esp + 0x14], esi
// 00495f64  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00495f6c  85f6                 test esi, esi
// 00495f6e  740c                 je 0x495f7c
// 00495f70  53                   push ebx
// 00495f71  8bce                 mov ecx, esi
// 00495f73  e878fbffff           call 0x495af0
// 00495f78  8b542428             mov edx, dword ptr [esp + 0x28]
// 00495f7c  81c660070000         add esi, 0x760
// 00495f82  81c360070000         add ebx, 0x760
// 00495f88  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00495f90  89742410             mov dword ptr [esp + 0x10], esi
// 00495f94  3bf7                 cmp esi, edi
// 00495f96  72c8                 jb 0x495f60
// 00495f98  69d260070000         imul edx, edx, 0x760
// 00495f9e  03d5                 add edx, ebp
// 00495fa0  8bfa                 mov edi, edx
// 00495fa2  8bf5                 mov esi, ebp
// 00495fa4  5b                   pop ebx
// 00495fa5  3bef                 cmp ebp, edi
// 00495fa7  7318                 jae 0x495fc1
// 00495fa9  8da42400000000       lea esp, [esp]
// 00495fb0  8bce                 mov ecx, esi
// 00495fb2  e8b9e3ffff           call 0x494370
// 00495fb7  81c660070000         add esi, 0x760
// 00495fbd  3bf7                 cmp esi, edi
// 00495fbf  72ef                 jb 0x495fb0
// 00495fc1  55                   push ebp
// 00495fc2  e8f9790b00           call 0x54d9c0
// 00495fc7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00495fcb  83c404               add esp, 4
// 00495fce  5f                   pop edi
// 00495fcf  5e                   pop esi
// 00495fd0  5d                   pop ebp
// 00495fd1  64890d00000000       mov dword ptr fs:[0], ecx
// 00495fd8  83c414               add esp, 0x14
// 00495fdb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?realloc@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
