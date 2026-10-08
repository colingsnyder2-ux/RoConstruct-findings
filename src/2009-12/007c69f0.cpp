// roc 2009-12 007c69f0  unit: RBX::ScoreHud  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007c69f0
//
// 007c69f0  53                   push ebx
// 007c69f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007c69f5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 007c69f8  56                   push esi
// 007c69f9  57                   push edi
// 007c69fa  8bf1                 mov esi, ecx
// 007c69fc  8b7e18               mov edi, dword ptr [esi + 0x18]
// 007c69ff  83c004               add eax, 4
// 007c6a02  8b00                 mov eax, dword ptr [eax]
// 007c6a04  57                   push edi
// 007c6a05  50                   push eax
// 007c6a06  e835ffffff           call 0x7c6940
// 007c6a0b  894704               mov dword ptr [edi + 4], eax
// 007c6a0e  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 007c6a11  8b5618               mov edx, dword ptr [esi + 0x18]
// 007c6a14  894e1c               mov dword ptr [esi + 0x1c], ecx
// 007c6a17  8b4204               mov eax, dword ptr [edx + 4]
// 007c6a1a  80782d00             cmp byte ptr [eax + 0x2d], 0
// 007c6a1e  7537                 jne 0x7c6a57
// 007c6a20  8b08                 mov ecx, dword ptr [eax]
// 007c6a22  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 007c6a26  750a                 jne 0x7c6a32
// 007c6a28  8bc1                 mov eax, ecx
// 007c6a2a  8b08                 mov ecx, dword ptr [eax]
// 007c6a2c  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 007c6a30  74f6                 je 0x7c6a28
// 007c6a32  8902                 mov dword ptr [edx], eax
// 007c6a34  8b7618               mov esi, dword ptr [esi + 0x18]
// 007c6a37  8b4e04               mov ecx, dword ptr [esi + 4]
// 007c6a3a  8b4108               mov eax, dword ptr [ecx + 8]
// 007c6a3d  80782d00             cmp byte ptr [eax + 0x2d], 0
// 007c6a41  750b                 jne 0x7c6a4e
// 007c6a43  8bc8                 mov ecx, eax
// 007c6a45  8b4108               mov eax, dword ptr [ecx + 8]
// 007c6a48  80782d00             cmp byte ptr [eax + 0x2d], 0
// 007c6a4c  74f5                 je 0x7c6a43
// 007c6a4e  5f                   pop edi
// 007c6a4f  894e08               mov dword ptr [esi + 8], ecx
// 007c6a52  5e                   pop esi
// 007c6a53  5b                   pop ebx
// 007c6a54  c20400               ret 4
// 007c6a57  8912                 mov dword ptr [edx], edx
// 007c6a59  8b7618               mov esi, dword ptr [esi + 0x18]
// 007c6a5c  5f                   pop edi
// 007c6a5d  897608               mov dword ptr [esi + 8], esi
// 007c6a60  5e                   pop esi
// 007c6a61  5b                   pop ebx
// 007c6a62  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
