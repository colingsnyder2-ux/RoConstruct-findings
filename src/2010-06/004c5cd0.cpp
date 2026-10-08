// from server: 100% by auto
// roc 2010-06 004c5cd0  unit: RBX::VInstance::?$NonFactoryProduct  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c5cd0
//
// 004c5cd0  53                   push ebx
// 004c5cd1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004c5cd5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 004c5cd8  56                   push esi
// 004c5cd9  57                   push edi
// 004c5cda  8bf1                 mov esi, ecx
// 004c5cdc  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c5cdf  83c004               add eax, 4
// 004c5ce2  8b00                 mov eax, dword ptr [eax]
// 004c5ce4  57                   push edi
// 004c5ce5  50                   push eax
// 004c5ce6  e8d5f3ffff           call 0x4c50c0
// 004c5ceb  894704               mov dword ptr [edi + 4], eax
// 004c5cee  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 004c5cf1  8b5618               mov edx, dword ptr [esi + 0x18]
// 004c5cf4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004c5cf7  8b4204               mov eax, dword ptr [edx + 4]
// 004c5cfa  80782900             cmp byte ptr [eax + 0x29], 0
// 004c5cfe  7537                 jne 0x4c5d37
// 004c5d00  8b08                 mov ecx, dword ptr [eax]
// 004c5d02  80792900             cmp byte ptr [ecx + 0x29], 0
// 004c5d06  750a                 jne 0x4c5d12
// 004c5d08  8bc1                 mov eax, ecx
// 004c5d0a  8b08                 mov ecx, dword ptr [eax]
// 004c5d0c  80792900             cmp byte ptr [ecx + 0x29], 0
// 004c5d10  74f6                 je 0x4c5d08
// 004c5d12  8902                 mov dword ptr [edx], eax
// 004c5d14  8b7618               mov esi, dword ptr [esi + 0x18]
// 004c5d17  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c5d1a  8b4108               mov eax, dword ptr [ecx + 8]
// 004c5d1d  80782900             cmp byte ptr [eax + 0x29], 0
// 004c5d21  750b                 jne 0x4c5d2e
// 004c5d23  8bc8                 mov ecx, eax
// 004c5d25  8b4108               mov eax, dword ptr [ecx + 8]
// 004c5d28  80782900             cmp byte ptr [eax + 0x29], 0
// 004c5d2c  74f5                 je 0x4c5d23
// 004c5d2e  5f                   pop edi
// 004c5d2f  894e08               mov dword ptr [esi + 8], ecx
// 004c5d32  5e                   pop esi
// 004c5d33  5b                   pop ebx
// 004c5d34  c20400               ret 4
// 004c5d37  8912                 mov dword ptr [edx], edx
// 004c5d39  8b7618               mov esi, dword ptr [esi + 0x18]
// 004c5d3c  5f                   pop edi
// 004c5d3d  897608               mov dword ptr [esi + 8], esi
// 004c5d40  5e                   pop esi
// 004c5d41  5b                   pop ebx
// 004c5d42  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
