// roc 2009-06 005c7dd0  unit: seg_005c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c7dd0
//
// 005c7dd0  55                   push ebp
// 005c7dd1  8bec                 mov ebp, esp
// 005c7dd3  eb08                 jmp 0x5c7ddd
// 005c7dd5  8d4d08               lea ecx, [ebp + 8]
// 005c7dd8  e82381ffff           call 0x5bff00
// 005c7ddd  8d4510               lea eax, [ebp + 0x10]
// 005c7de0  50                   push eax
// 005c7de1  8d4d08               lea ecx, [ebp + 8]
// 005c7de4  e85780ffff           call 0x5bfe40
// 005c7de9  0fb6c8               movzx ecx, al
// 005c7dec  85c9                 test ecx, ecx
// 005c7dee  740f                 je 0x5c7dff
// 005c7df0  8b5518               mov edx, dword ptr [ebp + 0x18]
// 005c7df3  8b02                 mov eax, dword ptr [edx]
// 005c7df5  83c001               add eax, 1
// 005c7df8  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005c7dfb  8901                 mov dword ptr [ecx], eax
// 005c7dfd  ebd6                 jmp 0x5c7dd5
// 005c7dff  5d                   pop ebp
// 005c7e00  c3                   ret 
// copied from an identical function in another client (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp