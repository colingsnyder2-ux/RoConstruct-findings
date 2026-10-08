// roc 2012-06 006baf60  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006baf60
//
// 006baf60  53                   push ebx
// 006baf61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006baf65  8b4304               mov eax, dword ptr [ebx + 4]
// 006baf68  56                   push esi
// 006baf69  57                   push edi
// 006baf6a  8bf1                 mov esi, ecx
// 006baf6c  8b7e04               mov edi, dword ptr [esi + 4]
// 006baf6f  83c004               add eax, 4
// 006baf72  8b00                 mov eax, dword ptr [eax]
// 006baf74  57                   push edi
// 006baf75  50                   push eax
// 006baf76  e835ffffff           call 0x6baeb0
// 006baf7b  894704               mov dword ptr [edi + 4], eax
// 006baf7e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006baf81  8b5604               mov edx, dword ptr [esi + 4]
// 006baf84  894e08               mov dword ptr [esi + 8], ecx
// 006baf87  8b4204               mov eax, dword ptr [edx + 4]
// 006baf8a  80784500             cmp byte ptr [eax + 0x45], 0
// 006baf8e  7537                 jne 0x6bafc7
// 006baf90  8b08                 mov ecx, dword ptr [eax]
// 006baf92  80794500             cmp byte ptr [ecx + 0x45], 0
// 006baf96  750a                 jne 0x6bafa2
// 006baf98  8bc1                 mov eax, ecx
// 006baf9a  8b08                 mov ecx, dword ptr [eax]
// 006baf9c  80794500             cmp byte ptr [ecx + 0x45], 0
// 006bafa0  74f6                 je 0x6baf98
// 006bafa2  8902                 mov dword ptr [edx], eax
// 006bafa4  8b7604               mov esi, dword ptr [esi + 4]
// 006bafa7  8b4e04               mov ecx, dword ptr [esi + 4]
// 006bafaa  8b4108               mov eax, dword ptr [ecx + 8]
// 006bafad  80784500             cmp byte ptr [eax + 0x45], 0
// 006bafb1  750b                 jne 0x6bafbe
// 006bafb3  8bc8                 mov ecx, eax
// 006bafb5  8b4108               mov eax, dword ptr [ecx + 8]
// 006bafb8  80784500             cmp byte ptr [eax + 0x45], 0
// 006bafbc  74f5                 je 0x6bafb3
// 006bafbe  5f                   pop edi
// 006bafbf  894e08               mov dword ptr [esi + 8], ecx
// 006bafc2  5e                   pop esi
// 006bafc3  5b                   pop ebx
// 006bafc4  c20400               ret 4
// 006bafc7  8912                 mov dword ptr [edx], edx
// 006bafc9  8b7604               mov esi, dword ptr [esi + 4]
// 006bafcc  5f                   pop edi
// 006bafcd  897608               mov dword ptr [esi + 8], esi
// 006bafd0  5e                   pop esi
// 006bafd1  5b                   pop ebx
// 006bafd2  c20400               ret 4
// library ogre-1.7.0/OgreMesh.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMesh.cpp
