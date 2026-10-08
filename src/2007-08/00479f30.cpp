// from server: 100% by auto
// roc 2007-08 00479f30  unit: G3D::TextureManager::TextureArgs  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479f30
//
// 00479f30  83790400             cmp dword ptr [ecx + 4], 0
// 00479f34  7527                 jne 0x479f5d
// 00479f36  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00479f39  56                   push esi
// 00479f3a  8d9b00000000         lea ebx, [ebx]
// 00479f40  830101               add dword ptr [ecx], 1
// 00479f43  8b01                 mov eax, dword ptr [ecx]
// 00479f45  3bc2                 cmp eax, edx
// 00479f47  7d0f                 jge 0x479f58
// 00479f49  8b7110               mov esi, dword ptr [ecx + 0x10]
// 00479f4c  8b0486               mov eax, dword ptr [esi + eax*4]
// 00479f4f  85c0                 test eax, eax
// 00479f51  894104               mov dword ptr [ecx + 4], eax
// 00479f54  74ea                 je 0x479f40
// 00479f56  5e                   pop esi
// 00479f57  c3                   ret 
// 00479f58  c6411401             mov byte ptr [ecx + 0x14], 1
// 00479f5c  5e                   pop esi
// 00479f5d  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?findNext@Iterator@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
