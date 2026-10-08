// from server: 100% by auto
// roc 2009-06 004a29f0  unit: G3D::PBVTextureFormat::?$Table  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a29f0
//
// 004a29f0  64a100000000         mov eax, dword ptr fs:[0]
// 004a29f6  6aff                 push -1
// 004a29f8  68f17d8600           push 0x867df1
// 004a29fd  50                   push eax
// 004a29fe  64892500000000       mov dword ptr fs:[0], esp
// 004a2a05  83ec08               sub esp, 8
// 004a2a08  55                   push ebp
// 004a2a09  56                   push esi
// 004a2a0a  57                   push edi
// 004a2a0b  8bf9                 mov edi, ecx
// 004a2a0d  8b4708               mov eax, dword ptr [edi + 8]
// 004a2a10  8b2f                 mov ebp, dword ptr [edi]
// 004a2a12  69c060070000         imul eax, eax, 0x760
// 004a2a18  6a10                 push 0x10
// 004a2a1a  50                   push eax
// 004a2a1b  e850870c00           call 0x56b170
// 004a2a20  8b4f08               mov ecx, dword ptr [edi + 8]
// 004a2a23  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004a2a27  83c408               add esp, 8
// 004a2a2a  3bd1                 cmp edx, ecx
// 004a2a2c  8907                 mov dword ptr [edi], eax
// 004a2a2e  7d02                 jge 0x4a2a32
// 004a2a30  8bca                 mov ecx, edx
// 004a2a32  69c960070000         imul ecx, ecx, 0x760
// 004a2a38  03c8                 add ecx, eax
// 004a2a3a  8bf0                 mov esi, eax
// 004a2a3c  8bf9                 mov edi, ecx
// 004a2a3e  53                   push ebx
// 004a2a3f  8bdd                 mov ebx, ebp
// 004a2a41  89742410             mov dword ptr [esp + 0x10], esi
// 004a2a45  3bf7                 cmp esi, edi
// 004a2a47  733f                 jae 0x4a2a88
// 004a2a49  8da42400000000       lea esp, [esp]
// 004a2a50  89742414             mov dword ptr [esp + 0x14], esi
// 004a2a54  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004a2a5c  85f6                 test esi, esi
// 004a2a5e  740c                 je 0x4a2a6c
// 004a2a60  53                   push ebx
// 004a2a61  8bce                 mov ecx, esi
// 004a2a63  e878fbffff           call 0x4a25e0
// 004a2a68  8b542428             mov edx, dword ptr [esp + 0x28]
// 004a2a6c  81c660070000         add esi, 0x760
// 004a2a72  81c360070000         add ebx, 0x760
// 004a2a78  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004a2a80  89742410             mov dword ptr [esp + 0x10], esi
// 004a2a84  3bf7                 cmp esi, edi
// 004a2a86  72c8                 jb 0x4a2a50
// 004a2a88  69d260070000         imul edx, edx, 0x760
// 004a2a8e  03d5                 add edx, ebp
// 004a2a90  8bfa                 mov edi, edx
// 004a2a92  8bf5                 mov esi, ebp
// 004a2a94  5b                   pop ebx
// 004a2a95  3bef                 cmp ebp, edi
// 004a2a97  7318                 jae 0x4a2ab1
// 004a2a99  8da42400000000       lea esp, [esp]
// 004a2aa0  8bce                 mov ecx, esi
// 004a2aa2  e8d9e4ffff           call 0x4a0f80
// 004a2aa7  81c660070000         add esi, 0x760
// 004a2aad  3bf7                 cmp esi, edi
// 004a2aaf  72ef                 jb 0x4a2aa0
// 004a2ab1  55                   push ebp
// 004a2ab2  e8d9870c00           call 0x56b290
// 004a2ab7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a2abb  83c404               add esp, 4
// 004a2abe  5f                   pop edi
// 004a2abf  5e                   pop esi
// 004a2ac0  5d                   pop ebp
// 004a2ac1  64890d00000000       mov dword ptr fs:[0], ecx
// 004a2ac8  83c414               add esp, 0x14
// 004a2acb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?realloc@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
