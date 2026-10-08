// roc 2007-08 004ceec0  unit: RBX::VSky::?$FactoryProduct::Creator  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ceec0
//
// 004ceec0  53                   push ebx
// 004ceec1  55                   push ebp
// 004ceec2  8bd9                 mov ebx, ecx
// 004ceec4  33ed                 xor ebp, ebp
// 004ceec6  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004ceec9  7e3f                 jle 0x4cef0a
// 004ceecb  56                   push esi
// 004ceecc  57                   push edi
// 004ceecd  8d4900               lea ecx, [ecx]
// 004ceed0  8b4308               mov eax, dword ptr [ebx + 8]
// 004ceed3  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004ceed6  85f6                 test esi, esi
// 004ceed8  7426                 je 0x4cef00
// 004ceeda  8d9b00000000         lea ebx, [ebx]
// 004ceee0  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004ceee3  8d4e08               lea ecx, [esi + 8]
// 004ceee6  c70150f07900         mov dword ptr [ecx], 0x79f050
// 004ceeec  e82ff0ffff           call 0x4cdf20
// 004ceef1  56                   push esi
// 004ceef2  e8f9080300           call 0x4ff7f0
// 004ceef7  83c404               add esp, 4
// 004ceefa  85ff                 test edi, edi
// 004ceefc  8bf7                 mov esi, edi
// 004ceefe  75e0                 jne 0x4ceee0
// 004cef00  83c501               add ebp, 1
// 004cef03  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004cef06  7cc8                 jl 0x4ceed0
// 004cef08  5f                   pop edi
// 004cef09  5e                   pop esi
// 004cef0a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004cef0d  51                   push ecx
// 004cef0e  e8fd080300           call 0x4ff810
// 004cef13  83c404               add esp, 4
// 004cef16  33c0                 xor eax, eax
// 004cef18  5d                   pop ebp
// 004cef19  894308               mov dword ptr [ebx + 8], eax
// 004cef1c  89430c               mov dword ptr [ebx + 0xc], eax
// 004cef1f  894304               mov dword ptr [ebx + 4], eax
// 004cef22  5b                   pop ebx
// 004cef23  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
