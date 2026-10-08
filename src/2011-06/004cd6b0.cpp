// from server: 100% by auto
// roc 2011-06 004cd6b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004cd6b0
//
// 004cd6b0  53                   push ebx
// 004cd6b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004cd6b5  8b4304               mov eax, dword ptr [ebx + 4]
// 004cd6b8  56                   push esi
// 004cd6b9  57                   push edi
// 004cd6ba  8bf1                 mov esi, ecx
// 004cd6bc  8b7e04               mov edi, dword ptr [esi + 4]
// 004cd6bf  83c004               add eax, 4
// 004cd6c2  8b00                 mov eax, dword ptr [eax]
// 004cd6c4  57                   push edi
// 004cd6c5  50                   push eax
// 004cd6c6  e8d5f4ffff           call 0x4ccba0
// 004cd6cb  894704               mov dword ptr [edi + 4], eax
// 004cd6ce  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004cd6d1  8b5604               mov edx, dword ptr [esi + 4]
// 004cd6d4  894e08               mov dword ptr [esi + 8], ecx
// 004cd6d7  8b4204               mov eax, dword ptr [edx + 4]
// 004cd6da  80782900             cmp byte ptr [eax + 0x29], 0
// 004cd6de  7537                 jne 0x4cd717
// 004cd6e0  8b08                 mov ecx, dword ptr [eax]
// 004cd6e2  80792900             cmp byte ptr [ecx + 0x29], 0
// 004cd6e6  750a                 jne 0x4cd6f2
// 004cd6e8  8bc1                 mov eax, ecx
// 004cd6ea  8b08                 mov ecx, dword ptr [eax]
// 004cd6ec  80792900             cmp byte ptr [ecx + 0x29], 0
// 004cd6f0  74f6                 je 0x4cd6e8
// 004cd6f2  8902                 mov dword ptr [edx], eax
// 004cd6f4  8b7604               mov esi, dword ptr [esi + 4]
// 004cd6f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd6fa  8b4108               mov eax, dword ptr [ecx + 8]
// 004cd6fd  80782900             cmp byte ptr [eax + 0x29], 0
// 004cd701  750b                 jne 0x4cd70e
// 004cd703  8bc8                 mov ecx, eax
// 004cd705  8b4108               mov eax, dword ptr [ecx + 8]
// 004cd708  80782900             cmp byte ptr [eax + 0x29], 0
// 004cd70c  74f5                 je 0x4cd703
// 004cd70e  5f                   pop edi
// 004cd70f  894e08               mov dword ptr [esi + 8], ecx
// 004cd712  5e                   pop esi
// 004cd713  5b                   pop ebx
// 004cd714  c20400               ret 4
// 004cd717  8912                 mov dword ptr [edx], edx
// 004cd719  8b7604               mov esi, dword ptr [esi + 4]
// 004cd71c  5f                   pop edi
// 004cd71d  897608               mov dword ptr [esi + 8], esi
// 004cd720  5e                   pop esi
// 004cd721  5b                   pop ebx
// 004cd722  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
