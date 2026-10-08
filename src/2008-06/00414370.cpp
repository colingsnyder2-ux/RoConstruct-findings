// roc 2008-06 00414370  unit: CopyVerb  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00414370
//
// 00414370  53                   push ebx
// 00414371  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00414375  807b1900             cmp byte ptr [ebx + 0x19], 0
// 00414379  55                   push ebp
// 0041437a  56                   push esi
// 0041437b  8be9                 mov ebp, ecx
// 0041437d  8bf3                 mov esi, ebx
// 0041437f  7551                 jne 0x4143d2
// 00414381  57                   push edi
// 00414382  8b4608               mov eax, dword ptr [esi + 8]
// 00414385  50                   push eax
// 00414386  8bcd                 mov ecx, ebp
// 00414388  e8e3ffffff           call 0x414370
// 0041438d  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00414390  8b36                 mov esi, dword ptr [esi]
// 00414392  85ff                 test edi, edi
// 00414394  742a                 je 0x4143c0
// 00414396  8d4f04               lea ecx, [edi + 4]
// 00414399  83caff               or edx, 0xffffffff
// 0041439c  f00fc111             lock xadd dword ptr [ecx], edx
// 004143a0  751e                 jne 0x4143c0
// 004143a2  8b07                 mov eax, dword ptr [edi]
// 004143a4  8b5004               mov edx, dword ptr [eax + 4]
// 004143a7  8bcf                 mov ecx, edi
// 004143a9  ffd2                 call edx
// 004143ab  8d4708               lea eax, [edi + 8]
// 004143ae  83c9ff               or ecx, 0xffffffff
// 004143b1  f00fc108             lock xadd dword ptr [eax], ecx
// 004143b5  7509                 jne 0x4143c0
// 004143b7  8b17                 mov edx, dword ptr [edi]
// 004143b9  8b4208               mov eax, dword ptr [edx + 8]
// 004143bc  8bcf                 mov ecx, edi
// 004143be  ffd0                 call eax
// 004143c0  53                   push ebx
// 004143c1  e8b4c22800           call 0x6a067a
// 004143c6  83c404               add esp, 4
// 004143c9  807e1900             cmp byte ptr [esi + 0x19], 0
// 004143cd  8bde                 mov ebx, esi
// 004143cf  74b1                 je 0x414382
// 004143d1  5f                   pop edi
// 004143d2  5e                   pop esi
// 004143d3  5d                   pop ebp
// 004143d4  5b                   pop ebx
// 004143d5  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
