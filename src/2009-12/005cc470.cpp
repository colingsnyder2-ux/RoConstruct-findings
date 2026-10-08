// roc 2009-12 005cc470  unit: RBX::MeshRefPartAdapter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cc470
//
// 005cc470  51                   push ecx
// 005cc471  53                   push ebx
// 005cc472  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005cc476  55                   push ebp
// 005cc477  56                   push esi
// 005cc478  57                   push edi
// 005cc479  8bf1                 mov esi, ecx
// 005cc47b  8b4608               mov eax, dword ptr [esi + 8]
// 005cc47e  8d3c9d00000000       lea edi, [ebx*4]
// 005cc485  6a10                 push 0x10
// 005cc487  57                   push edi
// 005cc488  89442418             mov dword ptr [esp + 0x18], eax
// 005cc48c  e82fde0100           call 0x5ea2c0
// 005cc491  57                   push edi
// 005cc492  6a00                 push 0
// 005cc494  50                   push eax
// 005cc495  894608               mov dword ptr [esi + 8], eax
// 005cc498  e823eb0100           call 0x5eafc0
// 005cc49d  33ed                 xor ebp, ebp
// 005cc49f  83c414               add esp, 0x14
// 005cc4a2  396e0c               cmp dword ptr [esi + 0xc], ebp
// 005cc4a5  7e2f                 jle 0x5cc4d6
// 005cc4a7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005cc4ab  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 005cc4ae  85c9                 test ecx, ecx
// 005cc4b0  741e                 je 0x5cc4d0
// 005cc4b2  8b01                 mov eax, dword ptr [ecx]
// 005cc4b4  33d2                 xor edx, edx
// 005cc4b6  f7f3                 div ebx
// 005cc4b8  8b4608               mov eax, dword ptr [esi + 8]
// 005cc4bb  8b7918               mov edi, dword ptr [ecx + 0x18]
// 005cc4be  8b0490               mov eax, dword ptr [eax + edx*4]
// 005cc4c1  894118               mov dword ptr [ecx + 0x18], eax
// 005cc4c4  8b4608               mov eax, dword ptr [esi + 8]
// 005cc4c7  890c90               mov dword ptr [eax + edx*4], ecx
// 005cc4ca  8bcf                 mov ecx, edi
// 005cc4cc  85ff                 test edi, edi
// 005cc4ce  75e2                 jne 0x5cc4b2
// 005cc4d0  45                   inc ebp
// 005cc4d1  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 005cc4d4  7cd1                 jl 0x5cc4a7
// 005cc4d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005cc4da  51                   push ecx
// 005cc4db  e800df0100           call 0x5ea3e0
// 005cc4e0  83c404               add esp, 4
// 005cc4e3  5f                   pop edi
// 005cc4e4  895e0c               mov dword ptr [esi + 0xc], ebx
// 005cc4e7  5e                   pop esi
// 005cc4e8  5d                   pop ebp
// 005cc4e9  5b                   pop ebx
// 005cc4ea  59                   pop ecx
// 005cc4eb  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
