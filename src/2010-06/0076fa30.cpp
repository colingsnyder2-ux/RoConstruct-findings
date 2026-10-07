// roc 2010-06 0076fa30  unit: RBX::ScoreHud  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076fa30
//
// 0076fa30  53                   push ebx
// 0076fa31  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0076fa35  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0076fa38  56                   push esi
// 0076fa39  57                   push edi
// 0076fa3a  8bf1                 mov esi, ecx
// 0076fa3c  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0076fa3f  83c004               add eax, 4
// 0076fa42  8b00                 mov eax, dword ptr [eax]
// 0076fa44  57                   push edi
// 0076fa45  50                   push eax
// 0076fa46  e835feffff           call 0x76f880
// 0076fa4b  894704               mov dword ptr [edi + 4], eax
// 0076fa4e  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0076fa51  8b5618               mov edx, dword ptr [esi + 0x18]
// 0076fa54  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0076fa57  8b4204               mov eax, dword ptr [edx + 4]
// 0076fa5a  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0076fa5e  7537                 jne 0x76fa97
// 0076fa60  8b08                 mov ecx, dword ptr [eax]
// 0076fa62  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 0076fa66  750a                 jne 0x76fa72
// 0076fa68  8bc1                 mov eax, ecx
// 0076fa6a  8b08                 mov ecx, dword ptr [eax]
// 0076fa6c  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 0076fa70  74f6                 je 0x76fa68
// 0076fa72  8902                 mov dword ptr [edx], eax
// 0076fa74  8b7618               mov esi, dword ptr [esi + 0x18]
// 0076fa77  8b4e04               mov ecx, dword ptr [esi + 4]
// 0076fa7a  8b4108               mov eax, dword ptr [ecx + 8]
// 0076fa7d  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0076fa81  750b                 jne 0x76fa8e
// 0076fa83  8bc8                 mov ecx, eax
// 0076fa85  8b4108               mov eax, dword ptr [ecx + 8]
// 0076fa88  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0076fa8c  74f5                 je 0x76fa83
// 0076fa8e  5f                   pop edi
// 0076fa8f  894e08               mov dword ptr [esi + 8], ecx
// 0076fa92  5e                   pop esi
// 0076fa93  5b                   pop ebx
// 0076fa94  c20400               ret 4
// 0076fa97  8912                 mov dword ptr [edx], edx
// 0076fa99  8b7618               mov esi, dword ptr [esi + 0x18]
// 0076fa9c  5f                   pop edi
// 0076fa9d  897608               mov dword ptr [esi + 8], esi
// 0076faa0  5e                   pop esi
// 0076faa1  5b                   pop ebx
// 0076faa2  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
