// roc 2007-03 004c9b70  unit: seg_004c0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c9b70
//
// 004c9b70  53                   push ebx
// 004c9b71  55                   push ebp
// 004c9b72  8bd9                 mov ebx, ecx
// 004c9b74  33ed                 xor ebp, ebp
// 004c9b76  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004c9b79  7e3f                 jle 0x4c9bba
// 004c9b7b  56                   push esi
// 004c9b7c  57                   push edi
// 004c9b7d  8d4900               lea ecx, [ecx]
// 004c9b80  8b4308               mov eax, dword ptr [ebx + 8]
// 004c9b83  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004c9b86  85f6                 test esi, esi
// 004c9b88  7426                 je 0x4c9bb0
// 004c9b8a  8d9b00000000         lea ebx, [ebx]
// 004c9b90  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c9b93  8d4e08               lea ecx, [esi + 8]
// 004c9b96  c70170e67900         mov dword ptr [ecx], 0x79e670
// 004c9b9c  e8bfc8ffff           call 0x4c6460
// 004c9ba1  56                   push esi
// 004c9ba2  e8b9970200           call 0x4f3360
// 004c9ba7  83c404               add esp, 4
// 004c9baa  85ff                 test edi, edi
// 004c9bac  8bf7                 mov esi, edi
// 004c9bae  75e0                 jne 0x4c9b90
// 004c9bb0  83c501               add ebp, 1
// 004c9bb3  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004c9bb6  7cc8                 jl 0x4c9b80
// 004c9bb8  5f                   pop edi
// 004c9bb9  5e                   pop esi
// 004c9bba  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004c9bbd  51                   push ecx
// 004c9bbe  e8bd970200           call 0x4f3380
// 004c9bc3  83c404               add esp, 4
// 004c9bc6  33c0                 xor eax, eax
// 004c9bc8  5d                   pop ebp
// 004c9bc9  894308               mov dword ptr [ebx + 8], eax
// 004c9bcc  89430c               mov dword ptr [ebx + 0xc], eax
// 004c9bcf  894304               mov dword ptr [ebx + 4], eax
// 004c9bd2  5b                   pop ebx
// 004c9bd3  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
