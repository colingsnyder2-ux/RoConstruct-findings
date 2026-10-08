// roc 2007-03 004c4600  unit: seg_004c0000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4600
//
// 004c4600  51                   push ecx
// 004c4601  53                   push ebx
// 004c4602  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004c4606  55                   push ebp
// 004c4607  56                   push esi
// 004c4608  57                   push edi
// 004c4609  8bf1                 mov esi, ecx
// 004c460b  8b4608               mov eax, dword ptr [esi + 8]
// 004c460e  8d3c9d00000000       lea edi, [ebx*4]
// 004c4615  6a10                 push 0x10
// 004c4617  57                   push edi
// 004c4618  89442418             mov dword ptr [esp + 0x18], eax
// 004c461c  e8aff50200           call 0x4f3bd0
// 004c4621  57                   push edi
// 004c4622  6a00                 push 0
// 004c4624  50                   push eax
// 004c4625  894608               mov dword ptr [esi + 8], eax
// 004c4628  e8c3fa0200           call 0x4f40f0
// 004c462d  33ed                 xor ebp, ebp
// 004c462f  83c414               add esp, 0x14
// 004c4632  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004c4635  7e31                 jle 0x4c4668
// 004c4637  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c463b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004c463e  85c9                 test ecx, ecx
// 004c4640  741e                 je 0x4c4660
// 004c4642  8b01                 mov eax, dword ptr [ecx]
// 004c4644  33d2                 xor edx, edx
// 004c4646  f7f3                 div ebx
// 004c4648  8b4608               mov eax, dword ptr [esi + 8]
// 004c464b  8b7914               mov edi, dword ptr [ecx + 0x14]
// 004c464e  85ff                 test edi, edi
// 004c4650  8b0490               mov eax, dword ptr [eax + edx*4]
// 004c4653  894114               mov dword ptr [ecx + 0x14], eax
// 004c4656  8b4608               mov eax, dword ptr [esi + 8]
// 004c4659  890c90               mov dword ptr [eax + edx*4], ecx
// 004c465c  8bcf                 mov ecx, edi
// 004c465e  75e2                 jne 0x4c4642
// 004c4660  83c501               add ebp, 1
// 004c4663  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004c4666  7ccf                 jl 0x4c4637
// 004c4668  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c466c  51                   push ecx
// 004c466d  e80eed0200           call 0x4f3380
// 004c4672  83c404               add esp, 4
// 004c4675  5f                   pop edi
// 004c4676  895e0c               mov dword ptr [esi + 0xc], ebx
// 004c4679  5e                   pop esi
// 004c467a  5d                   pop ebp
// 004c467b  5b                   pop ebx
// 004c467c  59                   pop ecx
// 004c467d  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@HV?$Array@H@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp
