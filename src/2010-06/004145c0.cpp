// roc 2010-06 004145c0  unit: CopyVerb  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004145c0
//
// 004145c0  53                   push ebx
// 004145c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004145c5  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004145c9  55                   push ebp
// 004145ca  56                   push esi
// 004145cb  8be9                 mov ebp, ecx
// 004145cd  8bf3                 mov esi, ebx
// 004145cf  7551                 jne 0x414622
// 004145d1  57                   push edi
// 004145d2  8b4608               mov eax, dword ptr [esi + 8]
// 004145d5  50                   push eax
// 004145d6  8bcd                 mov ecx, ebp
// 004145d8  e8e3ffffff           call 0x4145c0
// 004145dd  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 004145e0  8b36                 mov esi, dword ptr [esi]
// 004145e2  85ff                 test edi, edi
// 004145e4  742a                 je 0x414610
// 004145e6  8d4f04               lea ecx, [edi + 4]
// 004145e9  83caff               or edx, 0xffffffff
// 004145ec  f00fc111             lock xadd dword ptr [ecx], edx
// 004145f0  751e                 jne 0x414610
// 004145f2  8b07                 mov eax, dword ptr [edi]
// 004145f4  8b5004               mov edx, dword ptr [eax + 4]
// 004145f7  8bcf                 mov ecx, edi
// 004145f9  ffd2                 call edx
// 004145fb  8d4708               lea eax, [edi + 8]
// 004145fe  83c9ff               or ecx, 0xffffffff
// 00414601  f00fc108             lock xadd dword ptr [eax], ecx
// 00414605  7509                 jne 0x414610
// 00414607  8b17                 mov edx, dword ptr [edi]
// 00414609  8b4208               mov eax, dword ptr [edx + 8]
// 0041460c  8bcf                 mov ecx, edi
// 0041460e  ffd0                 call eax
// 00414610  53                   push ebx
// 00414611  e884333900           call 0x7a799a
// 00414616  83c404               add esp, 4
// 00414619  807e1900             cmp byte ptr [esi + 0x19], 0
// 0041461d  8bde                 mov ebx, esi
// 0041461f  74b1                 je 0x4145d2
// 00414621  5f                   pop edi
// 00414622  5e                   pop esi
// 00414623  5d                   pop ebp
// 00414624  5b                   pop ebx
// 00414625  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
