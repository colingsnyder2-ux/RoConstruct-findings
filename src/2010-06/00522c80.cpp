// from server: 100% by auto
// roc 2010-06 00522c80  unit: RBX::MeshGen  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00522c80
//
// 00522c80  56                   push esi
// 00522c81  8bf1                 mov esi, ecx
// 00522c83  8b4608               mov eax, dword ptr [esi + 8]
// 00522c86  57                   push edi
// 00522c87  8b3e                 mov edi, dword ptr [esi]
// 00522c89  c1e004               shl eax, 4
// 00522c8c  6a10                 push 0x10
// 00522c8e  50                   push eax
// 00522c8f  e80cac0200           call 0x54d8a0
// 00522c94  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00522c98  8906                 mov dword ptr [esi], eax
// 00522c9a  8b7608               mov esi, dword ptr [esi + 8]
// 00522c9d  83c408               add esp, 8
// 00522ca0  3bce                 cmp ecx, esi
// 00522ca2  7c02                 jl 0x522ca6
// 00522ca4  8bce                 mov ecx, esi
// 00522ca6  c1e104               shl ecx, 4
// 00522ca9  03c8                 add ecx, eax
// 00522cab  8bd7                 mov edx, edi
// 00522cad  3bc1                 cmp eax, ecx
// 00522caf  7324                 jae 0x522cd5
// 00522cb1  85c0                 test eax, eax
// 00522cb3  7416                 je 0x522ccb
// 00522cb5  8b32                 mov esi, dword ptr [edx]
// 00522cb7  8930                 mov dword ptr [eax], esi
// 00522cb9  8b7204               mov esi, dword ptr [edx + 4]
// 00522cbc  897004               mov dword ptr [eax + 4], esi
// 00522cbf  8b7208               mov esi, dword ptr [edx + 8]
// 00522cc2  897008               mov dword ptr [eax + 8], esi
// 00522cc5  8b720c               mov esi, dword ptr [edx + 0xc]
// 00522cc8  89700c               mov dword ptr [eax + 0xc], esi
// 00522ccb  83c010               add eax, 0x10
// 00522cce  83c210               add edx, 0x10
// 00522cd1  3bc1                 cmp eax, ecx
// 00522cd3  72dc                 jb 0x522cb1
// 00522cd5  57                   push edi
// 00522cd6  e8e5ac0200           call 0x54d9c0
// 00522cdb  83c404               add esp, 4
// 00522cde  5f                   pop edi
// 00522cdf  5e                   pop esi
// 00522ce0  c20400               ret 4
// library g3d-6.09/G3Dcpp\Discovery.cpp (function ?realloc@?$Array@VNetAddress@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Discovery.cpp
