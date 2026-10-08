// roc 2007-08 004d5740  unit: RBX::View::Part  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d5740
//
// 004d5740  53                   push ebx
// 004d5741  55                   push ebp
// 004d5742  8bd9                 mov ebx, ecx
// 004d5744  33ed                 xor ebp, ebp
// 004d5746  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d5749  7e3f                 jle 0x4d578a
// 004d574b  56                   push esi
// 004d574c  57                   push edi
// 004d574d  8d4900               lea ecx, [ecx]
// 004d5750  8b4308               mov eax, dword ptr [ebx + 8]
// 004d5753  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d5756  85f6                 test esi, esi
// 004d5758  7426                 je 0x4d5780
// 004d575a  8d9b00000000         lea ebx, [ebx]
// 004d5760  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004d5763  8d4e08               lea ecx, [esi + 8]
// 004d5766  c7010cf17900         mov dword ptr [ecx], 0x79f10c
// 004d576c  e86fc9ffff           call 0x4d20e0
// 004d5771  56                   push esi
// 004d5772  e879a00200           call 0x4ff7f0
// 004d5777  83c404               add esp, 4
// 004d577a  85ff                 test edi, edi
// 004d577c  8bf7                 mov esi, edi
// 004d577e  75e0                 jne 0x4d5760
// 004d5780  83c501               add ebp, 1
// 004d5783  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d5786  7cc8                 jl 0x4d5750
// 004d5788  5f                   pop edi
// 004d5789  5e                   pop esi
// 004d578a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004d578d  51                   push ecx
// 004d578e  e87da00200           call 0x4ff810
// 004d5793  83c404               add esp, 4
// 004d5796  33c0                 xor eax, eax
// 004d5798  5d                   pop ebp
// 004d5799  894308               mov dword ptr [ebx + 8], eax
// 004d579c  89430c               mov dword ptr [ebx + 0xc], eax
// 004d579f  894304               mov dword ptr [ebx + 4], eax
// 004d57a2  5b                   pop ebx
// 004d57a3  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
