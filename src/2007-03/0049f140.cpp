// roc 2007-03 0049f140  unit: seg_00490000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049f140
//
// 0049f140  53                   push ebx
// 0049f141  56                   push esi
// 0049f142  57                   push edi
// 0049f143  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049f147  807f1500             cmp byte ptr [edi + 0x15], 0
// 0049f14b  8bd9                 mov ebx, ecx
// 0049f14d  8bf7                 mov esi, edi
// 0049f14f  7538                 jne 0x49f189
// 0049f151  8b4608               mov eax, dword ptr [esi + 8]
// 0049f154  50                   push eax
// 0049f155  8bcb                 mov ecx, ebx
// 0049f157  e8e4ffffff           call 0x49f140
// 0049f15c  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0049f15f  85c9                 test ecx, ecx
// 0049f161  8b36                 mov esi, dword ptr [esi]
// 0049f163  7413                 je 0x49f178
// 0049f165  8d5108               lea edx, [ecx + 8]
// 0049f168  83c8ff               or eax, 0xffffffff
// 0049f16b  f00fc102             lock xadd dword ptr [edx], eax
// 0049f16f  7507                 jne 0x49f178
// 0049f171  8b11                 mov edx, dword ptr [ecx]
// 0049f173  8b4208               mov eax, dword ptr [edx + 8]
// 0049f176  ffd0                 call eax
// 0049f178  57                   push edi
// 0049f179  e872ef1700           call 0x61e0f0
// 0049f17e  83c404               add esp, 4
// 0049f181  807e1500             cmp byte ptr [esi + 0x15], 0
// 0049f185  8bfe                 mov edi, esi
// 0049f187  74c8                 je 0x49f151
// 0049f189  5f                   pop edi
// 0049f18a  5e                   pop esi
// 0049f18b  5b                   pop ebx
// 0049f18c  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VInstance@RBX@@@boost@@U?$less@V?$weak_ptr@VInstance@RBX@@@boost@@@std@@V?$allocator@V?$weak_ptr@VInstance@RBX@@@boost@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$weak_ptr@VInstance@RBX@@@boost@@U?$less@V?$weak_ptr@VInstance@RBX@@@boost@@@std@@V?$allocator@V?$weak_ptr@VInstance@RBX@@@boost@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
