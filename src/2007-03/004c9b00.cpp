// roc 2007-03 004c9b00  unit: seg_004c0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c9b00
//
// 004c9b00  53                   push ebx
// 004c9b01  55                   push ebp
// 004c9b02  8bd9                 mov ebx, ecx
// 004c9b04  33ed                 xor ebp, ebp
// 004c9b06  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004c9b09  7e3f                 jle 0x4c9b4a
// 004c9b0b  56                   push esi
// 004c9b0c  57                   push edi
// 004c9b0d  8d4900               lea ecx, [ecx]
// 004c9b10  8b4308               mov eax, dword ptr [ebx + 8]
// 004c9b13  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004c9b16  85f6                 test esi, esi
// 004c9b18  7426                 je 0x4c9b40
// 004c9b1a  8d9b00000000         lea ebx, [ebx]
// 004c9b20  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c9b23  8d4e08               lea ecx, [esi + 8]
// 004c9b26  c70168e67900         mov dword ptr [ecx], 0x79e668
// 004c9b2c  e82fc9ffff           call 0x4c6460
// 004c9b31  56                   push esi
// 004c9b32  e829980200           call 0x4f3360
// 004c9b37  83c404               add esp, 4
// 004c9b3a  85ff                 test edi, edi
// 004c9b3c  8bf7                 mov esi, edi
// 004c9b3e  75e0                 jne 0x4c9b20
// 004c9b40  83c501               add ebp, 1
// 004c9b43  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004c9b46  7cc8                 jl 0x4c9b10
// 004c9b48  5f                   pop edi
// 004c9b49  5e                   pop esi
// 004c9b4a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004c9b4d  51                   push ecx
// 004c9b4e  e82d980200           call 0x4f3380
// 004c9b53  83c404               add esp, 4
// 004c9b56  33c0                 xor eax, eax
// 004c9b58  5d                   pop ebp
// 004c9b59  894308               mov dword ptr [ebx + 8], eax
// 004c9b5c  89430c               mov dword ptr [ebx + 0xc], eax
// 004c9b5f  894304               mov dword ptr [ebx + 4], eax
// 004c9b62  5b                   pop ebx
// 004c9b63  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
