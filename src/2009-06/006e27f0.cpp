// roc 2009-06 006e27f0  unit: RBX::ScoreHud  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e27f0
//
// 006e27f0  53                   push ebx
// 006e27f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006e27f5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 006e27f8  56                   push esi
// 006e27f9  57                   push edi
// 006e27fa  8bf1                 mov esi, ecx
// 006e27fc  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006e27ff  83c004               add eax, 4
// 006e2802  8b00                 mov eax, dword ptr [eax]
// 006e2804  57                   push edi
// 006e2805  50                   push eax
// 006e2806  e8b5fdffff           call 0x6e25c0
// 006e280b  894704               mov dword ptr [edi + 4], eax
// 006e280e  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 006e2811  8b5618               mov edx, dword ptr [esi + 0x18]
// 006e2814  894e1c               mov dword ptr [esi + 0x1c], ecx
// 006e2817  8b4204               mov eax, dword ptr [edx + 4]
// 006e281a  80782d00             cmp byte ptr [eax + 0x2d], 0
// 006e281e  7537                 jne 0x6e2857
// 006e2820  8b08                 mov ecx, dword ptr [eax]
// 006e2822  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 006e2826  750a                 jne 0x6e2832
// 006e2828  8bc1                 mov eax, ecx
// 006e282a  8b08                 mov ecx, dword ptr [eax]
// 006e282c  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 006e2830  74f6                 je 0x6e2828
// 006e2832  8902                 mov dword ptr [edx], eax
// 006e2834  8b7618               mov esi, dword ptr [esi + 0x18]
// 006e2837  8b4e04               mov ecx, dword ptr [esi + 4]
// 006e283a  8b4108               mov eax, dword ptr [ecx + 8]
// 006e283d  80782d00             cmp byte ptr [eax + 0x2d], 0
// 006e2841  750b                 jne 0x6e284e
// 006e2843  8bc8                 mov ecx, eax
// 006e2845  8b4108               mov eax, dword ptr [ecx + 8]
// 006e2848  80782d00             cmp byte ptr [eax + 0x2d], 0
// 006e284c  74f5                 je 0x6e2843
// 006e284e  5f                   pop edi
// 006e284f  894e08               mov dword ptr [esi + 8], ecx
// 006e2852  5e                   pop esi
// 006e2853  5b                   pop ebx
// 006e2854  c20400               ret 4
// 006e2857  8912                 mov dword ptr [edx], edx
// 006e2859  8b7618               mov esi, dword ptr [esi + 0x18]
// 006e285c  5f                   pop edi
// 006e285d  897608               mov dword ptr [esi + 8], esi
// 006e2860  5e                   pop esi
// 006e2861  5b                   pop ebx
// 006e2862  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
