// roc 2007-03 004deb80  unit: seg_004d0000  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004deb80
//
// 004deb80  6aff                 push -1
// 004deb82  68bbdf7400           push 0x74dfbb
// 004deb87  64a100000000         mov eax, dword ptr fs:[0]
// 004deb8d  50                   push eax
// 004deb8e  64892500000000       mov dword ptr fs:[0], esp
// 004deb95  83ec30               sub esp, 0x30
// 004deb98  53                   push ebx
// 004deb99  55                   push ebp
// 004deb9a  56                   push esi
// 004deb9b  8be9                 mov ebp, ecx
// 004deb9d  57                   push edi
// 004deb9e  896c2418             mov dword ptr [esp + 0x18], ebp
// 004deba2  e809b00000           call 0x4e9bb0
// 004deba7  33db                 xor ebx, ebx
// 004deba9  6a1c                 push 0x1c
// 004debab  895c244c             mov dword ptr [esp + 0x4c], ebx
// 004debaf  c74500b4ea7900       mov dword ptr [ebp], 0x79eab4
// 004debb6  e84df51300           call 0x61e108
// 004debbb  83c404               add esp, 4
// 004debbe  3bc3                 cmp eax, ebx
// 004debc0  7424                 je 0x4debe6
// 004debc2  c700946d7900         mov dword ptr [eax], 0x796d94
// 004debc8  895804               mov dword ptr [eax + 4], ebx
// 004debcb  895808               mov dword ptr [eax + 8], ebx
// 004debce  c7004ce97900         mov dword ptr [eax], 0x79e94c
// 004debd4  895810               mov dword ptr [eax + 0x10], ebx
// 004debd7  895814               mov dword ptr [eax + 0x14], ebx
// 004debda  89580c               mov dword ptr [eax + 0xc], ebx
// 004debdd  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004debe4  eb02                 jmp 0x4debe8
// 004debe6  33c0                 xor eax, eax
// 004debe8  33ff                 xor edi, edi
// 004debea  3bc3                 cmp eax, ebx
// 004debec  897c2414             mov dword ptr [esp + 0x14], edi
// 004debf0  7410                 je 0x4dec02
// 004debf2  8bf8                 mov edi, eax
// 004debf4  83c004               add eax, 4
// 004debf7  50                   push eax
// 004debf8  897c2418             mov dword ptr [esp + 0x18], edi
// 004debfc  ff15acd27700         call dword ptr [0x77d2ac]
// 004dec02  8d442414             lea eax, [esp + 0x14]
// 004dec06  8d750c               lea esi, [ebp + 0xc]
// 004dec09  50                   push eax
// 004dec0a  8bce                 mov ecx, esi
// 004dec0c  c644244c03           mov byte ptr [esp + 0x4c], 3
// 004dec11  e87a20ffff           call 0x4d0c90
// 004dec16  3bfb                 cmp edi, ebx
// 004dec18  885c2448             mov byte ptr [esp + 0x48], bl
// 004dec1c  741f                 je 0x4dec3d
// 004dec1e  8d4704               lea eax, [edi + 4]
// 004dec21  50                   push eax
// 004dec22  ff15a8d27700         call dword ptr [0x77d2a8]
// 004dec28  85c0                 test eax, eax
// 004dec2a  7511                 jne 0x4dec3d
// 004dec2c  8bcf                 mov ecx, edi
// 004dec2e  e88d47f8ff           call 0x4633c0
// 004dec33  8b17                 mov edx, dword ptr [edi]
// 004dec35  8b02                 mov eax, dword ptr [edx]
// 004dec37  6a01                 push 1
// 004dec39  8bcf                 mov ecx, edi
// 004dec3b  ffd0                 call eax
// 004dec3d  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dec40  8b16                 mov edx, dword ptr [esi]
// 004dec42  8b442454             mov eax, dword ptr [esp + 0x54]
// 004dec46  6a0c                 push 0xc
// 004dec48  50                   push eax
// 004dec49  8d548afc             lea edx, [edx + ecx*4 - 4]
// 004dec4d  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004dec51  d901                 fld dword ptr [ecx]
// 004dec53  83ec0c               sub esp, 0xc
// 004dec56  8bc4                 mov eax, esp
// 004dec58  d918                 fstp dword ptr [eax]
// 004dec5a  89642468             mov dword ptr [esp + 0x68], esp
// 004dec5e  d94104               fld dword ptr [ecx + 4]
// 004dec61  52                   push edx
// 004dec62  d95804               fstp dword ptr [eax + 4]
// 004dec65  d94108               fld dword ptr [ecx + 8]
// 004dec68  8d4c2434             lea ecx, [esp + 0x34]
// 004dec6c  d95808               fstp dword ptr [eax + 8]
// 004dec6f  e8dcfcffff           call 0x4de950
// 004dec74  53                   push ebx
// 004dec75  8d4c2420             lea ecx, [esp + 0x20]
// 004dec79  c644244c04           mov byte ptr [esp + 0x4c], 4
// 004dec7e  e85d3a0000           call 0x4e26e0
// 004dec83  8b442430             mov eax, dword ptr [esp + 0x30]
// 004dec87  3bc3                 cmp eax, ebx
// 004dec89  885c2448             mov byte ptr [esp + 0x48], bl
// 004dec8d  7427                 je 0x4decb6
// 004dec8f  83c004               add eax, 4
// 004dec92  50                   push eax
// 004dec93  ff15a8d27700         call dword ptr [0x77d2a8]
// 004dec99  85c0                 test eax, eax
// 004dec9b  7519                 jne 0x4decb6
// 004dec9d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004deca1  e81a47f8ff           call 0x4633c0
// 004deca6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004decaa  3bcb                 cmp ecx, ebx
// 004decac  7408                 je 0x4decb6
// 004decae  8b11                 mov edx, dword ptr [ecx]
// 004decb0  8b02                 mov eax, dword ptr [edx]
// 004decb2  6a01                 push 1
// 004decb4  ffd0                 call eax
// 004decb6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004decba  5f                   pop edi
// 004decbb  5e                   pop esi
// 004decbc  8bc5                 mov eax, ebp
// 004decbe  5d                   pop ebp
// 004decbf  64890d00000000       mov dword ptr fs:[0], ecx
// 004decc6  5b                   pop ebx
// 004decc7  83c43c               add esp, 0x3c
// 004decca  c20800               ret 8
// library rbxgs-view/CylinderMesh.cpp (function ??0CylinderAlongXMesh@View@RBX@@AAE@ABVVector3@G3D@@VRenderSurfaceTypes@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
