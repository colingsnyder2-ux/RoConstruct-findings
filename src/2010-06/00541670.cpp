// roc 2010-06 00541670  unit: RBX::AggregatingSceneManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00541670
//
// 00541670  53                   push ebx
// 00541671  56                   push esi
// 00541672  57                   push edi
// 00541673  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00541677  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 0054167b  8bd9                 mov ebx, ecx
// 0054167d  8bf7                 mov esi, edi
// 0054167f  7526                 jne 0x5416a7
// 00541681  8b4608               mov eax, dword ptr [esi + 8]
// 00541684  50                   push eax
// 00541685  8bcb                 mov ecx, ebx
// 00541687  e8e4ffffff           call 0x541670
// 0054168c  8b36                 mov esi, dword ptr [esi]
// 0054168e  8d4f0c               lea ecx, [edi + 0xc]
// 00541691  e8fae5ffff           call 0x53fc90
// 00541696  57                   push edi
// 00541697  e8fe622600           call 0x7a799a
// 0054169c  83c404               add esp, 4
// 0054169f  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 005416a3  8bfe                 mov edi, esi
// 005416a5  74da                 je 0x541681
// 005416a7  5f                   pop edi
// 005416a8  5e                   pop esi
// 005416a9  5b                   pop ebx
// 005416aa  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
