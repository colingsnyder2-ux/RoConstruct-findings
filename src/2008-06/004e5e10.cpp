// roc 2008-06 004e5e10  unit: RBX::Block  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5e10
//
// 004e5e10  51                   push ecx
// 004e5e11  53                   push ebx
// 004e5e12  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004e5e16  55                   push ebp
// 004e5e17  56                   push esi
// 004e5e18  57                   push edi
// 004e5e19  8bf1                 mov esi, ecx
// 004e5e1b  8b4608               mov eax, dword ptr [esi + 8]
// 004e5e1e  8d3c9d00000000       lea edi, [ebx*4]
// 004e5e25  6a10                 push 0x10
// 004e5e27  57                   push edi
// 004e5e28  89442418             mov dword ptr [esp + 0x18], eax
// 004e5e2c  e84f270200           call 0x508580
// 004e5e31  57                   push edi
// 004e5e32  6a00                 push 0
// 004e5e34  50                   push eax
// 004e5e35  894608               mov dword ptr [esi + 8], eax
// 004e5e38  e8f32b0200           call 0x508a30
// 004e5e3d  33ed                 xor ebp, ebp
// 004e5e3f  83c414               add esp, 0x14
// 004e5e42  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004e5e45  7e2f                 jle 0x4e5e76
// 004e5e47  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e5e4b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004e5e4e  85c9                 test ecx, ecx
// 004e5e50  741e                 je 0x4e5e70
// 004e5e52  8b01                 mov eax, dword ptr [ecx]
// 004e5e54  33d2                 xor edx, edx
// 004e5e56  f7f3                 div ebx
// 004e5e58  8b4608               mov eax, dword ptr [esi + 8]
// 004e5e5b  8b7918               mov edi, dword ptr [ecx + 0x18]
// 004e5e5e  8b0490               mov eax, dword ptr [eax + edx*4]
// 004e5e61  894118               mov dword ptr [ecx + 0x18], eax
// 004e5e64  8b4608               mov eax, dword ptr [esi + 8]
// 004e5e67  890c90               mov dword ptr [eax + edx*4], ecx
// 004e5e6a  8bcf                 mov ecx, edi
// 004e5e6c  85ff                 test edi, edi
// 004e5e6e  75e2                 jne 0x4e5e52
// 004e5e70  45                   inc ebp
// 004e5e71  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004e5e74  7cd1                 jl 0x4e5e47
// 004e5e76  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e5e7a  51                   push ecx
// 004e5e7b  e8a01e0200           call 0x507d20
// 004e5e80  83c404               add esp, 4
// 004e5e83  5f                   pop edi
// 004e5e84  895e0c               mov dword ptr [esi + 0xc], ebx
// 004e5e87  5e                   pop esi
// 004e5e88  5d                   pop ebp
// 004e5e89  5b                   pop ebx
// 004e5e8a  59                   pop ecx
// 004e5e8b  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
