// roc 2010-06 00522cf0  unit: RBX::MeshGen  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00522cf0
//
// 00522cf0  56                   push esi
// 00522cf1  8bf1                 mov esi, ecx
// 00522cf3  8b4608               mov eax, dword ptr [esi + 8]
// 00522cf6  8d0440               lea eax, [eax + eax*2]
// 00522cf9  03c0                 add eax, eax
// 00522cfb  57                   push edi
// 00522cfc  8b3e                 mov edi, dword ptr [esi]
// 00522cfe  03c0                 add eax, eax
// 00522d00  03c0                 add eax, eax
// 00522d02  6a10                 push 0x10
// 00522d04  50                   push eax
// 00522d05  e896ab0200           call 0x54d8a0
// 00522d0a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00522d0e  8906                 mov dword ptr [esi], eax
// 00522d10  8b7608               mov esi, dword ptr [esi + 8]
// 00522d13  83c408               add esp, 8
// 00522d16  3bce                 cmp ecx, esi
// 00522d18  7c02                 jl 0x522d1c
// 00522d1a  8bce                 mov ecx, esi
// 00522d1c  8d0c49               lea ecx, [ecx + ecx*2]
// 00522d1f  8d14c8               lea edx, [eax + ecx*8]
// 00522d22  8bcf                 mov ecx, edi
// 00522d24  3bc2                 cmp eax, edx
// 00522d26  7330                 jae 0x522d58
// 00522d28  85c0                 test eax, eax
// 00522d2a  7422                 je 0x522d4e
// 00522d2c  8b31                 mov esi, dword ptr [ecx]
// 00522d2e  8930                 mov dword ptr [eax], esi
// 00522d30  8b7104               mov esi, dword ptr [ecx + 4]
// 00522d33  897004               mov dword ptr [eax + 4], esi
// 00522d36  8b7108               mov esi, dword ptr [ecx + 8]
// 00522d39  897008               mov dword ptr [eax + 8], esi
// 00522d3c  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00522d3f  89700c               mov dword ptr [eax + 0xc], esi
// 00522d42  8b7110               mov esi, dword ptr [ecx + 0x10]
// 00522d45  897010               mov dword ptr [eax + 0x10], esi
// 00522d48  8b7114               mov esi, dword ptr [ecx + 0x14]
// 00522d4b  897014               mov dword ptr [eax + 0x14], esi
// 00522d4e  83c018               add eax, 0x18
// 00522d51  83c118               add ecx, 0x18
// 00522d54  3bc2                 cmp eax, edx
// 00522d56  72d0                 jb 0x522d28
// 00522d58  57                   push edi
// 00522d59  e862ac0200           call 0x54d9c0
// 00522d5e  83c404               add esp, 4
// 00522d61  5f                   pop edi
// 00522d62  5e                   pop esi
// 00522d63  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?realloc@?$Array@VFace@MeshAlg@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
