// from server: 100% by auto
// roc 2007-08 0061e000  unit: RBX::ScoreHud  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061e000
//
// 0061e000  53                   push ebx
// 0061e001  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0061e005  8b4304               mov eax, dword ptr [ebx + 4]
// 0061e008  56                   push esi
// 0061e009  57                   push edi
// 0061e00a  8bf1                 mov esi, ecx
// 0061e00c  8b7e04               mov edi, dword ptr [esi + 4]
// 0061e00f  83c004               add eax, 4
// 0061e012  8b00                 mov eax, dword ptr [eax]
// 0061e014  57                   push edi
// 0061e015  50                   push eax
// 0061e016  e835ffffff           call 0x61df50
// 0061e01b  894704               mov dword ptr [edi + 4], eax
// 0061e01e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0061e021  8b5604               mov edx, dword ptr [esi + 4]
// 0061e024  894e08               mov dword ptr [esi + 8], ecx
// 0061e027  8b4204               mov eax, dword ptr [edx + 4]
// 0061e02a  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0061e02e  7537                 jne 0x61e067
// 0061e030  8b08                 mov ecx, dword ptr [eax]
// 0061e032  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 0061e036  750a                 jne 0x61e042
// 0061e038  8bc1                 mov eax, ecx
// 0061e03a  8b08                 mov ecx, dword ptr [eax]
// 0061e03c  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 0061e040  74f6                 je 0x61e038
// 0061e042  8902                 mov dword ptr [edx], eax
// 0061e044  8b7604               mov esi, dword ptr [esi + 4]
// 0061e047  8b4e04               mov ecx, dword ptr [esi + 4]
// 0061e04a  8b4108               mov eax, dword ptr [ecx + 8]
// 0061e04d  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0061e051  750b                 jne 0x61e05e
// 0061e053  8bc8                 mov ecx, eax
// 0061e055  8b4108               mov eax, dword ptr [ecx + 8]
// 0061e058  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0061e05c  74f5                 je 0x61e053
// 0061e05e  5f                   pop edi
// 0061e05f  894e08               mov dword ptr [esi + 8], ecx
// 0061e062  5e                   pop esi
// 0061e063  5b                   pop ebx
// 0061e064  c20400               ret 4
// 0061e067  8912                 mov dword ptr [edx], edx
// 0061e069  8b7604               mov esi, dword ptr [esi + 4]
// 0061e06c  5f                   pop edi
// 0061e06d  897608               mov dword ptr [esi + 8], esi
// 0061e070  5e                   pop esi
// 0061e071  5b                   pop ebx
// 0061e072  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
