// roc 2007-08 004d57b0  unit: RBX::View::Part  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d57b0
//
// 004d57b0  53                   push ebx
// 004d57b1  55                   push ebp
// 004d57b2  8bd9                 mov ebx, ecx
// 004d57b4  33ed                 xor ebp, ebp
// 004d57b6  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d57b9  7e3f                 jle 0x4d57fa
// 004d57bb  56                   push esi
// 004d57bc  57                   push edi
// 004d57bd  8d4900               lea ecx, [ecx]
// 004d57c0  8b4308               mov eax, dword ptr [ebx + 8]
// 004d57c3  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d57c6  85f6                 test esi, esi
// 004d57c8  7426                 je 0x4d57f0
// 004d57ca  8d9b00000000         lea ebx, [ebx]
// 004d57d0  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004d57d3  8d4e08               lea ecx, [esi + 8]
// 004d57d6  c70114f17900         mov dword ptr [ecx], 0x79f114
// 004d57dc  e8ffc8ffff           call 0x4d20e0
// 004d57e1  56                   push esi
// 004d57e2  e809a00200           call 0x4ff7f0
// 004d57e7  83c404               add esp, 4
// 004d57ea  85ff                 test edi, edi
// 004d57ec  8bf7                 mov esi, edi
// 004d57ee  75e0                 jne 0x4d57d0
// 004d57f0  83c501               add ebp, 1
// 004d57f3  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d57f6  7cc8                 jl 0x4d57c0
// 004d57f8  5f                   pop edi
// 004d57f9  5e                   pop esi
// 004d57fa  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004d57fd  51                   push ecx
// 004d57fe  e80da00200           call 0x4ff810
// 004d5803  83c404               add esp, 4
// 004d5806  33c0                 xor eax, eax
// 004d5808  5d                   pop ebp
// 004d5809  894308               mov dword ptr [ebx + 8], eax
// 004d580c  89430c               mov dword ptr [ebx + 0xc], eax
// 004d580f  894304               mov dword ptr [ebx + 4], eax
// 004d5812  5b                   pop ebx
// 004d5813  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
