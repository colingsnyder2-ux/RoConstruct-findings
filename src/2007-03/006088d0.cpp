// roc 2007-03 006088d0  unit: seg_00600000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006088d0
//
// 006088d0  53                   push ebx
// 006088d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006088d5  8b4304               mov eax, dword ptr [ebx + 4]
// 006088d8  56                   push esi
// 006088d9  57                   push edi
// 006088da  8bf1                 mov esi, ecx
// 006088dc  8b7e04               mov edi, dword ptr [esi + 4]
// 006088df  83c004               add eax, 4
// 006088e2  8b00                 mov eax, dword ptr [eax]
// 006088e4  57                   push edi
// 006088e5  50                   push eax
// 006088e6  e865feffff           call 0x608750
// 006088eb  894704               mov dword ptr [edi + 4], eax
// 006088ee  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006088f1  8b5604               mov edx, dword ptr [esi + 4]
// 006088f4  894e08               mov dword ptr [esi + 8], ecx
// 006088f7  8b4204               mov eax, dword ptr [edx + 4]
// 006088fa  80782d00             cmp byte ptr [eax + 0x2d], 0
// 006088fe  7537                 jne 0x608937
// 00608900  8b08                 mov ecx, dword ptr [eax]
// 00608902  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 00608906  750a                 jne 0x608912
// 00608908  8bc1                 mov eax, ecx
// 0060890a  8b08                 mov ecx, dword ptr [eax]
// 0060890c  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 00608910  74f6                 je 0x608908
// 00608912  8902                 mov dword ptr [edx], eax
// 00608914  8b7604               mov esi, dword ptr [esi + 4]
// 00608917  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060891a  8b4108               mov eax, dword ptr [ecx + 8]
// 0060891d  80782d00             cmp byte ptr [eax + 0x2d], 0
// 00608921  750b                 jne 0x60892e
// 00608923  8bc8                 mov ecx, eax
// 00608925  8b4108               mov eax, dword ptr [ecx + 8]
// 00608928  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0060892c  74f5                 je 0x608923
// 0060892e  5f                   pop edi
// 0060892f  894e08               mov dword ptr [esi + 8], ecx
// 00608932  5e                   pop esi
// 00608933  5b                   pop ebx
// 00608934  c20400               ret 4
// 00608937  8912                 mov dword ptr [edx], edx
// 00608939  8b7604               mov esi, dword ptr [esi + 4]
// 0060893c  5f                   pop edi
// 0060893d  897608               mov dword ptr [esi + 8], esi
// 00608940  5e                   pop esi
// 00608941  5b                   pop ebx
// 00608942  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
