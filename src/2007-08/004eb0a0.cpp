// roc 2007-08 004eb0a0  unit: CylinderBuilder  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eb0a0
//
// 004eb0a0  6aff                 push -1
// 004eb0a2  683bd17400           push 0x74d13b
// 004eb0a7  64a100000000         mov eax, dword ptr fs:[0]
// 004eb0ad  50                   push eax
// 004eb0ae  64892500000000       mov dword ptr fs:[0], esp
// 004eb0b5  83ec30               sub esp, 0x30
// 004eb0b8  53                   push ebx
// 004eb0b9  55                   push ebp
// 004eb0ba  56                   push esi
// 004eb0bb  8be9                 mov ebp, ecx
// 004eb0bd  57                   push edi
// 004eb0be  896c2418             mov dword ptr [esp + 0x18], ebp
// 004eb0c2  e8b9b00000           call 0x4f6180
// 004eb0c7  33db                 xor ebx, ebx
// 004eb0c9  6a1c                 push 0x1c
// 004eb0cb  895c244c             mov dword ptr [esp + 0x4c], ebx
// 004eb0cf  c745006cf47900       mov dword ptr [ebp], 0x79f46c
// 004eb0d6  e81b4e1400           call 0x62fef6
// 004eb0db  83c404               add esp, 4
// 004eb0de  3bc3                 cmp eax, ebx
// 004eb0e0  7424                 je 0x4eb106
// 004eb0e2  c70084797900         mov dword ptr [eax], 0x797984
// 004eb0e8  895804               mov dword ptr [eax + 4], ebx
// 004eb0eb  895808               mov dword ptr [eax + 8], ebx
// 004eb0ee  c70004f37900         mov dword ptr [eax], 0x79f304
// 004eb0f4  895810               mov dword ptr [eax + 0x10], ebx
// 004eb0f7  895814               mov dword ptr [eax + 0x14], ebx
// 004eb0fa  89580c               mov dword ptr [eax + 0xc], ebx
// 004eb0fd  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004eb104  eb02                 jmp 0x4eb108
// 004eb106  33c0                 xor eax, eax
// 004eb108  33ff                 xor edi, edi
// 004eb10a  3bc3                 cmp eax, ebx
// 004eb10c  897c2414             mov dword ptr [esp + 0x14], edi
// 004eb110  7410                 je 0x4eb122
// 004eb112  8bf8                 mov edi, eax
// 004eb114  83c004               add eax, 4
// 004eb117  50                   push eax
// 004eb118  897c2418             mov dword ptr [esp + 0x18], edi
// 004eb11c  ff15ecd27700         call dword ptr [0x77d2ec]
// 004eb122  8d442414             lea eax, [esp + 0x14]
// 004eb126  8d750c               lea esi, [ebp + 0xc]
// 004eb129  50                   push eax
// 004eb12a  8bce                 mov ecx, esi
// 004eb12c  c644244c03           mov byte ptr [esp + 0x4c], 3
// 004eb131  e81a21ffff           call 0x4dd250
// 004eb136  3bfb                 cmp edi, ebx
// 004eb138  885c2448             mov byte ptr [esp + 0x48], bl
// 004eb13c  741f                 je 0x4eb15d
// 004eb13e  8d4704               lea eax, [edi + 4]
// 004eb141  50                   push eax
// 004eb142  ff15e8d27700         call dword ptr [0x77d2e8]
// 004eb148  85c0                 test eax, eax
// 004eb14a  7511                 jne 0x4eb15d
// 004eb14c  8bcf                 mov ecx, edi
// 004eb14e  e87dccf6ff           call 0x457dd0
// 004eb153  8b17                 mov edx, dword ptr [edi]
// 004eb155  8b02                 mov eax, dword ptr [edx]
// 004eb157  6a01                 push 1
// 004eb159  8bcf                 mov ecx, edi
// 004eb15b  ffd0                 call eax
// 004eb15d  8b4e04               mov ecx, dword ptr [esi + 4]
// 004eb160  8b16                 mov edx, dword ptr [esi]
// 004eb162  8b442454             mov eax, dword ptr [esp + 0x54]
// 004eb166  6a0c                 push 0xc
// 004eb168  50                   push eax
// 004eb169  8d548afc             lea edx, [edx + ecx*4 - 4]
// 004eb16d  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004eb171  d901                 fld dword ptr [ecx]
// 004eb173  83ec0c               sub esp, 0xc
// 004eb176  8bc4                 mov eax, esp
// 004eb178  d918                 fstp dword ptr [eax]
// 004eb17a  89642468             mov dword ptr [esp + 0x68], esp
// 004eb17e  d94104               fld dword ptr [ecx + 4]
// 004eb181  52                   push edx
// 004eb182  d95804               fstp dword ptr [eax + 4]
// 004eb185  d94108               fld dword ptr [ecx + 8]
// 004eb188  8d4c2434             lea ecx, [esp + 0x34]
// 004eb18c  d95808               fstp dword ptr [eax + 8]
// 004eb18f  e8ecfbffff           call 0x4ead80
// 004eb194  53                   push ebx
// 004eb195  8d4c2420             lea ecx, [esp + 0x20]
// 004eb199  c644244c04           mov byte ptr [esp + 0x4c], 4
// 004eb19e  e80d3b0000           call 0x4eecb0
// 004eb1a3  8b442430             mov eax, dword ptr [esp + 0x30]
// 004eb1a7  3bc3                 cmp eax, ebx
// 004eb1a9  885c2448             mov byte ptr [esp + 0x48], bl
// 004eb1ad  7427                 je 0x4eb1d6
// 004eb1af  83c004               add eax, 4
// 004eb1b2  50                   push eax
// 004eb1b3  ff15e8d27700         call dword ptr [0x77d2e8]
// 004eb1b9  85c0                 test eax, eax
// 004eb1bb  7519                 jne 0x4eb1d6
// 004eb1bd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004eb1c1  e80accf6ff           call 0x457dd0
// 004eb1c6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004eb1ca  3bcb                 cmp ecx, ebx
// 004eb1cc  7408                 je 0x4eb1d6
// 004eb1ce  8b11                 mov edx, dword ptr [ecx]
// 004eb1d0  8b02                 mov eax, dword ptr [edx]
// 004eb1d2  6a01                 push 1
// 004eb1d4  ffd0                 call eax
// 004eb1d6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004eb1da  5f                   pop edi
// 004eb1db  5e                   pop esi
// 004eb1dc  8bc5                 mov eax, ebp
// 004eb1de  5d                   pop ebp
// 004eb1df  64890d00000000       mov dword ptr fs:[0], ecx
// 004eb1e6  5b                   pop ebx
// 004eb1e7  83c43c               add esp, 0x3c
// 004eb1ea  c20800               ret 8
// library rbxgs-view/CylinderMesh.cpp (function ??0CylinderAlongXMesh@View@RBX@@AAE@ABVVector3@G3D@@VRenderSurfaceTypes@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
