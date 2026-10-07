// roc 2010-06 00522ba0  unit: RBX::MeshGen  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00522ba0
//
// 00522ba0  55                   push ebp
// 00522ba1  56                   push esi
// 00522ba2  8bf1                 mov esi, ecx
// 00522ba4  8b4608               mov eax, dword ptr [esi + 8]
// 00522ba7  8b2e                 mov ebp, dword ptr [esi]
// 00522ba9  03c0                 add eax, eax
// 00522bab  57                   push edi
// 00522bac  03c0                 add eax, eax
// 00522bae  03c0                 add eax, eax
// 00522bb0  6a10                 push 0x10
// 00522bb2  50                   push eax
// 00522bb3  e8e8ac0200           call 0x54d8a0
// 00522bb8  8bc8                 mov ecx, eax
// 00522bba  8b442418             mov eax, dword ptr [esp + 0x18]
// 00522bbe  890e                 mov dword ptr [esi], ecx
// 00522bc0  8b7608               mov esi, dword ptr [esi + 8]
// 00522bc3  83c408               add esp, 8
// 00522bc6  3bc6                 cmp eax, esi
// 00522bc8  7d02                 jge 0x522bcc
// 00522bca  8bf0                 mov esi, eax
// 00522bcc  8d3cf1               lea edi, [ecx + esi*8]
// 00522bcf  8bf5                 mov esi, ebp
// 00522bd1  3bcf                 cmp ecx, edi
// 00522bd3  0f838f000000         jae 0x522c68
// 00522bd9  8bc7                 mov eax, edi
// 00522bdb  2bc1                 sub eax, ecx
// 00522bdd  83c007               add eax, 7
// 00522be0  99                   cdq 
// 00522be1  83e207               and edx, 7
// 00522be4  03c2                 add eax, edx
// 00522be6  c1f803               sar eax, 3
// 00522be9  83f804               cmp eax, 4
// 00522bec  7c5a                 jl 0x522c48
// 00522bee  53                   push ebx
// 00522bef  8d5fe8               lea ebx, [edi - 0x18]
// 00522bf2  8d4114               lea eax, [ecx + 0x14]
// 00522bf5  85c9                 test ecx, ecx
// 00522bf7  740a                 je 0x522c03
// 00522bf9  d906                 fld dword ptr [esi]
// 00522bfb  d919                 fstp dword ptr [ecx]
// 00522bfd  d94604               fld dword ptr [esi + 4]
// 00522c00  d958f0               fstp dword ptr [eax - 0x10]
// 00522c03  8d50f4               lea edx, [eax - 0xc]
// 00522c06  85d2                 test edx, edx
// 00522c08  740c                 je 0x522c16
// 00522c0a  d94608               fld dword ptr [esi + 8]
// 00522c0d  d958f4               fstp dword ptr [eax - 0xc]
// 00522c10  d9460c               fld dword ptr [esi + 0xc]
// 00522c13  d958f8               fstp dword ptr [eax - 8]
// 00522c16  8d50fc               lea edx, [eax - 4]
// 00522c19  85d2                 test edx, edx
// 00522c1b  740b                 je 0x522c28
// 00522c1d  d94610               fld dword ptr [esi + 0x10]
// 00522c20  d958fc               fstp dword ptr [eax - 4]
// 00522c23  d94614               fld dword ptr [esi + 0x14]
// 00522c26  d918                 fstp dword ptr [eax]
// 00522c28  8d5004               lea edx, [eax + 4]
// 00522c2b  85d2                 test edx, edx
// 00522c2d  740b                 je 0x522c3a
// 00522c2f  d94618               fld dword ptr [esi + 0x18]
// 00522c32  d91a                 fstp dword ptr [edx]
// 00522c34  d9461c               fld dword ptr [esi + 0x1c]
// 00522c37  d95808               fstp dword ptr [eax + 8]
// 00522c3a  83c120               add ecx, 0x20
// 00522c3d  83c620               add esi, 0x20
// 00522c40  83c020               add eax, 0x20
// 00522c43  3bcb                 cmp ecx, ebx
// 00522c45  7cae                 jl 0x522bf5
// 00522c47  5b                   pop ebx
// 00522c48  3bcf                 cmp ecx, edi
// 00522c4a  731c                 jae 0x522c68
// 00522c4c  8d642400             lea esp, [esp]
// 00522c50  85c9                 test ecx, ecx
// 00522c52  740a                 je 0x522c5e
// 00522c54  d906                 fld dword ptr [esi]
// 00522c56  d919                 fstp dword ptr [ecx]
// 00522c58  d94604               fld dword ptr [esi + 4]
// 00522c5b  d95904               fstp dword ptr [ecx + 4]
// 00522c5e  83c108               add ecx, 8
// 00522c61  83c608               add esi, 8
// 00522c64  3bcf                 cmp ecx, edi
// 00522c66  72e8                 jb 0x522c50
// 00522c68  55                   push ebp
// 00522c69  e852ad0200           call 0x54d9c0
// 00522c6e  83c404               add esp, 4
// 00522c71  5f                   pop edi
// 00522c72  5e                   pop esi
// 00522c73  5d                   pop ebp
// 00522c74  c20400               ret 4
// library g3d-6.09/G3Dcpp\ConvexPolyhedron.cpp (function ?realloc@?$Array@VVector2@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/ConvexPolyhedron.cpp
