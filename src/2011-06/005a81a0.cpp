// roc 2011-06 005a81a0  unit: RBX::VFriendService::?$FactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a81a0
//
// 005a81a0  53                   push ebx
// 005a81a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005a81a5  8b4304               mov eax, dword ptr [ebx + 4]
// 005a81a8  56                   push esi
// 005a81a9  57                   push edi
// 005a81aa  8bf1                 mov esi, ecx
// 005a81ac  8b7e04               mov edi, dword ptr [esi + 4]
// 005a81af  83c004               add eax, 4
// 005a81b2  8b00                 mov eax, dword ptr [eax]
// 005a81b4  57                   push edi
// 005a81b5  50                   push eax
// 005a81b6  e8e5faffff           call 0x5a7ca0
// 005a81bb  894704               mov dword ptr [edi + 4], eax
// 005a81be  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005a81c1  8b5604               mov edx, dword ptr [esi + 4]
// 005a81c4  894e08               mov dword ptr [esi + 8], ecx
// 005a81c7  8b4204               mov eax, dword ptr [edx + 4]
// 005a81ca  80781500             cmp byte ptr [eax + 0x15], 0
// 005a81ce  7537                 jne 0x5a8207
// 005a81d0  8b08                 mov ecx, dword ptr [eax]
// 005a81d2  80791500             cmp byte ptr [ecx + 0x15], 0
// 005a81d6  750a                 jne 0x5a81e2
// 005a81d8  8bc1                 mov eax, ecx
// 005a81da  8b08                 mov ecx, dword ptr [eax]
// 005a81dc  80791500             cmp byte ptr [ecx + 0x15], 0
// 005a81e0  74f6                 je 0x5a81d8
// 005a81e2  8902                 mov dword ptr [edx], eax
// 005a81e4  8b7604               mov esi, dword ptr [esi + 4]
// 005a81e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a81ea  8b4108               mov eax, dword ptr [ecx + 8]
// 005a81ed  80781500             cmp byte ptr [eax + 0x15], 0
// 005a81f1  750b                 jne 0x5a81fe
// 005a81f3  8bc8                 mov ecx, eax
// 005a81f5  8b4108               mov eax, dword ptr [ecx + 8]
// 005a81f8  80781500             cmp byte ptr [eax + 0x15], 0
// 005a81fc  74f5                 je 0x5a81f3
// 005a81fe  5f                   pop edi
// 005a81ff  894e08               mov dword ptr [esi + 8], ecx
// 005a8202  5e                   pop esi
// 005a8203  5b                   pop ebx
// 005a8204  c20400               ret 4
// 005a8207  8912                 mov dword ptr [edx], edx
// 005a8209  8b7604               mov esi, dword ptr [esi + 4]
// 005a820c  5f                   pop edi
// 005a820d  897608               mov dword ptr [esi + 8], esi
// 005a8210  5e                   pop esi
// 005a8211  5b                   pop ebx
// 005a8212  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
