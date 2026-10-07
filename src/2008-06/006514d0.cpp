// roc 2008-06 006514d0  unit: RBX::ScoreHud  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006514d0
//
// 006514d0  53                   push ebx
// 006514d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006514d5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 006514d8  56                   push esi
// 006514d9  57                   push edi
// 006514da  8bf1                 mov esi, ecx
// 006514dc  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006514df  83c004               add eax, 4
// 006514e2  8b00                 mov eax, dword ptr [eax]
// 006514e4  57                   push edi
// 006514e5  50                   push eax
// 006514e6  e835ffffff           call 0x651420
// 006514eb  894704               mov dword ptr [edi + 4], eax
// 006514ee  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 006514f1  8b5618               mov edx, dword ptr [esi + 0x18]
// 006514f4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 006514f7  8b4204               mov eax, dword ptr [edx + 4]
// 006514fa  80782d00             cmp byte ptr [eax + 0x2d], 0
// 006514fe  7537                 jne 0x651537
// 00651500  8b08                 mov ecx, dword ptr [eax]
// 00651502  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 00651506  750a                 jne 0x651512
// 00651508  8bc1                 mov eax, ecx
// 0065150a  8b08                 mov ecx, dword ptr [eax]
// 0065150c  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 00651510  74f6                 je 0x651508
// 00651512  8902                 mov dword ptr [edx], eax
// 00651514  8b7618               mov esi, dword ptr [esi + 0x18]
// 00651517  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065151a  8b4108               mov eax, dword ptr [ecx + 8]
// 0065151d  80782d00             cmp byte ptr [eax + 0x2d], 0
// 00651521  750b                 jne 0x65152e
// 00651523  8bc8                 mov ecx, eax
// 00651525  8b4108               mov eax, dword ptr [ecx + 8]
// 00651528  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0065152c  74f5                 je 0x651523
// 0065152e  5f                   pop edi
// 0065152f  894e08               mov dword ptr [esi + 8], ecx
// 00651532  5e                   pop esi
// 00651533  5b                   pop ebx
// 00651534  c20400               ret 4
// 00651537  8912                 mov dword ptr [edx], edx
// 00651539  8b7618               mov esi, dword ptr [esi + 0x18]
// 0065153c  5f                   pop edi
// 0065153d  897608               mov dword ptr [esi + 8], esi
// 00651540  5e                   pop esi
// 00651541  5b                   pop ebx
// 00651542  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
