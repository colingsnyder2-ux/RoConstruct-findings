// roc 2010-06 0052c410  unit: RBX::MeshRefPartAdapter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052c410
//
// 0052c410  51                   push ecx
// 0052c411  53                   push ebx
// 0052c412  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0052c416  55                   push ebp
// 0052c417  56                   push esi
// 0052c418  57                   push edi
// 0052c419  8bf1                 mov esi, ecx
// 0052c41b  8b4608               mov eax, dword ptr [esi + 8]
// 0052c41e  8d3c9d00000000       lea edi, [ebx*4]
// 0052c425  6a10                 push 0x10
// 0052c427  57                   push edi
// 0052c428  89442418             mov dword ptr [esp + 0x18], eax
// 0052c42c  e86f140200           call 0x54d8a0
// 0052c431  57                   push edi
// 0052c432  6a00                 push 0
// 0052c434  50                   push eax
// 0052c435  894608               mov dword ptr [esi + 8], eax
// 0052c438  e863210200           call 0x54e5a0
// 0052c43d  33ed                 xor ebp, ebp
// 0052c43f  83c414               add esp, 0x14
// 0052c442  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0052c445  7e2f                 jle 0x52c476
// 0052c447  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052c44b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0052c44e  85c9                 test ecx, ecx
// 0052c450  741e                 je 0x52c470
// 0052c452  8b01                 mov eax, dword ptr [ecx]
// 0052c454  33d2                 xor edx, edx
// 0052c456  f7f3                 div ebx
// 0052c458  8b4608               mov eax, dword ptr [esi + 8]
// 0052c45b  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0052c45e  8b0490               mov eax, dword ptr [eax + edx*4]
// 0052c461  894118               mov dword ptr [ecx + 0x18], eax
// 0052c464  8b4608               mov eax, dword ptr [esi + 8]
// 0052c467  890c90               mov dword ptr [eax + edx*4], ecx
// 0052c46a  8bcf                 mov ecx, edi
// 0052c46c  85ff                 test edi, edi
// 0052c46e  75e2                 jne 0x52c452
// 0052c470  45                   inc ebp
// 0052c471  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0052c474  7cd1                 jl 0x52c447
// 0052c476  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052c47a  51                   push ecx
// 0052c47b  e840150200           call 0x54d9c0
// 0052c480  83c404               add esp, 4
// 0052c483  5f                   pop edi
// 0052c484  895e0c               mov dword ptr [esi + 0xc], ebx
// 0052c487  5e                   pop esi
// 0052c488  5d                   pop ebp
// 0052c489  5b                   pop ebx
// 0052c48a  59                   pop ecx
// 0052c48b  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
