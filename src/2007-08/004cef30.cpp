// roc 2007-08 004cef30  unit: RBX::VSky::?$FactoryProduct::Creator  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cef30
//
// 004cef30  53                   push ebx
// 004cef31  55                   push ebp
// 004cef32  8bd9                 mov ebx, ecx
// 004cef34  33ed                 xor ebp, ebp
// 004cef36  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004cef39  7e3f                 jle 0x4cef7a
// 004cef3b  56                   push esi
// 004cef3c  57                   push edi
// 004cef3d  8d4900               lea ecx, [ecx]
// 004cef40  8b4308               mov eax, dword ptr [ebx + 8]
// 004cef43  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004cef46  85f6                 test esi, esi
// 004cef48  7426                 je 0x4cef70
// 004cef4a  8d9b00000000         lea ebx, [ebx]
// 004cef50  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004cef53  8d4e08               lea ecx, [esi + 8]
// 004cef56  c70158f07900         mov dword ptr [ecx], 0x79f058
// 004cef5c  e87f310000           call 0x4d20e0
// 004cef61  56                   push esi
// 004cef62  e889080300           call 0x4ff7f0
// 004cef67  83c404               add esp, 4
// 004cef6a  85ff                 test edi, edi
// 004cef6c  8bf7                 mov esi, edi
// 004cef6e  75e0                 jne 0x4cef50
// 004cef70  83c501               add ebp, 1
// 004cef73  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004cef76  7cc8                 jl 0x4cef40
// 004cef78  5f                   pop edi
// 004cef79  5e                   pop esi
// 004cef7a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004cef7d  51                   push ecx
// 004cef7e  e88d080300           call 0x4ff810
// 004cef83  83c404               add esp, 4
// 004cef86  33c0                 xor eax, eax
// 004cef88  5d                   pop ebp
// 004cef89  894308               mov dword ptr [ebx + 8], eax
// 004cef8c  89430c               mov dword ptr [ebx + 0xc], eax
// 004cef8f  894304               mov dword ptr [ebx + 4], eax
// 004cef92  5b                   pop ebx
// 004cef93  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
