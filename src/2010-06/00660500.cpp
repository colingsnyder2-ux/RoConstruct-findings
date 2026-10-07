// roc 2010-06 00660500  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00660500
//
// 00660500  53                   push ebx
// 00660501  56                   push esi
// 00660502  57                   push edi
// 00660503  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00660507  807f1500             cmp byte ptr [edi + 0x15], 0
// 0066050b  8bd9                 mov ebx, ecx
// 0066050d  8bf7                 mov esi, edi
// 0066050f  7538                 jne 0x660549
// 00660511  8b4608               mov eax, dword ptr [esi + 8]
// 00660514  50                   push eax
// 00660515  8bcb                 mov ecx, ebx
// 00660517  e8e4ffffff           call 0x660500
// 0066051c  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0066051f  8b36                 mov esi, dword ptr [esi]
// 00660521  85c9                 test ecx, ecx
// 00660523  7413                 je 0x660538
// 00660525  8d5108               lea edx, [ecx + 8]
// 00660528  83c8ff               or eax, 0xffffffff
// 0066052b  f00fc102             lock xadd dword ptr [edx], eax
// 0066052f  7507                 jne 0x660538
// 00660531  8b11                 mov edx, dword ptr [ecx]
// 00660533  8b4208               mov eax, dword ptr [edx + 8]
// 00660536  ffd0                 call eax
// 00660538  57                   push edi
// 00660539  e85c741400           call 0x7a799a
// 0066053e  83c404               add esp, 4
// 00660541  807e1500             cmp byte ptr [esi + 0x15], 0
// 00660545  8bfe                 mov edi, esi
// 00660547  74c8                 je 0x660511
// 00660549  5f                   pop edi
// 0066054a  5e                   pop esi
// 0066054b  5b                   pop ebx
// 0066054c  c20400               ret 4
// library templates-boost-1_34_1/set_wp.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$weak_ptr@UT@@@boost@@U?$less@V?$weak_ptr@UT@@@boost@@@std@@V?$allocator@V?$weak_ptr@UT@@@boost@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$weak_ptr@UT@@@boost@@U?$less@V?$weak_ptr@UT@@@boost@@@std@@V?$allocator@V?$weak_ptr@UT@@@boost@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_wp.cpp
