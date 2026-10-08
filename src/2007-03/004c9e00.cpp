// roc 2007-03 004c9e00  unit: seg_004c0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c9e00
//
// 004c9e00  53                   push ebx
// 004c9e01  55                   push ebp
// 004c9e02  8bd9                 mov ebx, ecx
// 004c9e04  33ed                 xor ebp, ebp
// 004c9e06  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004c9e09  7e3f                 jle 0x4c9e4a
// 004c9e0b  56                   push esi
// 004c9e0c  57                   push edi
// 004c9e0d  8d4900               lea ecx, [ecx]
// 004c9e10  8b4308               mov eax, dword ptr [ebx + 8]
// 004c9e13  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004c9e16  85f6                 test esi, esi
// 004c9e18  7426                 je 0x4c9e40
// 004c9e1a  8d9b00000000         lea ebx, [ebx]
// 004c9e20  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c9e23  8d4e08               lea ecx, [esi + 8]
// 004c9e26  c70178e67900         mov dword ptr [ecx], 0x79e678
// 004c9e2c  e82fc6ffff           call 0x4c6460
// 004c9e31  56                   push esi
// 004c9e32  e829950200           call 0x4f3360
// 004c9e37  83c404               add esp, 4
// 004c9e3a  85ff                 test edi, edi
// 004c9e3c  8bf7                 mov esi, edi
// 004c9e3e  75e0                 jne 0x4c9e20
// 004c9e40  83c501               add ebp, 1
// 004c9e43  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004c9e46  7cc8                 jl 0x4c9e10
// 004c9e48  5f                   pop edi
// 004c9e49  5e                   pop esi
// 004c9e4a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004c9e4d  51                   push ecx
// 004c9e4e  e82d950200           call 0x4f3380
// 004c9e53  83c404               add esp, 4
// 004c9e56  33c0                 xor eax, eax
// 004c9e58  5d                   pop ebp
// 004c9e59  894308               mov dword ptr [ebx + 8], eax
// 004c9e5c  89430c               mov dword ptr [ebx + 0xc], eax
// 004c9e5f  894304               mov dword ptr [ebx + 4], eax
// 004c9e62  5b                   pop ebx
// 004c9e63  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
