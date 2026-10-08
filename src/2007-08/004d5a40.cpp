// roc 2007-08 004d5a40  unit: RBX::View::Part  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d5a40
//
// 004d5a40  53                   push ebx
// 004d5a41  55                   push ebp
// 004d5a42  8bd9                 mov ebx, ecx
// 004d5a44  33ed                 xor ebp, ebp
// 004d5a46  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d5a49  7e3f                 jle 0x4d5a8a
// 004d5a4b  56                   push esi
// 004d5a4c  57                   push edi
// 004d5a4d  8d4900               lea ecx, [ecx]
// 004d5a50  8b4308               mov eax, dword ptr [ebx + 8]
// 004d5a53  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d5a56  85f6                 test esi, esi
// 004d5a58  7426                 je 0x4d5a80
// 004d5a5a  8d9b00000000         lea ebx, [ebx]
// 004d5a60  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004d5a63  8d4e08               lea ecx, [esi + 8]
// 004d5a66  c7011cf17900         mov dword ptr [ecx], 0x79f11c
// 004d5a6c  e86fc6ffff           call 0x4d20e0
// 004d5a71  56                   push esi
// 004d5a72  e8799d0200           call 0x4ff7f0
// 004d5a77  83c404               add esp, 4
// 004d5a7a  85ff                 test edi, edi
// 004d5a7c  8bf7                 mov esi, edi
// 004d5a7e  75e0                 jne 0x4d5a60
// 004d5a80  83c501               add ebp, 1
// 004d5a83  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d5a86  7cc8                 jl 0x4d5a50
// 004d5a88  5f                   pop edi
// 004d5a89  5e                   pop esi
// 004d5a8a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004d5a8d  51                   push ecx
// 004d5a8e  e87d9d0200           call 0x4ff810
// 004d5a93  83c404               add esp, 4
// 004d5a96  33c0                 xor eax, eax
// 004d5a98  5d                   pop ebp
// 004d5a99  894308               mov dword ptr [ebx + 8], eax
// 004d5a9c  89430c               mov dword ptr [ebx + 0xc], eax
// 004d5a9f  894304               mov dword ptr [ebx + 4], eax
// 004d5aa2  5b                   pop ebx
// 004d5aa3  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
