// roc 2007-08 004cefa0  unit: RBX::VSky::?$FactoryProduct::Creator  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cefa0
//
// 004cefa0  53                   push ebx
// 004cefa1  55                   push ebp
// 004cefa2  8bd9                 mov ebx, ecx
// 004cefa4  33ed                 xor ebp, ebp
// 004cefa6  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004cefa9  7e3f                 jle 0x4cefea
// 004cefab  56                   push esi
// 004cefac  57                   push edi
// 004cefad  8d4900               lea ecx, [ecx]
// 004cefb0  8b4308               mov eax, dword ptr [ebx + 8]
// 004cefb3  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004cefb6  85f6                 test esi, esi
// 004cefb8  7426                 je 0x4cefe0
// 004cefba  8d9b00000000         lea ebx, [ebx]
// 004cefc0  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004cefc3  8d4e08               lea ecx, [esi + 8]
// 004cefc6  c70160f07900         mov dword ptr [ecx], 0x79f060
// 004cefcc  e80f310000           call 0x4d20e0
// 004cefd1  56                   push esi
// 004cefd2  e819080300           call 0x4ff7f0
// 004cefd7  83c404               add esp, 4
// 004cefda  85ff                 test edi, edi
// 004cefdc  8bf7                 mov esi, edi
// 004cefde  75e0                 jne 0x4cefc0
// 004cefe0  83c501               add ebp, 1
// 004cefe3  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004cefe6  7cc8                 jl 0x4cefb0
// 004cefe8  5f                   pop edi
// 004cefe9  5e                   pop esi
// 004cefea  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004cefed  51                   push ecx
// 004cefee  e81d080300           call 0x4ff810
// 004ceff3  83c404               add esp, 4
// 004ceff6  33c0                 xor eax, eax
// 004ceff8  5d                   pop ebp
// 004ceff9  894308               mov dword ptr [ebx + 8], eax
// 004ceffc  89430c               mov dword ptr [ebx + 0xc], eax
// 004cefff  894304               mov dword ptr [ebx + 4], eax
// 004cf002  5b                   pop ebx
// 004cf003  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
