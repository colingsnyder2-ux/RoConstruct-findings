// from server: 100% by auto
// roc 2008-06 004e5e90  unit: RBX::Block  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5e90
//
// 004e5e90  51                   push ecx
// 004e5e91  53                   push ebx
// 004e5e92  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004e5e96  55                   push ebp
// 004e5e97  56                   push esi
// 004e5e98  57                   push edi
// 004e5e99  8bf1                 mov esi, ecx
// 004e5e9b  8b4608               mov eax, dword ptr [esi + 8]
// 004e5e9e  8d3c9d00000000       lea edi, [ebx*4]
// 004e5ea5  6a10                 push 0x10
// 004e5ea7  57                   push edi
// 004e5ea8  89442418             mov dword ptr [esp + 0x18], eax
// 004e5eac  e8cf260200           call 0x508580
// 004e5eb1  57                   push edi
// 004e5eb2  6a00                 push 0
// 004e5eb4  50                   push eax
// 004e5eb5  894608               mov dword ptr [esi + 8], eax
// 004e5eb8  e8732b0200           call 0x508a30
// 004e5ebd  33ed                 xor ebp, ebp
// 004e5ebf  83c414               add esp, 0x14
// 004e5ec2  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004e5ec5  7e2f                 jle 0x4e5ef6
// 004e5ec7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e5ecb  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004e5ece  85c9                 test ecx, ecx
// 004e5ed0  741e                 je 0x4e5ef0
// 004e5ed2  8b01                 mov eax, dword ptr [ecx]
// 004e5ed4  33d2                 xor edx, edx
// 004e5ed6  f7f3                 div ebx
// 004e5ed8  8b4608               mov eax, dword ptr [esi + 8]
// 004e5edb  8b7914               mov edi, dword ptr [ecx + 0x14]
// 004e5ede  8b0490               mov eax, dword ptr [eax + edx*4]
// 004e5ee1  894114               mov dword ptr [ecx + 0x14], eax
// 004e5ee4  8b4608               mov eax, dword ptr [esi + 8]
// 004e5ee7  890c90               mov dword ptr [eax + edx*4], ecx
// 004e5eea  8bcf                 mov ecx, edi
// 004e5eec  85ff                 test edi, edi
// 004e5eee  75e2                 jne 0x4e5ed2
// 004e5ef0  45                   inc ebp
// 004e5ef1  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004e5ef4  7cd1                 jl 0x4e5ec7
// 004e5ef6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e5efa  51                   push ecx
// 004e5efb  e8201e0200           call 0x507d20
// 004e5f00  83c404               add esp, 4
// 004e5f03  5f                   pop edi
// 004e5f04  895e0c               mov dword ptr [esi + 0xc], ebx
// 004e5f07  5e                   pop esi
// 004e5f08  5d                   pop ebp
// 004e5f09  5b                   pop ebx
// 004e5f0a  59                   pop ecx
// 004e5f0b  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@HV?$Array@H@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
