// roc 2009-12 004cf3d0  unit: G3D::PBVTextureFormat::?$Table  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cf3d0
//
// 004cf3d0  64a100000000         mov eax, dword ptr fs:[0]
// 004cf3d6  6aff                 push -1
// 004cf3d8  68012b9300           push 0x932b01
// 004cf3dd  50                   push eax
// 004cf3de  64892500000000       mov dword ptr fs:[0], esp
// 004cf3e5  83ec08               sub esp, 8
// 004cf3e8  55                   push ebp
// 004cf3e9  56                   push esi
// 004cf3ea  57                   push edi
// 004cf3eb  8bf9                 mov edi, ecx
// 004cf3ed  8b4708               mov eax, dword ptr [edi + 8]
// 004cf3f0  8b2f                 mov ebp, dword ptr [edi]
// 004cf3f2  69c060070000         imul eax, eax, 0x760
// 004cf3f8  6a10                 push 0x10
// 004cf3fa  50                   push eax
// 004cf3fb  e8c0ae1100           call 0x5ea2c0
// 004cf400  8b4f08               mov ecx, dword ptr [edi + 8]
// 004cf403  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004cf407  83c408               add esp, 8
// 004cf40a  3bd1                 cmp edx, ecx
// 004cf40c  8907                 mov dword ptr [edi], eax
// 004cf40e  7d02                 jge 0x4cf412
// 004cf410  8bca                 mov ecx, edx
// 004cf412  69c960070000         imul ecx, ecx, 0x760
// 004cf418  03c8                 add ecx, eax
// 004cf41a  8bf0                 mov esi, eax
// 004cf41c  8bf9                 mov edi, ecx
// 004cf41e  53                   push ebx
// 004cf41f  8bdd                 mov ebx, ebp
// 004cf421  89742410             mov dword ptr [esp + 0x10], esi
// 004cf425  3bf7                 cmp esi, edi
// 004cf427  733f                 jae 0x4cf468
// 004cf429  8da42400000000       lea esp, [esp]
// 004cf430  89742414             mov dword ptr [esp + 0x14], esi
// 004cf434  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004cf43c  85f6                 test esi, esi
// 004cf43e  740c                 je 0x4cf44c
// 004cf440  53                   push ebx
// 004cf441  8bce                 mov ecx, esi
// 004cf443  e878fbffff           call 0x4cefc0
// 004cf448  8b542428             mov edx, dword ptr [esp + 0x28]
// 004cf44c  81c660070000         add esi, 0x760
// 004cf452  81c360070000         add ebx, 0x760
// 004cf458  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004cf460  89742410             mov dword ptr [esp + 0x10], esi
// 004cf464  3bf7                 cmp esi, edi
// 004cf466  72c8                 jb 0x4cf430
// 004cf468  69d260070000         imul edx, edx, 0x760
// 004cf46e  03d5                 add edx, ebp
// 004cf470  8bfa                 mov edi, edx
// 004cf472  8bf5                 mov esi, ebp
// 004cf474  5b                   pop ebx
// 004cf475  3bef                 cmp ebp, edi
// 004cf477  7318                 jae 0x4cf491
// 004cf479  8da42400000000       lea esp, [esp]
// 004cf480  8bce                 mov ecx, esi
// 004cf482  e8b9e3ffff           call 0x4cd840
// 004cf487  81c660070000         add esi, 0x760
// 004cf48d  3bf7                 cmp esi, edi
// 004cf48f  72ef                 jb 0x4cf480
// 004cf491  55                   push ebp
// 004cf492  e849af1100           call 0x5ea3e0
// 004cf497  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cf49b  83c404               add esp, 4
// 004cf49e  5f                   pop edi
// 004cf49f  5e                   pop esi
// 004cf4a0  5d                   pop ebp
// 004cf4a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004cf4a8  83c414               add esp, 0x14
// 004cf4ab  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?realloc@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
