// roc 2007-08 004f0f20  unit: RBX::Render::AggregatingSceneManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f0f20
//
// 004f0f20  53                   push ebx
// 004f0f21  56                   push esi
// 004f0f22  57                   push edi
// 004f0f23  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f0f27  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 004f0f2b  8bd9                 mov ebx, ecx
// 004f0f2d  8bf7                 mov esi, edi
// 004f0f2f  7526                 jne 0x4f0f57
// 004f0f31  8b4608               mov eax, dword ptr [esi + 8]
// 004f0f34  50                   push eax
// 004f0f35  8bcb                 mov ecx, ebx
// 004f0f37  e8e4ffffff           call 0x4f0f20
// 004f0f3c  8b36                 mov esi, dword ptr [esi]
// 004f0f3e  8d4f0c               lea ecx, [edi + 0xc]
// 004f0f41  e84ae8ffff           call 0x4ef790
// 004f0f46  57                   push edi
// 004f0f47  e816ed1300           call 0x62fc62
// 004f0f4c  83c404               add esp, 4
// 004f0f4f  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 004f0f53  8bfe                 mov edi, esi
// 004f0f55  74da                 je 0x4f0f31
// 004f0f57  5f                   pop edi
// 004f0f58  5e                   pop esi
// 004f0f59  5b                   pop ebx
// 004f0f5a  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
