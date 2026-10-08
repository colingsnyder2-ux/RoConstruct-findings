// roc 2009-12 004881b0  unit: Ogre::GfxClustererPart  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004881b0
//
// 004881b0  53                   push ebx
// 004881b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004881b5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 004881b8  56                   push esi
// 004881b9  57                   push edi
// 004881ba  8bf1                 mov esi, ecx
// 004881bc  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004881bf  83c004               add eax, 4
// 004881c2  8b00                 mov eax, dword ptr [eax]
// 004881c4  57                   push edi
// 004881c5  50                   push eax
// 004881c6  e895f7ffff           call 0x487960
// 004881cb  894704               mov dword ptr [edi + 4], eax
// 004881ce  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 004881d1  8b5618               mov edx, dword ptr [esi + 0x18]
// 004881d4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004881d7  8b4204               mov eax, dword ptr [edx + 4]
// 004881da  80782900             cmp byte ptr [eax + 0x29], 0
// 004881de  7537                 jne 0x488217
// 004881e0  8b08                 mov ecx, dword ptr [eax]
// 004881e2  80792900             cmp byte ptr [ecx + 0x29], 0
// 004881e6  750a                 jne 0x4881f2
// 004881e8  8bc1                 mov eax, ecx
// 004881ea  8b08                 mov ecx, dword ptr [eax]
// 004881ec  80792900             cmp byte ptr [ecx + 0x29], 0
// 004881f0  74f6                 je 0x4881e8
// 004881f2  8902                 mov dword ptr [edx], eax
// 004881f4  8b7618               mov esi, dword ptr [esi + 0x18]
// 004881f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004881fa  8b4108               mov eax, dword ptr [ecx + 8]
// 004881fd  80782900             cmp byte ptr [eax + 0x29], 0
// 00488201  750b                 jne 0x48820e
// 00488203  8bc8                 mov ecx, eax
// 00488205  8b4108               mov eax, dword ptr [ecx + 8]
// 00488208  80782900             cmp byte ptr [eax + 0x29], 0
// 0048820c  74f5                 je 0x488203
// 0048820e  5f                   pop edi
// 0048820f  894e08               mov dword ptr [esi + 8], ecx
// 00488212  5e                   pop esi
// 00488213  5b                   pop ebx
// 00488214  c20400               ret 4
// 00488217  8912                 mov dword ptr [edx], edx
// 00488219  8b7618               mov esi, dword ptr [esi + 0x18]
// 0048821c  5f                   pop edi
// 0048821d  897608               mov dword ptr [esi + 8], esi
// 00488220  5e                   pop esi
// 00488221  5b                   pop ebx
// 00488222  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
