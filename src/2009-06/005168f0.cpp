// from server: 100% by auto
// roc 2009-06 005168f0  unit: RBX::MeshRefPartAdapter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005168f0
//
// 005168f0  51                   push ecx
// 005168f1  53                   push ebx
// 005168f2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005168f6  55                   push ebp
// 005168f7  56                   push esi
// 005168f8  57                   push edi
// 005168f9  8bf1                 mov esi, ecx
// 005168fb  8b4608               mov eax, dword ptr [esi + 8]
// 005168fe  8d3c9d00000000       lea edi, [ebx*4]
// 00516905  6a10                 push 0x10
// 00516907  57                   push edi
// 00516908  89442418             mov dword ptr [esp + 0x18], eax
// 0051690c  e85f480500           call 0x56b170
// 00516911  57                   push edi
// 00516912  6a00                 push 0
// 00516914  50                   push eax
// 00516915  894608               mov dword ptr [esi + 8], eax
// 00516918  e873550500           call 0x56be90
// 0051691d  33ed                 xor ebp, ebp
// 0051691f  83c414               add esp, 0x14
// 00516922  396e0c               cmp dword ptr [esi + 0xc], ebp
// 00516925  7e2f                 jle 0x516956
// 00516927  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051692b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0051692e  85c9                 test ecx, ecx
// 00516930  741e                 je 0x516950
// 00516932  8b01                 mov eax, dword ptr [ecx]
// 00516934  33d2                 xor edx, edx
// 00516936  f7f3                 div ebx
// 00516938  8b4608               mov eax, dword ptr [esi + 8]
// 0051693b  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0051693e  8b0490               mov eax, dword ptr [eax + edx*4]
// 00516941  894118               mov dword ptr [ecx + 0x18], eax
// 00516944  8b4608               mov eax, dword ptr [esi + 8]
// 00516947  890c90               mov dword ptr [eax + edx*4], ecx
// 0051694a  8bcf                 mov ecx, edi
// 0051694c  85ff                 test edi, edi
// 0051694e  75e2                 jne 0x516932
// 00516950  45                   inc ebp
// 00516951  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 00516954  7cd1                 jl 0x516927
// 00516956  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051695a  51                   push ecx
// 0051695b  e830490500           call 0x56b290
// 00516960  83c404               add esp, 4
// 00516963  5f                   pop edi
// 00516964  895e0c               mov dword ptr [esi + 0xc], ebx
// 00516967  5e                   pop esi
// 00516968  5d                   pop ebp
// 00516969  5b                   pop ebx
// 0051696a  59                   pop ecx
// 0051696b  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
