// roc 2008-06 004f0c90  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f0c90
//
// 004f0c90  55                   push ebp
// 004f0c91  8bec                 mov ebp, esp
// 004f0c93  6aff                 push -1
// 004f0c95  6891ad7c00           push 0x7cad91
// 004f0c9a  64a100000000         mov eax, dword ptr fs:[0]
// 004f0ca0  50                   push eax
// 004f0ca1  64892500000000       mov dword ptr fs:[0], esp
// 004f0ca8  83ec0c               sub esp, 0xc
// 004f0cab  53                   push ebx
// 004f0cac  56                   push esi
// 004f0cad  57                   push edi
// 004f0cae  8965f0               mov dword ptr [ebp - 0x10], esp
// 004f0cb1  6a24                 push 0x24
// 004f0cb3  e868fc1a00           call 0x6a0920
// 004f0cb8  8bf0                 mov esi, eax
// 004f0cba  83c404               add esp, 4
// 004f0cbd  8975ec               mov dword ptr [ebp - 0x14], esi
// 004f0cc0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004f0cc7  8975e8               mov dword ptr [ebp - 0x18], esi
// 004f0cca  c645fc01             mov byte ptr [ebp - 4], 1
// 004f0cce  85f6                 test esi, esi
// 004f0cd0  743b                 je 0x4f0d0d
// 004f0cd2  8b4508               mov eax, dword ptr [ebp + 8]
// 004f0cd5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004f0cd8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004f0cdb  8906                 mov dword ptr [esi], eax
// 004f0cdd  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004f0ce0  894e04               mov dword ptr [esi + 4], ecx
// 004f0ce3  895608               mov dword ptr [esi + 8], edx
// 004f0ce6  8b08                 mov ecx, dword ptr [eax]
// 004f0ce8  894e0c               mov dword ptr [esi + 0xc], ecx
// 004f0ceb  8b5004               mov edx, dword ptr [eax + 4]
// 004f0cee  895610               mov dword ptr [esi + 0x10], edx
// 004f0cf1  8b4808               mov ecx, dword ptr [eax + 8]
// 004f0cf4  83c00c               add eax, 0xc
// 004f0cf7  894e14               mov dword ptr [esi + 0x14], ecx
// 004f0cfa  50                   push eax
// 004f0cfb  8d4e18               lea ecx, [esi + 0x18]
// 004f0cfe  e8bdfeffff           call 0x4f0bc0
// 004f0d03  8a5518               mov dl, byte ptr [ebp + 0x18]
// 004f0d06  885620               mov byte ptr [esi + 0x20], dl
// 004f0d09  c6462100             mov byte ptr [esi + 0x21], 0
// 004f0d0d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004f0d10  5f                   pop edi
// 004f0d11  8bc6                 mov eax, esi
// 004f0d13  5e                   pop esi
// 004f0d14  64890d00000000       mov dword ptr fs:[0], ecx
// 004f0d1b  5b                   pop ebx
// 004f0d1c  8be5                 mov esp, ebp
// 004f0d1e  5d                   pop ebp
// 004f0d1f  c21400               ret 0x14
// library rbxgs-view/MaterialFactory.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
