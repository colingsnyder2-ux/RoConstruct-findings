// roc 2007-03 004d8290  unit: seg_004d0000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d8290
//
// 004d8290  6aff                 push -1
// 004d8292  683bdd7400           push 0x74dd3b
// 004d8297  64a100000000         mov eax, dword ptr fs:[0]
// 004d829d  50                   push eax
// 004d829e  64892500000000       mov dword ptr fs:[0], esp
// 004d82a5  83ec3c               sub esp, 0x3c
// 004d82a8  53                   push ebx
// 004d82a9  55                   push ebp
// 004d82aa  56                   push esi
// 004d82ab  8be9                 mov ebp, ecx
// 004d82ad  57                   push edi
// 004d82ae  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d82b2  e8f9180100           call 0x4e9bb0
// 004d82b7  33db                 xor ebx, ebx
// 004d82b9  6a1c                 push 0x1c
// 004d82bb  895c2458             mov dword ptr [esp + 0x58], ebx
// 004d82bf  c7450010ea7900       mov dword ptr [ebp], 0x79ea10
// 004d82c6  e83d5e1400           call 0x61e108
// 004d82cb  83c404               add esp, 4
// 004d82ce  3bc3                 cmp eax, ebx
// 004d82d0  7424                 je 0x4d82f6
// 004d82d2  c700946d7900         mov dword ptr [eax], 0x796d94
// 004d82d8  895804               mov dword ptr [eax + 4], ebx
// 004d82db  895808               mov dword ptr [eax + 8], ebx
// 004d82de  c7004ce97900         mov dword ptr [eax], 0x79e94c
// 004d82e4  895810               mov dword ptr [eax + 0x10], ebx
// 004d82e7  895814               mov dword ptr [eax + 0x14], ebx
// 004d82ea  89580c               mov dword ptr [eax + 0xc], ebx
// 004d82ed  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004d82f4  eb02                 jmp 0x4d82f8
// 004d82f6  33c0                 xor eax, eax
// 004d82f8  33ff                 xor edi, edi
// 004d82fa  3bc3                 cmp eax, ebx
// 004d82fc  897c2414             mov dword ptr [esp + 0x14], edi
// 004d8300  7410                 je 0x4d8312
// 004d8302  8bf8                 mov edi, eax
// 004d8304  83c004               add eax, 4
// 004d8307  50                   push eax
// 004d8308  897c2418             mov dword ptr [esp + 0x18], edi
// 004d830c  ff15acd27700         call dword ptr [0x77d2ac]
// 004d8312  8d442414             lea eax, [esp + 0x14]
// 004d8316  8d750c               lea esi, [ebp + 0xc]
// 004d8319  50                   push eax
// 004d831a  8bce                 mov ecx, esi
// 004d831c  c644245803           mov byte ptr [esp + 0x58], 3
// 004d8321  e86a89ffff           call 0x4d0c90
// 004d8326  3bfb                 cmp edi, ebx
// 004d8328  885c2454             mov byte ptr [esp + 0x54], bl
// 004d832c  741f                 je 0x4d834d
// 004d832e  8d4704               lea eax, [edi + 4]
// 004d8331  50                   push eax
// 004d8332  ff15a8d27700         call dword ptr [0x77d2a8]
// 004d8338  85c0                 test eax, eax
// 004d833a  7511                 jne 0x4d834d
// 004d833c  8bcf                 mov ecx, edi
// 004d833e  e87db0f8ff           call 0x4633c0
// 004d8343  8b17                 mov edx, dword ptr [edi]
// 004d8345  8b02                 mov eax, dword ptr [edx]
// 004d8347  6a01                 push 1
// 004d8349  8bcf                 mov ecx, edi
// 004d834b  ffd0                 call eax
// 004d834d  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004d8351  d900                 fld dword ptr [eax]
// 004d8353  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d8356  8b16                 mov edx, dword ptr [esi]
// 004d8358  d95c241c             fstp dword ptr [esp + 0x1c]
// 004d835c  d94004               fld dword ptr [eax + 4]
// 004d835f  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004d8363  d95c2420             fstp dword ptr [esp + 0x20]
// 004d8367  d94008               fld dword ptr [eax + 8]
// 004d836a  8b442460             mov eax, dword ptr [esp + 0x60]
// 004d836e  50                   push eax
// 004d836f  d95c2428             fstp dword ptr [esp + 0x28]
// 004d8373  d9442420             fld dword ptr [esp + 0x20]
// 004d8377  83ec0c               sub esp, 0xc
// 004d837a  8bc4                 mov eax, esp
// 004d837c  d918                 fstp dword ptr [eax]
// 004d837e  8964246c             mov dword ptr [esp + 0x6c], esp
// 004d8382  d9442430             fld dword ptr [esp + 0x30]
// 004d8386  51                   push ecx
// 004d8387  d95804               fstp dword ptr [eax + 4]
// 004d838a  8d4c243c             lea ecx, [esp + 0x3c]
// 004d838e  d9442438             fld dword ptr [esp + 0x38]
// 004d8392  d95808               fstp dword ptr [eax + 8]
// 004d8395  e896a30000           call 0x4e2730
// 004d839a  d9ee                 fldz 
// 004d839c  c7442428d0e97900     mov dword ptr [esp + 0x28], 0x79e9d0
// 004d83a4  d95c2448             fstp dword ptr [esp + 0x48]
// 004d83a8  53                   push ebx
// 004d83a9  8d4c242c             lea ecx, [esp + 0x2c]
// 004d83ad  c644245804           mov byte ptr [esp + 0x58], 4
// 004d83b2  e839a60000           call 0x4e29f0
// 004d83b7  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004d83bb  3bc3                 cmp eax, ebx
// 004d83bd  885c2454             mov byte ptr [esp + 0x54], bl
// 004d83c1  7427                 je 0x4d83ea
// 004d83c3  83c004               add eax, 4
// 004d83c6  50                   push eax
// 004d83c7  ff15a8d27700         call dword ptr [0x77d2a8]
// 004d83cd  85c0                 test eax, eax
// 004d83cf  7519                 jne 0x4d83ea
// 004d83d1  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004d83d5  e8e6aff8ff           call 0x4633c0
// 004d83da  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004d83de  3bcb                 cmp ecx, ebx
// 004d83e0  7408                 je 0x4d83ea
// 004d83e2  8b11                 mov edx, dword ptr [ecx]
// 004d83e4  8b02                 mov eax, dword ptr [edx]
// 004d83e6  6a01                 push 1
// 004d83e8  ffd0                 call eax
// 004d83ea  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004d83ee  5f                   pop edi
// 004d83ef  5e                   pop esi
// 004d83f0  8bc5                 mov eax, ebp
// 004d83f2  5d                   pop ebp
// 004d83f3  64890d00000000       mov dword ptr fs:[0], ecx
// 004d83fa  5b                   pop ebx
// 004d83fb  83c448               add esp, 0x48
// 004d83fe  c20800               ret 8
// library rbxgs-view/WedgeMesh.cpp (function ??0WedgeMesh@View@RBX@@AAE@ABVVector3@G3D@@VRenderSurfaceTypes@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
