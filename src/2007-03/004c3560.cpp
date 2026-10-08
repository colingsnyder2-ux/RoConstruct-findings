// roc 2007-03 004c3560  unit: seg_004c0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c3560
//
// 004c3560  53                   push ebx
// 004c3561  55                   push ebp
// 004c3562  8bd9                 mov ebx, ecx
// 004c3564  33ed                 xor ebp, ebp
// 004c3566  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004c3569  7e3f                 jle 0x4c35aa
// 004c356b  56                   push esi
// 004c356c  57                   push edi
// 004c356d  8d4900               lea ecx, [ecx]
// 004c3570  8b4308               mov eax, dword ptr [ebx + 8]
// 004c3573  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004c3576  85f6                 test esi, esi
// 004c3578  7426                 je 0x4c35a0
// 004c357a  8d9b00000000         lea ebx, [ebx]
// 004c3580  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c3583  8d4e08               lea ecx, [esi + 8]
// 004c3586  c701f0e57900         mov dword ptr [ecx], 0x79e5f0
// 004c358c  e89ff5ffff           call 0x4c2b30
// 004c3591  56                   push esi
// 004c3592  e8c9fd0200           call 0x4f3360
// 004c3597  83c404               add esp, 4
// 004c359a  85ff                 test edi, edi
// 004c359c  8bf7                 mov esi, edi
// 004c359e  75e0                 jne 0x4c3580
// 004c35a0  83c501               add ebp, 1
// 004c35a3  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004c35a6  7cc8                 jl 0x4c3570
// 004c35a8  5f                   pop edi
// 004c35a9  5e                   pop esi
// 004c35aa  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004c35ad  51                   push ecx
// 004c35ae  e8cdfd0200           call 0x4f3380
// 004c35b3  83c404               add esp, 4
// 004c35b6  33c0                 xor eax, eax
// 004c35b8  5d                   pop ebp
// 004c35b9  894308               mov dword ptr [ebx + 8], eax
// 004c35bc  89430c               mov dword ptr [ebx + 0xc], eax
// 004c35bf  894304               mov dword ptr [ebx + 4], eax
// 004c35c2  5b                   pop ebx
// 004c35c3  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
