// roc 2009-06 005c7d60  unit: seg_005c0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c7d60
//
// 005c7d60  55                   push ebp
// 005c7d61  8bec                 mov ebp, esp
// 005c7d63  51                   push ecx
// 005c7d64  8b4508               mov eax, dword ptr [ebp + 8]
// 005c7d67  8be5                 mov esp, ebp
// 005c7d69  5d                   pop ebp
// 005c7d6a  c3                   ret 
// copied from an identical function in another client (function ??$_Iter_cat@Viterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@@std@@YA?AUbidirectional_iterator_tag@0@ABViterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp