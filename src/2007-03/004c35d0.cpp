// roc 2007-03 004c35d0  unit: seg_004c0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c35d0
//
// 004c35d0  53                   push ebx
// 004c35d1  55                   push ebp
// 004c35d2  8bd9                 mov ebx, ecx
// 004c35d4  33ed                 xor ebp, ebp
// 004c35d6  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004c35d9  7e3f                 jle 0x4c361a
// 004c35db  56                   push esi
// 004c35dc  57                   push edi
// 004c35dd  8d4900               lea ecx, [ecx]
// 004c35e0  8b4308               mov eax, dword ptr [ebx + 8]
// 004c35e3  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004c35e6  85f6                 test esi, esi
// 004c35e8  7426                 je 0x4c3610
// 004c35ea  8d9b00000000         lea ebx, [ebx]
// 004c35f0  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c35f3  8d4e08               lea ecx, [esi + 8]
// 004c35f6  c701f8e57900         mov dword ptr [ecx], 0x79e5f8
// 004c35fc  e85f2e0000           call 0x4c6460
// 004c3601  56                   push esi
// 004c3602  e859fd0200           call 0x4f3360
// 004c3607  83c404               add esp, 4
// 004c360a  85ff                 test edi, edi
// 004c360c  8bf7                 mov esi, edi
// 004c360e  75e0                 jne 0x4c35f0
// 004c3610  83c501               add ebp, 1
// 004c3613  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004c3616  7cc8                 jl 0x4c35e0
// 004c3618  5f                   pop edi
// 004c3619  5e                   pop esi
// 004c361a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004c361d  51                   push ecx
// 004c361e  e85dfd0200           call 0x4f3380
// 004c3623  83c404               add esp, 4
// 004c3626  33c0                 xor eax, eax
// 004c3628  5d                   pop ebp
// 004c3629  894308               mov dword ptr [ebx + 8], eax
// 004c362c  89430c               mov dword ptr [ebx + 0xc], eax
// 004c362f  894304               mov dword ptr [ebx + 4], eax
// 004c3632  5b                   pop ebx
// 004c3633  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
