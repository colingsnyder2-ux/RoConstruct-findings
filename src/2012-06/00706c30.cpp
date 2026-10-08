// roc 2012-06 00706c30  unit: RBX::RootInstance  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00706c30
//
// 00706c30  53                   push ebx
// 00706c31  56                   push esi
// 00706c32  57                   push edi
// 00706c33  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00706c37  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 00706c3b  8bd9                 mov ebx, ecx
// 00706c3d  8bf7                 mov esi, edi
// 00706c3f  7526                 jne 0x706c67
// 00706c41  8b4608               mov eax, dword ptr [esi + 8]
// 00706c44  50                   push eax
// 00706c45  8bcb                 mov ecx, ebx
// 00706c47  e8e4ffffff           call 0x706c30
// 00706c4c  8b36                 mov esi, dword ptr [esi]
// 00706c4e  8d4f0c               lea ecx, [edi + 0xc]
// 00706c51  e83a260400           call 0x749290
// 00706c56  57                   push edi
// 00706c57  e8b8b42700           call 0x982114
// 00706c5c  83c404               add esp, 4
// 00706c5f  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 00706c63  8bfe                 mov edi, esi
// 00706c65  74da                 je 0x706c41
// 00706c67  5f                   pop edi
// 00706c68  5e                   pop esi
// 00706c69  5b                   pop ebx
// 00706c6a  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
