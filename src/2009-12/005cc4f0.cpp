// roc 2009-12 005cc4f0  unit: RBX::MeshRefPartAdapter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cc4f0
//
// 005cc4f0  51                   push ecx
// 005cc4f1  53                   push ebx
// 005cc4f2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005cc4f6  55                   push ebp
// 005cc4f7  56                   push esi
// 005cc4f8  57                   push edi
// 005cc4f9  8bf1                 mov esi, ecx
// 005cc4fb  8b4608               mov eax, dword ptr [esi + 8]
// 005cc4fe  8d3c9d00000000       lea edi, [ebx*4]
// 005cc505  6a10                 push 0x10
// 005cc507  57                   push edi
// 005cc508  89442418             mov dword ptr [esp + 0x18], eax
// 005cc50c  e8afdd0100           call 0x5ea2c0
// 005cc511  57                   push edi
// 005cc512  6a00                 push 0
// 005cc514  50                   push eax
// 005cc515  894608               mov dword ptr [esi + 8], eax
// 005cc518  e8a3ea0100           call 0x5eafc0
// 005cc51d  33ed                 xor ebp, ebp
// 005cc51f  83c414               add esp, 0x14
// 005cc522  396e0c               cmp dword ptr [esi + 0xc], ebp
// 005cc525  7e2f                 jle 0x5cc556
// 005cc527  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005cc52b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 005cc52e  85c9                 test ecx, ecx
// 005cc530  741e                 je 0x5cc550
// 005cc532  8b01                 mov eax, dword ptr [ecx]
// 005cc534  33d2                 xor edx, edx
// 005cc536  f7f3                 div ebx
// 005cc538  8b4608               mov eax, dword ptr [esi + 8]
// 005cc53b  8b7914               mov edi, dword ptr [ecx + 0x14]
// 005cc53e  8b0490               mov eax, dword ptr [eax + edx*4]
// 005cc541  894114               mov dword ptr [ecx + 0x14], eax
// 005cc544  8b4608               mov eax, dword ptr [esi + 8]
// 005cc547  890c90               mov dword ptr [eax + edx*4], ecx
// 005cc54a  8bcf                 mov ecx, edi
// 005cc54c  85ff                 test edi, edi
// 005cc54e  75e2                 jne 0x5cc532
// 005cc550  45                   inc ebp
// 005cc551  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 005cc554  7cd1                 jl 0x5cc527
// 005cc556  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005cc55a  51                   push ecx
// 005cc55b  e880de0100           call 0x5ea3e0
// 005cc560  83c404               add esp, 4
// 005cc563  5f                   pop edi
// 005cc564  895e0c               mov dword ptr [esi + 0xc], ebx
// 005cc567  5e                   pop esi
// 005cc568  5d                   pop ebp
// 005cc569  5b                   pop ebx
// 005cc56a  59                   pop ecx
// 005cc56b  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@HV?$Array@H@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
