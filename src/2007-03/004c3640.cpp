// roc 2007-03 004c3640  unit: seg_004c0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c3640
//
// 004c3640  53                   push ebx
// 004c3641  55                   push ebp
// 004c3642  8bd9                 mov ebx, ecx
// 004c3644  33ed                 xor ebp, ebp
// 004c3646  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004c3649  7e3f                 jle 0x4c368a
// 004c364b  56                   push esi
// 004c364c  57                   push edi
// 004c364d  8d4900               lea ecx, [ecx]
// 004c3650  8b4308               mov eax, dword ptr [ebx + 8]
// 004c3653  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004c3656  85f6                 test esi, esi
// 004c3658  7426                 je 0x4c3680
// 004c365a  8d9b00000000         lea ebx, [ebx]
// 004c3660  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c3663  8d4e08               lea ecx, [esi + 8]
// 004c3666  c70100e67900         mov dword ptr [ecx], 0x79e600
// 004c366c  e8ef2d0000           call 0x4c6460
// 004c3671  56                   push esi
// 004c3672  e8e9fc0200           call 0x4f3360
// 004c3677  83c404               add esp, 4
// 004c367a  85ff                 test edi, edi
// 004c367c  8bf7                 mov esi, edi
// 004c367e  75e0                 jne 0x4c3660
// 004c3680  83c501               add ebp, 1
// 004c3683  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004c3686  7cc8                 jl 0x4c3650
// 004c3688  5f                   pop edi
// 004c3689  5e                   pop esi
// 004c368a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004c368d  51                   push ecx
// 004c368e  e8edfc0200           call 0x4f3380
// 004c3693  83c404               add esp, 4
// 004c3696  33c0                 xor eax, eax
// 004c3698  5d                   pop ebp
// 004c3699  894308               mov dword ptr [ebx + 8], eax
// 004c369c  89430c               mov dword ptr [ebx + 0xc], eax
// 004c369f  894304               mov dword ptr [ebx + 4], eax
// 004c36a2  5b                   pop ebx
// 004c36a3  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
