// roc 2010-06 0052c510  unit: RBX::MeshRefPartAdapter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052c510
//
// 0052c510  51                   push ecx
// 0052c511  53                   push ebx
// 0052c512  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0052c516  55                   push ebp
// 0052c517  56                   push esi
// 0052c518  57                   push edi
// 0052c519  8bf1                 mov esi, ecx
// 0052c51b  8b4608               mov eax, dword ptr [esi + 8]
// 0052c51e  8d3c9d00000000       lea edi, [ebx*4]
// 0052c525  6a10                 push 0x10
// 0052c527  57                   push edi
// 0052c528  89442418             mov dword ptr [esp + 0x18], eax
// 0052c52c  e86f130200           call 0x54d8a0
// 0052c531  57                   push edi
// 0052c532  6a00                 push 0
// 0052c534  50                   push eax
// 0052c535  894608               mov dword ptr [esi + 8], eax
// 0052c538  e863200200           call 0x54e5a0
// 0052c53d  33ed                 xor ebp, ebp
// 0052c53f  83c414               add esp, 0x14
// 0052c542  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0052c545  7e2f                 jle 0x52c576
// 0052c547  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052c54b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0052c54e  85c9                 test ecx, ecx
// 0052c550  741e                 je 0x52c570
// 0052c552  8b01                 mov eax, dword ptr [ecx]
// 0052c554  33d2                 xor edx, edx
// 0052c556  f7f3                 div ebx
// 0052c558  8b4608               mov eax, dword ptr [esi + 8]
// 0052c55b  8b7914               mov edi, dword ptr [ecx + 0x14]
// 0052c55e  8b0490               mov eax, dword ptr [eax + edx*4]
// 0052c561  894114               mov dword ptr [ecx + 0x14], eax
// 0052c564  8b4608               mov eax, dword ptr [esi + 8]
// 0052c567  890c90               mov dword ptr [eax + edx*4], ecx
// 0052c56a  8bcf                 mov ecx, edi
// 0052c56c  85ff                 test edi, edi
// 0052c56e  75e2                 jne 0x52c552
// 0052c570  45                   inc ebp
// 0052c571  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0052c574  7cd1                 jl 0x52c547
// 0052c576  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052c57a  51                   push ecx
// 0052c57b  e840140200           call 0x54d9c0
// 0052c580  83c404               add esp, 4
// 0052c583  5f                   pop edi
// 0052c584  895e0c               mov dword ptr [esi + 0xc], ebx
// 0052c587  5e                   pop esi
// 0052c588  5d                   pop ebp
// 0052c589  5b                   pop ebx
// 0052c58a  59                   pop ecx
// 0052c58b  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@HV?$Array@H@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
