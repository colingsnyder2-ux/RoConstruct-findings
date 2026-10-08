// from server: 100% by auto
// roc 2012-06 005468a0  unit: rbx::signals::Z::$$A6AX_NH::?$signal::Vslot::?$callable  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005468a0
//
// 005468a0  53                   push ebx
// 005468a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005468a5  8b4304               mov eax, dword ptr [ebx + 4]
// 005468a8  56                   push esi
// 005468a9  57                   push edi
// 005468aa  8bf1                 mov esi, ecx
// 005468ac  8b7e04               mov edi, dword ptr [esi + 4]
// 005468af  83c004               add eax, 4
// 005468b2  8b00                 mov eax, dword ptr [eax]
// 005468b4  57                   push edi
// 005468b5  50                   push eax
// 005468b6  e895f8ffff           call 0x546150
// 005468bb  894704               mov dword ptr [edi + 4], eax
// 005468be  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005468c1  8b5604               mov edx, dword ptr [esi + 4]
// 005468c4  894e08               mov dword ptr [esi + 8], ecx
// 005468c7  8b4204               mov eax, dword ptr [edx + 4]
// 005468ca  80782900             cmp byte ptr [eax + 0x29], 0
// 005468ce  7537                 jne 0x546907
// 005468d0  8b08                 mov ecx, dword ptr [eax]
// 005468d2  80792900             cmp byte ptr [ecx + 0x29], 0
// 005468d6  750a                 jne 0x5468e2
// 005468d8  8bc1                 mov eax, ecx
// 005468da  8b08                 mov ecx, dword ptr [eax]
// 005468dc  80792900             cmp byte ptr [ecx + 0x29], 0
// 005468e0  74f6                 je 0x5468d8
// 005468e2  8902                 mov dword ptr [edx], eax
// 005468e4  8b7604               mov esi, dword ptr [esi + 4]
// 005468e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005468ea  8b4108               mov eax, dword ptr [ecx + 8]
// 005468ed  80782900             cmp byte ptr [eax + 0x29], 0
// 005468f1  750b                 jne 0x5468fe
// 005468f3  8bc8                 mov ecx, eax
// 005468f5  8b4108               mov eax, dword ptr [ecx + 8]
// 005468f8  80782900             cmp byte ptr [eax + 0x29], 0
// 005468fc  74f5                 je 0x5468f3
// 005468fe  5f                   pop edi
// 005468ff  894e08               mov dword ptr [esi + 8], ecx
// 00546902  5e                   pop esi
// 00546903  5b                   pop ebx
// 00546904  c20400               ret 4
// 00546907  8912                 mov dword ptr [edx], edx
// 00546909  8b7604               mov esi, dword ptr [esi + 4]
// 0054690c  5f                   pop edi
// 0054690d  897608               mov dword ptr [esi + 8], esi
// 00546910  5e                   pop esi
// 00546911  5b                   pop ebx
// 00546912  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
