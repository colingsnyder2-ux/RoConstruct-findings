// roc 2009-06 00414950  unit: CopyVerb  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00414950
//
// 00414950  53                   push ebx
// 00414951  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00414955  807b1900             cmp byte ptr [ebx + 0x19], 0
// 00414959  55                   push ebp
// 0041495a  56                   push esi
// 0041495b  8be9                 mov ebp, ecx
// 0041495d  8bf3                 mov esi, ebx
// 0041495f  7551                 jne 0x4149b2
// 00414961  57                   push edi
// 00414962  8b4608               mov eax, dword ptr [esi + 8]
// 00414965  50                   push eax
// 00414966  8bcd                 mov ecx, ebp
// 00414968  e8e3ffffff           call 0x414950
// 0041496d  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00414970  8b36                 mov esi, dword ptr [esi]
// 00414972  85ff                 test edi, edi
// 00414974  742a                 je 0x4149a0
// 00414976  8d4f04               lea ecx, [edi + 4]
// 00414979  83caff               or edx, 0xffffffff
// 0041497c  f00fc111             lock xadd dword ptr [ecx], edx
// 00414980  751e                 jne 0x4149a0
// 00414982  8b07                 mov eax, dword ptr [edi]
// 00414984  8b5004               mov edx, dword ptr [eax + 4]
// 00414987  8bcf                 mov ecx, edi
// 00414989  ffd2                 call edx
// 0041498b  8d4708               lea eax, [edi + 8]
// 0041498e  83c9ff               or ecx, 0xffffffff
// 00414991  f00fc108             lock xadd dword ptr [eax], ecx
// 00414995  7509                 jne 0x4149a0
// 00414997  8b17                 mov edx, dword ptr [edi]
// 00414999  8b4208               mov eax, dword ptr [edx + 8]
// 0041499c  8bcf                 mov ecx, edi
// 0041499e  ffd0                 call eax
// 004149a0  53                   push ebx
// 004149a1  e88c403000           call 0x718a32
// 004149a6  83c404               add esp, 4
// 004149a9  807e1900             cmp byte ptr [esi + 0x19], 0
// 004149ad  8bde                 mov ebx, esi
// 004149af  74b1                 je 0x414962
// 004149b1  5f                   pop edi
// 004149b2  5e                   pop esi
// 004149b3  5d                   pop ebp
// 004149b4  5b                   pop ebx
// 004149b5  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
