// from server: 100% by auto
// roc 2009-06 00516970  unit: RBX::MeshRefPartAdapter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00516970
//
// 00516970  51                   push ecx
// 00516971  53                   push ebx
// 00516972  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00516976  55                   push ebp
// 00516977  56                   push esi
// 00516978  57                   push edi
// 00516979  8bf1                 mov esi, ecx
// 0051697b  8b4608               mov eax, dword ptr [esi + 8]
// 0051697e  8d3c9d00000000       lea edi, [ebx*4]
// 00516985  6a10                 push 0x10
// 00516987  57                   push edi
// 00516988  89442418             mov dword ptr [esp + 0x18], eax
// 0051698c  e8df470500           call 0x56b170
// 00516991  57                   push edi
// 00516992  6a00                 push 0
// 00516994  50                   push eax
// 00516995  894608               mov dword ptr [esi + 8], eax
// 00516998  e8f3540500           call 0x56be90
// 0051699d  33ed                 xor ebp, ebp
// 0051699f  83c414               add esp, 0x14
// 005169a2  396e0c               cmp dword ptr [esi + 0xc], ebp
// 005169a5  7e2f                 jle 0x5169d6
// 005169a7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005169ab  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 005169ae  85c9                 test ecx, ecx
// 005169b0  741e                 je 0x5169d0
// 005169b2  8b01                 mov eax, dword ptr [ecx]
// 005169b4  33d2                 xor edx, edx
// 005169b6  f7f3                 div ebx
// 005169b8  8b4608               mov eax, dword ptr [esi + 8]
// 005169bb  8b7914               mov edi, dword ptr [ecx + 0x14]
// 005169be  8b0490               mov eax, dword ptr [eax + edx*4]
// 005169c1  894114               mov dword ptr [ecx + 0x14], eax
// 005169c4  8b4608               mov eax, dword ptr [esi + 8]
// 005169c7  890c90               mov dword ptr [eax + edx*4], ecx
// 005169ca  8bcf                 mov ecx, edi
// 005169cc  85ff                 test edi, edi
// 005169ce  75e2                 jne 0x5169b2
// 005169d0  45                   inc ebp
// 005169d1  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 005169d4  7cd1                 jl 0x5169a7
// 005169d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005169da  51                   push ecx
// 005169db  e8b0480500           call 0x56b290
// 005169e0  83c404               add esp, 4
// 005169e3  5f                   pop edi
// 005169e4  895e0c               mov dword ptr [esi + 0xc], ebx
// 005169e7  5e                   pop esi
// 005169e8  5d                   pop ebp
// 005169e9  5b                   pop ebx
// 005169ea  59                   pop ecx
// 005169eb  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@HV?$Array@H@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
