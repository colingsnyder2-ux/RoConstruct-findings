// roc 2007-08 00410130  unit: CopyVerb  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00410130
//
// 00410130  53                   push ebx
// 00410131  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00410135  807b1900             cmp byte ptr [ebx + 0x19], 0
// 00410139  55                   push ebp
// 0041013a  56                   push esi
// 0041013b  8be9                 mov ebp, ecx
// 0041013d  8bf3                 mov esi, ebx
// 0041013f  7551                 jne 0x410192
// 00410141  57                   push edi
// 00410142  8b4608               mov eax, dword ptr [esi + 8]
// 00410145  50                   push eax
// 00410146  8bcd                 mov ecx, ebp
// 00410148  e8e3ffffff           call 0x410130
// 0041014d  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00410150  85ff                 test edi, edi
// 00410152  8b36                 mov esi, dword ptr [esi]
// 00410154  742a                 je 0x410180
// 00410156  8d4f04               lea ecx, [edi + 4]
// 00410159  83caff               or edx, 0xffffffff
// 0041015c  f00fc111             lock xadd dword ptr [ecx], edx
// 00410160  751e                 jne 0x410180
// 00410162  8b07                 mov eax, dword ptr [edi]
// 00410164  8b5004               mov edx, dword ptr [eax + 4]
// 00410167  8bcf                 mov ecx, edi
// 00410169  ffd2                 call edx
// 0041016b  8d4708               lea eax, [edi + 8]
// 0041016e  83c9ff               or ecx, 0xffffffff
// 00410171  f00fc108             lock xadd dword ptr [eax], ecx
// 00410175  7509                 jne 0x410180
// 00410177  8b17                 mov edx, dword ptr [edi]
// 00410179  8b4208               mov eax, dword ptr [edx + 8]
// 0041017c  8bcf                 mov ecx, edi
// 0041017e  ffd0                 call eax
// 00410180  53                   push ebx
// 00410181  e8dcfa2100           call 0x62fc62
// 00410186  83c404               add esp, 4
// 00410189  807e1900             cmp byte ptr [esi + 0x19], 0
// 0041018d  8bde                 mov ebx, esi
// 0041018f  74b1                 je 0x410142
// 00410191  5f                   pop edi
// 00410192  5e                   pop esi
// 00410193  5d                   pop ebp
// 00410194  5b                   pop ebx
// 00410195  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
