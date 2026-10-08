// roc 2007-03 004e4890  unit: seg_004e0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e4890
//
// 004e4890  53                   push ebx
// 004e4891  56                   push esi
// 004e4892  57                   push edi
// 004e4893  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004e4897  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 004e489b  8bd9                 mov ebx, ecx
// 004e489d  8bf7                 mov esi, edi
// 004e489f  7526                 jne 0x4e48c7
// 004e48a1  8b4608               mov eax, dword ptr [esi + 8]
// 004e48a4  50                   push eax
// 004e48a5  8bcb                 mov ecx, ebx
// 004e48a7  e8e4ffffff           call 0x4e4890
// 004e48ac  8b36                 mov esi, dword ptr [esi]
// 004e48ae  8d4f0c               lea ecx, [edi + 0xc]
// 004e48b1  e80ae8ffff           call 0x4e30c0
// 004e48b6  57                   push edi
// 004e48b7  e834981300           call 0x61e0f0
// 004e48bc  83c404               add esp, 4
// 004e48bf  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 004e48c3  8bfe                 mov edi, esi
// 004e48c5  74da                 je 0x4e48a1
// 004e48c7  5f                   pop edi
// 004e48c8  5e                   pop esi
// 004e48c9  5b                   pop ebx
// 004e48ca  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
