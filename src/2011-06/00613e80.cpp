// roc 2011-06 00613e80  unit: TextXmlParser  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00613e80
//
// 00613e80  53                   push ebx
// 00613e81  56                   push esi
// 00613e82  57                   push edi
// 00613e83  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00613e87  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 00613e8b  8bd9                 mov ebx, ecx
// 00613e8d  8bf7                 mov esi, edi
// 00613e8f  7526                 jne 0x613eb7
// 00613e91  8b4608               mov eax, dword ptr [esi + 8]
// 00613e94  50                   push eax
// 00613e95  8bcb                 mov ecx, ebx
// 00613e97  e8e4ffffff           call 0x613e80
// 00613e9c  8b36                 mov esi, dword ptr [esi]
// 00613e9e  8d4f0c               lea ecx, [edi + 0xc]
// 00613ea1  e80a6fe2ff           call 0x43adb0
// 00613ea6  57                   push edi
// 00613ea7  e8ac611f00           call 0x80a058
// 00613eac  83c404               add esp, 4
// 00613eaf  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 00613eb3  8bfe                 mov edi, esi
// 00613eb5  74da                 je 0x613e91
// 00613eb7  5f                   pop edi
// 00613eb8  5e                   pop esi
// 00613eb9  5b                   pop ebx
// 00613eba  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
