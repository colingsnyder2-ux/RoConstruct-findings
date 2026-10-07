// roc 2010-06 0071f170  unit: RBX::BoxSelectCommand  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071f170
//
// 0071f170  53                   push ebx
// 0071f171  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0071f175  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0071f178  56                   push esi
// 0071f179  57                   push edi
// 0071f17a  8bf1                 mov esi, ecx
// 0071f17c  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0071f17f  83c004               add eax, 4
// 0071f182  8b00                 mov eax, dword ptr [eax]
// 0071f184  57                   push edi
// 0071f185  50                   push eax
// 0071f186  e835ffffff           call 0x71f0c0
// 0071f18b  894704               mov dword ptr [edi + 4], eax
// 0071f18e  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0071f191  8b5618               mov edx, dword ptr [esi + 0x18]
// 0071f194  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0071f197  8b4204               mov eax, dword ptr [edx + 4]
// 0071f19a  80781500             cmp byte ptr [eax + 0x15], 0
// 0071f19e  7537                 jne 0x71f1d7
// 0071f1a0  8b08                 mov ecx, dword ptr [eax]
// 0071f1a2  80791500             cmp byte ptr [ecx + 0x15], 0
// 0071f1a6  750a                 jne 0x71f1b2
// 0071f1a8  8bc1                 mov eax, ecx
// 0071f1aa  8b08                 mov ecx, dword ptr [eax]
// 0071f1ac  80791500             cmp byte ptr [ecx + 0x15], 0
// 0071f1b0  74f6                 je 0x71f1a8
// 0071f1b2  8902                 mov dword ptr [edx], eax
// 0071f1b4  8b7618               mov esi, dword ptr [esi + 0x18]
// 0071f1b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0071f1ba  8b4108               mov eax, dword ptr [ecx + 8]
// 0071f1bd  80781500             cmp byte ptr [eax + 0x15], 0
// 0071f1c1  750b                 jne 0x71f1ce
// 0071f1c3  8bc8                 mov ecx, eax
// 0071f1c5  8b4108               mov eax, dword ptr [ecx + 8]
// 0071f1c8  80781500             cmp byte ptr [eax + 0x15], 0
// 0071f1cc  74f5                 je 0x71f1c3
// 0071f1ce  5f                   pop edi
// 0071f1cf  894e08               mov dword ptr [esi + 8], ecx
// 0071f1d2  5e                   pop esi
// 0071f1d3  5b                   pop ebx
// 0071f1d4  c20400               ret 4
// 0071f1d7  8912                 mov dword ptr [edx], edx
// 0071f1d9  8b7618               mov esi, dword ptr [esi + 0x18]
// 0071f1dc  5f                   pop edi
// 0071f1dd  897608               mov dword ptr [esi + 8], esi
// 0071f1e0  5e                   pop esi
// 0071f1e1  5b                   pop ebx
// 0071f1e2  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
