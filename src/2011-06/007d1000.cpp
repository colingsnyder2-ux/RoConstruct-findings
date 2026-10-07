// roc 2011-06 007d1000  unit: RBX::ScoreHud  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d1000
//
// 007d1000  53                   push ebx
// 007d1001  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007d1005  8b4304               mov eax, dword ptr [ebx + 4]
// 007d1008  56                   push esi
// 007d1009  57                   push edi
// 007d100a  8bf1                 mov esi, ecx
// 007d100c  8b7e04               mov edi, dword ptr [esi + 4]
// 007d100f  83c004               add eax, 4
// 007d1012  8b00                 mov eax, dword ptr [eax]
// 007d1014  57                   push edi
// 007d1015  50                   push eax
// 007d1016  e835ffffff           call 0x7d0f50
// 007d101b  894704               mov dword ptr [edi + 4], eax
// 007d101e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007d1021  8b5604               mov edx, dword ptr [esi + 4]
// 007d1024  894e08               mov dword ptr [esi + 8], ecx
// 007d1027  8b4204               mov eax, dword ptr [edx + 4]
// 007d102a  80782d00             cmp byte ptr [eax + 0x2d], 0
// 007d102e  7537                 jne 0x7d1067
// 007d1030  8b08                 mov ecx, dword ptr [eax]
// 007d1032  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 007d1036  750a                 jne 0x7d1042
// 007d1038  8bc1                 mov eax, ecx
// 007d103a  8b08                 mov ecx, dword ptr [eax]
// 007d103c  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 007d1040  74f6                 je 0x7d1038
// 007d1042  8902                 mov dword ptr [edx], eax
// 007d1044  8b7604               mov esi, dword ptr [esi + 4]
// 007d1047  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d104a  8b4108               mov eax, dword ptr [ecx + 8]
// 007d104d  80782d00             cmp byte ptr [eax + 0x2d], 0
// 007d1051  750b                 jne 0x7d105e
// 007d1053  8bc8                 mov ecx, eax
// 007d1055  8b4108               mov eax, dword ptr [ecx + 8]
// 007d1058  80782d00             cmp byte ptr [eax + 0x2d], 0
// 007d105c  74f5                 je 0x7d1053
// 007d105e  5f                   pop edi
// 007d105f  894e08               mov dword ptr [esi + 8], ecx
// 007d1062  5e                   pop esi
// 007d1063  5b                   pop ebx
// 007d1064  c20400               ret 4
// 007d1067  8912                 mov dword ptr [edx], edx
// 007d1069  8b7604               mov esi, dword ptr [esi + 4]
// 007d106c  5f                   pop edi
// 007d106d  897608               mov dword ptr [esi + 8], esi
// 007d1070  5e                   pop esi
// 007d1071  5b                   pop ebx
// 007d1072  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
