// roc 2007-03 004c4500  unit: seg_004c0000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4500
//
// 004c4500  51                   push ecx
// 004c4501  53                   push ebx
// 004c4502  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004c4506  55                   push ebp
// 004c4507  56                   push esi
// 004c4508  57                   push edi
// 004c4509  8bf1                 mov esi, ecx
// 004c450b  8b4608               mov eax, dword ptr [esi + 8]
// 004c450e  8d3c9d00000000       lea edi, [ebx*4]
// 004c4515  6a10                 push 0x10
// 004c4517  57                   push edi
// 004c4518  89442418             mov dword ptr [esp + 0x18], eax
// 004c451c  e8aff60200           call 0x4f3bd0
// 004c4521  57                   push edi
// 004c4522  6a00                 push 0
// 004c4524  50                   push eax
// 004c4525  894608               mov dword ptr [esi + 8], eax
// 004c4528  e8c3fb0200           call 0x4f40f0
// 004c452d  33ed                 xor ebp, ebp
// 004c452f  83c414               add esp, 0x14
// 004c4532  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004c4535  7e31                 jle 0x4c4568
// 004c4537  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c453b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 004c453e  85c9                 test ecx, ecx
// 004c4540  741e                 je 0x4c4560
// 004c4542  8b01                 mov eax, dword ptr [ecx]
// 004c4544  33d2                 xor edx, edx
// 004c4546  f7f3                 div ebx
// 004c4548  8b4608               mov eax, dword ptr [esi + 8]
// 004c454b  8b7918               mov edi, dword ptr [ecx + 0x18]
// 004c454e  85ff                 test edi, edi
// 004c4550  8b0490               mov eax, dword ptr [eax + edx*4]
// 004c4553  894118               mov dword ptr [ecx + 0x18], eax
// 004c4556  8b4608               mov eax, dword ptr [esi + 8]
// 004c4559  890c90               mov dword ptr [eax + edx*4], ecx
// 004c455c  8bcf                 mov ecx, edi
// 004c455e  75e2                 jne 0x4c4542
// 004c4560  83c501               add ebp, 1
// 004c4563  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 004c4566  7ccf                 jl 0x4c4537
// 004c4568  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c456c  51                   push ecx
// 004c456d  e80eee0200           call 0x4f3380
// 004c4572  83c404               add esp, 4
// 004c4575  5f                   pop edi
// 004c4576  895e0c               mov dword ptr [esi + 0xc], ebx
// 004c4579  5e                   pop esi
// 004c457a  5d                   pop ebp
// 004c457b  5b                   pop ebx
// 004c457c  59                   pop ecx
// 004c457d  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Table@VMeshDirectedEdgeKey@G3D@@V?$Array@H@2@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp
