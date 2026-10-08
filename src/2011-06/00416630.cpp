// roc 2011-06 00416630  unit: CopyVerb  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00416630
//
// 00416630  53                   push ebx
// 00416631  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00416635  807b1900             cmp byte ptr [ebx + 0x19], 0
// 00416639  55                   push ebp
// 0041663a  56                   push esi
// 0041663b  8be9                 mov ebp, ecx
// 0041663d  8bf3                 mov esi, ebx
// 0041663f  7551                 jne 0x416692
// 00416641  57                   push edi
// 00416642  8b4608               mov eax, dword ptr [esi + 8]
// 00416645  50                   push eax
// 00416646  8bcd                 mov ecx, ebp
// 00416648  e8e3ffffff           call 0x416630
// 0041664d  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00416650  8b36                 mov esi, dword ptr [esi]
// 00416652  85ff                 test edi, edi
// 00416654  742a                 je 0x416680
// 00416656  8d4f04               lea ecx, [edi + 4]
// 00416659  83caff               or edx, 0xffffffff
// 0041665c  f00fc111             lock xadd dword ptr [ecx], edx
// 00416660  751e                 jne 0x416680
// 00416662  8b07                 mov eax, dword ptr [edi]
// 00416664  8b5004               mov edx, dword ptr [eax + 4]
// 00416667  8bcf                 mov ecx, edi
// 00416669  ffd2                 call edx
// 0041666b  8d4708               lea eax, [edi + 8]
// 0041666e  83c9ff               or ecx, 0xffffffff
// 00416671  f00fc108             lock xadd dword ptr [eax], ecx
// 00416675  7509                 jne 0x416680
// 00416677  8b17                 mov edx, dword ptr [edi]
// 00416679  8b4208               mov eax, dword ptr [edx + 8]
// 0041667c  8bcf                 mov ecx, edi
// 0041667e  ffd0                 call eax
// 00416680  53                   push ebx
// 00416681  e8d2393f00           call 0x80a058
// 00416686  83c404               add esp, 4
// 00416689  807e1900             cmp byte ptr [esi + 0x19], 0
// 0041668d  8bde                 mov ebx, esi
// 0041668f  74b1                 je 0x416642
// 00416691  5f                   pop edi
// 00416692  5e                   pop esi
// 00416693  5d                   pop ebp
// 00416694  5b                   pop ebx
// 00416695  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
