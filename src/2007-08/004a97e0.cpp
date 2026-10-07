// roc 2007-08 004a97e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a97e0
//
// 004a97e0  53                   push ebx
// 004a97e1  56                   push esi
// 004a97e2  57                   push edi
// 004a97e3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a97e7  807f1500             cmp byte ptr [edi + 0x15], 0
// 004a97eb  8bd9                 mov ebx, ecx
// 004a97ed  8bf7                 mov esi, edi
// 004a97ef  7538                 jne 0x4a9829
// 004a97f1  8b4608               mov eax, dword ptr [esi + 8]
// 004a97f4  50                   push eax
// 004a97f5  8bcb                 mov ecx, ebx
// 004a97f7  e8e4ffffff           call 0x4a97e0
// 004a97fc  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 004a97ff  85c9                 test ecx, ecx
// 004a9801  8b36                 mov esi, dword ptr [esi]
// 004a9803  7413                 je 0x4a9818
// 004a9805  8d5108               lea edx, [ecx + 8]
// 004a9808  83c8ff               or eax, 0xffffffff
// 004a980b  f00fc102             lock xadd dword ptr [edx], eax
// 004a980f  7507                 jne 0x4a9818
// 004a9811  8b11                 mov edx, dword ptr [ecx]
// 004a9813  8b4208               mov eax, dword ptr [edx + 8]
// 004a9816  ffd0                 call eax
// 004a9818  57                   push edi
// 004a9819  e844641800           call 0x62fc62
// 004a981e  83c404               add esp, 4
// 004a9821  807e1500             cmp byte ptr [esi + 0x15], 0
// 004a9825  8bfe                 mov edi, esi
// 004a9827  74c8                 je 0x4a97f1
// 004a9829  5f                   pop edi
// 004a982a  5e                   pop esi
// 004a982b  5b                   pop ebx
// 004a982c  c20400               ret 4
// library templates-boost-1_34_1/set_wp.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$weak_ptr@UT@@@boost@@U?$less@V?$weak_ptr@UT@@@boost@@@std@@V?$allocator@V?$weak_ptr@UT@@@boost@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$weak_ptr@UT@@@boost@@U?$less@V?$weak_ptr@UT@@@boost@@@std@@V?$allocator@V?$weak_ptr@UT@@@boost@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_wp.cpp
