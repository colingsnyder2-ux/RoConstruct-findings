// roc 2007-08 004e47e0  unit: WedgeBuilder  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e47e0
//
// 004e47e0  6aff                 push -1
// 004e47e2  68ebce7400           push 0x74ceeb
// 004e47e7  64a100000000         mov eax, dword ptr fs:[0]
// 004e47ed  50                   push eax
// 004e47ee  64892500000000       mov dword ptr fs:[0], esp
// 004e47f5  83ec3c               sub esp, 0x3c
// 004e47f8  53                   push ebx
// 004e47f9  55                   push ebp
// 004e47fa  56                   push esi
// 004e47fb  8be9                 mov ebp, ecx
// 004e47fd  57                   push edi
// 004e47fe  896c2418             mov dword ptr [esp + 0x18], ebp
// 004e4802  e879190100           call 0x4f6180
// 004e4807  33db                 xor ebx, ebx
// 004e4809  6a1c                 push 0x1c
// 004e480b  895c2458             mov dword ptr [esp + 0x58], ebx
// 004e480f  c74500c8f37900       mov dword ptr [ebp], 0x79f3c8
// 004e4816  e8dbb61400           call 0x62fef6
// 004e481b  83c404               add esp, 4
// 004e481e  3bc3                 cmp eax, ebx
// 004e4820  7424                 je 0x4e4846
// 004e4822  c70084797900         mov dword ptr [eax], 0x797984
// 004e4828  895804               mov dword ptr [eax + 4], ebx
// 004e482b  895808               mov dword ptr [eax + 8], ebx
// 004e482e  c70004f37900         mov dword ptr [eax], 0x79f304
// 004e4834  895810               mov dword ptr [eax + 0x10], ebx
// 004e4837  895814               mov dword ptr [eax + 0x14], ebx
// 004e483a  89580c               mov dword ptr [eax + 0xc], ebx
// 004e483d  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004e4844  eb02                 jmp 0x4e4848
// 004e4846  33c0                 xor eax, eax
// 004e4848  33ff                 xor edi, edi
// 004e484a  3bc3                 cmp eax, ebx
// 004e484c  897c2414             mov dword ptr [esp + 0x14], edi
// 004e4850  7410                 je 0x4e4862
// 004e4852  8bf8                 mov edi, eax
// 004e4854  83c004               add eax, 4
// 004e4857  50                   push eax
// 004e4858  897c2418             mov dword ptr [esp + 0x18], edi
// 004e485c  ff15ecd27700         call dword ptr [0x77d2ec]
// 004e4862  8d442414             lea eax, [esp + 0x14]
// 004e4866  8d750c               lea esi, [ebp + 0xc]
// 004e4869  50                   push eax
// 004e486a  8bce                 mov ecx, esi
// 004e486c  c644245803           mov byte ptr [esp + 0x58], 3
// 004e4871  e8da89ffff           call 0x4dd250
// 004e4876  3bfb                 cmp edi, ebx
// 004e4878  885c2454             mov byte ptr [esp + 0x54], bl
// 004e487c  741f                 je 0x4e489d
// 004e487e  8d4704               lea eax, [edi + 4]
// 004e4881  50                   push eax
// 004e4882  ff15e8d27700         call dword ptr [0x77d2e8]
// 004e4888  85c0                 test eax, eax
// 004e488a  7511                 jne 0x4e489d
// 004e488c  8bcf                 mov ecx, edi
// 004e488e  e83d35f7ff           call 0x457dd0
// 004e4893  8b17                 mov edx, dword ptr [edi]
// 004e4895  8b02                 mov eax, dword ptr [edx]
// 004e4897  6a01                 push 1
// 004e4899  8bcf                 mov ecx, edi
// 004e489b  ffd0                 call eax
// 004e489d  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004e48a1  d900                 fld dword ptr [eax]
// 004e48a3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e48a6  8b16                 mov edx, dword ptr [esi]
// 004e48a8  d95c241c             fstp dword ptr [esp + 0x1c]
// 004e48ac  d94004               fld dword ptr [eax + 4]
// 004e48af  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004e48b3  d95c2420             fstp dword ptr [esp + 0x20]
// 004e48b7  d94008               fld dword ptr [eax + 8]
// 004e48ba  8b442460             mov eax, dword ptr [esp + 0x60]
// 004e48be  50                   push eax
// 004e48bf  d95c2428             fstp dword ptr [esp + 0x28]
// 004e48c3  d9442420             fld dword ptr [esp + 0x20]
// 004e48c7  83ec0c               sub esp, 0xc
// 004e48ca  8bc4                 mov eax, esp
// 004e48cc  d918                 fstp dword ptr [eax]
// 004e48ce  8964246c             mov dword ptr [esp + 0x6c], esp
// 004e48d2  d9442430             fld dword ptr [esp + 0x30]
// 004e48d6  51                   push ecx
// 004e48d7  d95804               fstp dword ptr [eax + 4]
// 004e48da  8d4c243c             lea ecx, [esp + 0x3c]
// 004e48de  d9442438             fld dword ptr [esp + 0x38]
// 004e48e2  d95808               fstp dword ptr [eax + 8]
// 004e48e5  e816a40000           call 0x4eed00
// 004e48ea  d9ee                 fldz 
// 004e48ec  c744242888f37900     mov dword ptr [esp + 0x28], 0x79f388
// 004e48f4  d95c2448             fstp dword ptr [esp + 0x48]
// 004e48f8  53                   push ebx
// 004e48f9  8d4c242c             lea ecx, [esp + 0x2c]
// 004e48fd  c644245804           mov byte ptr [esp + 0x58], 4
// 004e4902  e8b9a60000           call 0x4eefc0
// 004e4907  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004e490b  3bc3                 cmp eax, ebx
// 004e490d  885c2454             mov byte ptr [esp + 0x54], bl
// 004e4911  7427                 je 0x4e493a
// 004e4913  83c004               add eax, 4
// 004e4916  50                   push eax
// 004e4917  ff15e8d27700         call dword ptr [0x77d2e8]
// 004e491d  85c0                 test eax, eax
// 004e491f  7519                 jne 0x4e493a
// 004e4921  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004e4925  e8a634f7ff           call 0x457dd0
// 004e492a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004e492e  3bcb                 cmp ecx, ebx
// 004e4930  7408                 je 0x4e493a
// 004e4932  8b11                 mov edx, dword ptr [ecx]
// 004e4934  8b02                 mov eax, dword ptr [edx]
// 004e4936  6a01                 push 1
// 004e4938  ffd0                 call eax
// 004e493a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004e493e  5f                   pop edi
// 004e493f  5e                   pop esi
// 004e4940  8bc5                 mov eax, ebp
// 004e4942  5d                   pop ebp
// 004e4943  64890d00000000       mov dword ptr fs:[0], ecx
// 004e494a  5b                   pop ebx
// 004e494b  83c448               add esp, 0x48
// 004e494e  c20800               ret 8
// library rbxgs-view/WedgeMesh.cpp (function ??0WedgeMesh@View@RBX@@AAE@ABVVector3@G3D@@VRenderSurfaceTypes@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
