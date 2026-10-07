// roc 2012-06 0069b740  unit: RBX::VFriendService::?$FactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0069b740
//
// 0069b740  53                   push ebx
// 0069b741  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0069b745  8b4304               mov eax, dword ptr [ebx + 4]
// 0069b748  56                   push esi
// 0069b749  57                   push edi
// 0069b74a  8bf1                 mov esi, ecx
// 0069b74c  8b7e04               mov edi, dword ptr [esi + 4]
// 0069b74f  83c004               add eax, 4
// 0069b752  8b00                 mov eax, dword ptr [eax]
// 0069b754  57                   push edi
// 0069b755  50                   push eax
// 0069b756  e855f9ffff           call 0x69b0b0
// 0069b75b  894704               mov dword ptr [edi + 4], eax
// 0069b75e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0069b761  8b5604               mov edx, dword ptr [esi + 4]
// 0069b764  894e08               mov dword ptr [esi + 8], ecx
// 0069b767  8b4204               mov eax, dword ptr [edx + 4]
// 0069b76a  80781500             cmp byte ptr [eax + 0x15], 0
// 0069b76e  7537                 jne 0x69b7a7
// 0069b770  8b08                 mov ecx, dword ptr [eax]
// 0069b772  80791500             cmp byte ptr [ecx + 0x15], 0
// 0069b776  750a                 jne 0x69b782
// 0069b778  8bc1                 mov eax, ecx
// 0069b77a  8b08                 mov ecx, dword ptr [eax]
// 0069b77c  80791500             cmp byte ptr [ecx + 0x15], 0
// 0069b780  74f6                 je 0x69b778
// 0069b782  8902                 mov dword ptr [edx], eax
// 0069b784  8b7604               mov esi, dword ptr [esi + 4]
// 0069b787  8b4e04               mov ecx, dword ptr [esi + 4]
// 0069b78a  8b4108               mov eax, dword ptr [ecx + 8]
// 0069b78d  80781500             cmp byte ptr [eax + 0x15], 0
// 0069b791  750b                 jne 0x69b79e
// 0069b793  8bc8                 mov ecx, eax
// 0069b795  8b4108               mov eax, dword ptr [ecx + 8]
// 0069b798  80781500             cmp byte ptr [eax + 0x15], 0
// 0069b79c  74f5                 je 0x69b793
// 0069b79e  5f                   pop edi
// 0069b79f  894e08               mov dword ptr [esi + 8], ecx
// 0069b7a2  5e                   pop esi
// 0069b7a3  5b                   pop ebx
// 0069b7a4  c20400               ret 4
// 0069b7a7  8912                 mov dword ptr [edx], edx
// 0069b7a9  8b7604               mov esi, dword ptr [esi + 4]
// 0069b7ac  5f                   pop edi
// 0069b7ad  897608               mov dword ptr [esi + 8], esi
// 0069b7b0  5e                   pop esi
// 0069b7b1  5b                   pop ebx
// 0069b7b2  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
