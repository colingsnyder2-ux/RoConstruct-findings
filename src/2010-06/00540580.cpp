// roc 2010-06 00540580  unit: RBX::AggregatingSceneManager  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00540580
//
// 00540580  55                   push ebp
// 00540581  8bec                 mov ebp, esp
// 00540583  6aff                 push -1
// 00540585  6821fa9800           push 0x98fa21
// 0054058a  64a100000000         mov eax, dword ptr fs:[0]
// 00540590  50                   push eax
// 00540591  64892500000000       mov dword ptr fs:[0], esp
// 00540598  83ec0c               sub esp, 0xc
// 0054059b  53                   push ebx
// 0054059c  56                   push esi
// 0054059d  57                   push edi
// 0054059e  8965f0               mov dword ptr [ebp - 0x10], esp
// 005405a1  6a20                 push 0x20
// 005405a3  e8f8732600           call 0x7a79a0
// 005405a8  8bf0                 mov esi, eax
// 005405aa  83c404               add esp, 4
// 005405ad  8975ec               mov dword ptr [ebp - 0x14], esi
// 005405b0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005405b7  8975e8               mov dword ptr [ebp - 0x18], esi
// 005405ba  c645fc01             mov byte ptr [ebp - 4], 1
// 005405be  85f6                 test esi, esi
// 005405c0  7427                 je 0x5405e9
// 005405c2  8b4508               mov eax, dword ptr [ebp + 8]
// 005405c5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005405c8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005405cb  8906                 mov dword ptr [esi], eax
// 005405cd  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005405d0  894e04               mov dword ptr [esi + 4], ecx
// 005405d3  50                   push eax
// 005405d4  8d4e0c               lea ecx, [esi + 0xc]
// 005405d7  895608               mov dword ptr [esi + 8], edx
// 005405da  e831faffff           call 0x540010
// 005405df  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 005405e2  884e1c               mov byte ptr [esi + 0x1c], cl
// 005405e5  c6461d00             mov byte ptr [esi + 0x1d], 0
// 005405e9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005405ec  5f                   pop edi
// 005405ed  8bc6                 mov eax, esi
// 005405ef  5e                   pop esi
// 005405f0  64890d00000000       mov dword ptr fs:[0], ecx
// 005405f7  5b                   pop ebx
// 005405f8  8be5                 mov esp, ebp
// 005405fa  5d                   pop ebp
// 005405fb  c21400               ret 0x14
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
