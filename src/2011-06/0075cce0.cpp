// from server: 100% by auto
// roc 2011-06 0075cce0  unit: RBX::BoxSelectCommand  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0075cce0
//
// 0075cce0  53                   push ebx
// 0075cce1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0075cce5  8b4304               mov eax, dword ptr [ebx + 4]
// 0075cce8  56                   push esi
// 0075cce9  57                   push edi
// 0075ccea  8bf1                 mov esi, ecx
// 0075ccec  8b7e04               mov edi, dword ptr [esi + 4]
// 0075ccef  83c004               add eax, 4
// 0075ccf2  8b00                 mov eax, dword ptr [eax]
// 0075ccf4  57                   push edi
// 0075ccf5  50                   push eax
// 0075ccf6  e835ffffff           call 0x75cc30
// 0075ccfb  894704               mov dword ptr [edi + 4], eax
// 0075ccfe  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0075cd01  8b5604               mov edx, dword ptr [esi + 4]
// 0075cd04  894e08               mov dword ptr [esi + 8], ecx
// 0075cd07  8b4204               mov eax, dword ptr [edx + 4]
// 0075cd0a  80781500             cmp byte ptr [eax + 0x15], 0
// 0075cd0e  7537                 jne 0x75cd47
// 0075cd10  8b08                 mov ecx, dword ptr [eax]
// 0075cd12  80791500             cmp byte ptr [ecx + 0x15], 0
// 0075cd16  750a                 jne 0x75cd22
// 0075cd18  8bc1                 mov eax, ecx
// 0075cd1a  8b08                 mov ecx, dword ptr [eax]
// 0075cd1c  80791500             cmp byte ptr [ecx + 0x15], 0
// 0075cd20  74f6                 je 0x75cd18
// 0075cd22  8902                 mov dword ptr [edx], eax
// 0075cd24  8b7604               mov esi, dword ptr [esi + 4]
// 0075cd27  8b4e04               mov ecx, dword ptr [esi + 4]
// 0075cd2a  8b4108               mov eax, dword ptr [ecx + 8]
// 0075cd2d  80781500             cmp byte ptr [eax + 0x15], 0
// 0075cd31  750b                 jne 0x75cd3e
// 0075cd33  8bc8                 mov ecx, eax
// 0075cd35  8b4108               mov eax, dword ptr [ecx + 8]
// 0075cd38  80781500             cmp byte ptr [eax + 0x15], 0
// 0075cd3c  74f5                 je 0x75cd33
// 0075cd3e  5f                   pop edi
// 0075cd3f  894e08               mov dword ptr [esi + 8], ecx
// 0075cd42  5e                   pop esi
// 0075cd43  5b                   pop ebx
// 0075cd44  c20400               ret 4
// 0075cd47  8912                 mov dword ptr [edx], edx
// 0075cd49  8b7604               mov esi, dword ptr [esi + 4]
// 0075cd4c  5f                   pop edi
// 0075cd4d  897608               mov dword ptr [esi + 8], esi
// 0075cd50  5e                   pop esi
// 0075cd51  5b                   pop ebx
// 0075cd52  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
