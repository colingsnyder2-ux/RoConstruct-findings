// from server: 100% by auto
// roc 2011-06 0073e650  unit: RBX::VGuiService::?$EventDesc  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073e650
//
// 0073e650  53                   push ebx
// 0073e651  56                   push esi
// 0073e652  57                   push edi
// 0073e653  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0073e657  807f1500             cmp byte ptr [edi + 0x15], 0
// 0073e65b  8bd9                 mov ebx, ecx
// 0073e65d  8bf7                 mov esi, edi
// 0073e65f  7538                 jne 0x73e699
// 0073e661  8b4608               mov eax, dword ptr [esi + 8]
// 0073e664  50                   push eax
// 0073e665  8bcb                 mov ecx, ebx
// 0073e667  e8e4ffffff           call 0x73e650
// 0073e66c  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0073e66f  8b36                 mov esi, dword ptr [esi]
// 0073e671  85c9                 test ecx, ecx
// 0073e673  7413                 je 0x73e688
// 0073e675  8d5108               lea edx, [ecx + 8]
// 0073e678  83c8ff               or eax, 0xffffffff
// 0073e67b  f00fc102             lock xadd dword ptr [edx], eax
// 0073e67f  7507                 jne 0x73e688
// 0073e681  8b11                 mov edx, dword ptr [ecx]
// 0073e683  8b4208               mov eax, dword ptr [edx + 8]
// 0073e686  ffd0                 call eax
// 0073e688  57                   push edi
// 0073e689  e8cab90c00           call 0x80a058
// 0073e68e  83c404               add esp, 4
// 0073e691  807e1500             cmp byte ptr [esi + 0x15], 0
// 0073e695  8bfe                 mov edi, esi
// 0073e697  74c8                 je 0x73e661
// 0073e699  5f                   pop edi
// 0073e69a  5e                   pop esi
// 0073e69b  5b                   pop ebx
// 0073e69c  c20400               ret 4
// library templates-boost-1_34_1/set_wp.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$weak_ptr@UT@@@boost@@U?$less@V?$weak_ptr@UT@@@boost@@@std@@V?$allocator@V?$weak_ptr@UT@@@boost@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$weak_ptr@UT@@@boost@@U?$less@V?$weak_ptr@UT@@@boost@@@std@@V?$allocator@V?$weak_ptr@UT@@@boost@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_wp.cpp
