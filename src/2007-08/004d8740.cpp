// roc 2007-08 004d8740  unit: RBX::View::MegaTextureProxy  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d8740
//
// 004d8740  55                   push ebp
// 004d8741  8bec                 mov ebp, esp
// 004d8743  6aff                 push -1
// 004d8745  68f1ca7400           push 0x74caf1
// 004d874a  64a100000000         mov eax, dword ptr fs:[0]
// 004d8750  50                   push eax
// 004d8751  64892500000000       mov dword ptr fs:[0], esp
// 004d8758  83ec0c               sub esp, 0xc
// 004d875b  53                   push ebx
// 004d875c  56                   push esi
// 004d875d  57                   push edi
// 004d875e  8965f0               mov dword ptr [ebp - 0x10], esp
// 004d8761  6a24                 push 0x24
// 004d8763  e88e771500           call 0x62fef6
// 004d8768  8bf0                 mov esi, eax
// 004d876a  83c404               add esp, 4
// 004d876d  8975ec               mov dword ptr [ebp - 0x14], esi
// 004d8770  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004d8777  8975e8               mov dword ptr [ebp - 0x18], esi
// 004d877a  85f6                 test esi, esi
// 004d877c  c645fc01             mov byte ptr [ebp - 4], 1
// 004d8780  743b                 je 0x4d87bd
// 004d8782  8b4508               mov eax, dword ptr [ebp + 8]
// 004d8785  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004d8788  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004d878b  8906                 mov dword ptr [esi], eax
// 004d878d  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004d8790  894e04               mov dword ptr [esi + 4], ecx
// 004d8793  895608               mov dword ptr [esi + 8], edx
// 004d8796  8b08                 mov ecx, dword ptr [eax]
// 004d8798  894e0c               mov dword ptr [esi + 0xc], ecx
// 004d879b  8b5004               mov edx, dword ptr [eax + 4]
// 004d879e  895610               mov dword ptr [esi + 0x10], edx
// 004d87a1  8b4808               mov ecx, dword ptr [eax + 8]
// 004d87a4  83c00c               add eax, 0xc
// 004d87a7  894e14               mov dword ptr [esi + 0x14], ecx
// 004d87aa  50                   push eax
// 004d87ab  8d4e18               lea ecx, [esi + 0x18]
// 004d87ae  e80dfeffff           call 0x4d85c0
// 004d87b3  8a5518               mov dl, byte ptr [ebp + 0x18]
// 004d87b6  885620               mov byte ptr [esi + 0x20], dl
// 004d87b9  c6462100             mov byte ptr [esi + 0x21], 0
// 004d87bd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004d87c0  5f                   pop edi
// 004d87c1  8bc6                 mov eax, esi
// 004d87c3  5e                   pop esi
// 004d87c4  64890d00000000       mov dword ptr fs:[0], ecx
// 004d87cb  5b                   pop ebx
// 004d87cc  8be5                 mov esp, ebp
// 004d87ce  5d                   pop ebp
// 004d87cf  c21400               ret 0x14
// library rbxgs-view/MaterialFactory.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
