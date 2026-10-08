// from server: 100% by auto
// roc 2009-06 00478250  unit: Ogre::RbxMeshLoader  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00478250
//
// 00478250  53                   push ebx
// 00478251  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00478255  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00478258  56                   push esi
// 00478259  57                   push edi
// 0047825a  8bf1                 mov esi, ecx
// 0047825c  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0047825f  83c004               add eax, 4
// 00478262  8b00                 mov eax, dword ptr [eax]
// 00478264  57                   push edi
// 00478265  50                   push eax
// 00478266  e885f8ffff           call 0x477af0
// 0047826b  894704               mov dword ptr [edi + 4], eax
// 0047826e  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00478271  8b5618               mov edx, dword ptr [esi + 0x18]
// 00478274  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00478277  8b4204               mov eax, dword ptr [edx + 4]
// 0047827a  80782900             cmp byte ptr [eax + 0x29], 0
// 0047827e  7537                 jne 0x4782b7
// 00478280  8b08                 mov ecx, dword ptr [eax]
// 00478282  80792900             cmp byte ptr [ecx + 0x29], 0
// 00478286  750a                 jne 0x478292
// 00478288  8bc1                 mov eax, ecx
// 0047828a  8b08                 mov ecx, dword ptr [eax]
// 0047828c  80792900             cmp byte ptr [ecx + 0x29], 0
// 00478290  74f6                 je 0x478288
// 00478292  8902                 mov dword ptr [edx], eax
// 00478294  8b7618               mov esi, dword ptr [esi + 0x18]
// 00478297  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047829a  8b4108               mov eax, dword ptr [ecx + 8]
// 0047829d  80782900             cmp byte ptr [eax + 0x29], 0
// 004782a1  750b                 jne 0x4782ae
// 004782a3  8bc8                 mov ecx, eax
// 004782a5  8b4108               mov eax, dword ptr [ecx + 8]
// 004782a8  80782900             cmp byte ptr [eax + 0x29], 0
// 004782ac  74f5                 je 0x4782a3
// 004782ae  5f                   pop edi
// 004782af  894e08               mov dword ptr [esi + 8], ecx
// 004782b2  5e                   pop esi
// 004782b3  5b                   pop ebx
// 004782b4  c20400               ret 4
// 004782b7  8912                 mov dword ptr [edx], edx
// 004782b9  8b7618               mov esi, dword ptr [esi + 0x18]
// 004782bc  5f                   pop edi
// 004782bd  897608               mov dword ptr [esi + 8], esi
// 004782c0  5e                   pop esi
// 004782c1  5b                   pop ebx
// 004782c2  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
