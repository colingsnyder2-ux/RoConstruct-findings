// roc 2012-06 00419b00  unit: CopyVerb  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00419b00
//
// 00419b00  53                   push ebx
// 00419b01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00419b05  807b1900             cmp byte ptr [ebx + 0x19], 0
// 00419b09  55                   push ebp
// 00419b0a  56                   push esi
// 00419b0b  8be9                 mov ebp, ecx
// 00419b0d  8bf3                 mov esi, ebx
// 00419b0f  7551                 jne 0x419b62
// 00419b11  57                   push edi
// 00419b12  8b4608               mov eax, dword ptr [esi + 8]
// 00419b15  50                   push eax
// 00419b16  8bcd                 mov ecx, ebp
// 00419b18  e8e3ffffff           call 0x419b00
// 00419b1d  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00419b20  8b36                 mov esi, dword ptr [esi]
// 00419b22  85ff                 test edi, edi
// 00419b24  742a                 je 0x419b50
// 00419b26  8d4f04               lea ecx, [edi + 4]
// 00419b29  83caff               or edx, 0xffffffff
// 00419b2c  f00fc111             lock xadd dword ptr [ecx], edx
// 00419b30  751e                 jne 0x419b50
// 00419b32  8b07                 mov eax, dword ptr [edi]
// 00419b34  8b5004               mov edx, dword ptr [eax + 4]
// 00419b37  8bcf                 mov ecx, edi
// 00419b39  ffd2                 call edx
// 00419b3b  8d4708               lea eax, [edi + 8]
// 00419b3e  83c9ff               or ecx, 0xffffffff
// 00419b41  f00fc108             lock xadd dword ptr [eax], ecx
// 00419b45  7509                 jne 0x419b50
// 00419b47  8b17                 mov edx, dword ptr [edi]
// 00419b49  8b4208               mov eax, dword ptr [edx + 8]
// 00419b4c  8bcf                 mov ecx, edi
// 00419b4e  ffd0                 call eax
// 00419b50  53                   push ebx
// 00419b51  e8be855600           call 0x982114
// 00419b56  83c404               add esp, 4
// 00419b59  807e1900             cmp byte ptr [esi + 0x19], 0
// 00419b5d  8bde                 mov ebx, esi
// 00419b5f  74b1                 je 0x419b12
// 00419b61  5f                   pop edi
// 00419b62  5e                   pop esi
// 00419b63  5d                   pop ebp
// 00419b64  5b                   pop ebx
// 00419b65  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
