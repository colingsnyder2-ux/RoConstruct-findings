// roc 2011-06 0044e030  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0044e030
//
// 0044e030  55                   push ebp
// 0044e031  8bec                 mov ebp, esp
// 0044e033  6aff                 push -1
// 0044e035  68011b9d00           push 0x9d1b01
// 0044e03a  64a100000000         mov eax, dword ptr fs:[0]
// 0044e040  50                   push eax
// 0044e041  64892500000000       mov dword ptr fs:[0], esp
// 0044e048  83ec0c               sub esp, 0xc
// 0044e04b  53                   push ebx
// 0044e04c  56                   push esi
// 0044e04d  57                   push edi
// 0044e04e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0044e051  6a18                 push 0x18
// 0044e053  e806c03b00           call 0x80a05e
// 0044e058  8bf0                 mov esi, eax
// 0044e05a  83c404               add esp, 4
// 0044e05d  8975ec               mov dword ptr [ebp - 0x14], esi
// 0044e060  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044e067  8975e8               mov dword ptr [ebp - 0x18], esi
// 0044e06a  c645fc01             mov byte ptr [ebp - 4], 1
// 0044e06e  85f6                 test esi, esi
// 0044e070  7427                 je 0x44e099
// 0044e072  8b4508               mov eax, dword ptr [ebp + 8]
// 0044e075  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0044e078  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0044e07b  8906                 mov dword ptr [esi], eax
// 0044e07d  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0044e080  894e04               mov dword ptr [esi + 4], ecx
// 0044e083  50                   push eax
// 0044e084  8d4e0c               lea ecx, [esi + 0xc]
// 0044e087  895608               mov dword ptr [esi + 8], edx
// 0044e08a  e831bf2c00           call 0x719fc0
// 0044e08f  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 0044e092  884e14               mov byte ptr [esi + 0x14], cl
// 0044e095  c6461500             mov byte ptr [esi + 0x15], 0
// 0044e099  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044e09c  5f                   pop edi
// 0044e09d  8bc6                 mov eax, esi
// 0044e09f  5e                   pop esi
// 0044e0a0  64890d00000000       mov dword ptr fs:[0], ecx
// 0044e0a7  5b                   pop ebx
// 0044e0a8  8be5                 mov esp, ebp
// 0044e0aa  5d                   pop ebp
// 0044e0ab  c21400               ret 0x14
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@2@PAU342@00ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
