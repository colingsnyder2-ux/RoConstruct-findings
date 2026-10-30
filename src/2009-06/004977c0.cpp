// roc 2009-06 004977c0  unit: Ogre::TwoDManager  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004977c0
//
// 004977c0  83ec14               sub esp, 0x14
// 004977c3  53                   push ebx
// 004977c4  55                   push ebp
// 004977c5  56                   push esi
// 004977c6  8bd9                 mov ebx, ecx
// 004977c8  57                   push edi
// 004977c9  8d7b08               lea edi, [ebx + 8]
// 004977cc  8d642400             lea esp, [esp]
// 004977d0  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 004977d3  2b4b30               sub ecx, dword ptr [ebx + 0x30]
// 004977d6  8b4714               mov eax, dword ptr [edi + 0x14]
// 004977d9  8b28                 mov ebp, dword ptr [eax]
// 004977db  8b37                 mov esi, dword ptr [edi]
// 004977dd  c1f903               sar ecx, 3
// 004977e0  85c9                 test ecx, ecx
// 004977e2  7706                 ja 0x4977ea
// 004977e4  ff15ace98900         call dword ptr [0x89e9ac]
// 004977ea  8b5330               mov edx, dword ptr [ebx + 0x30]
// 004977ed  8b4204               mov eax, dword ptr [edx + 4]
// 004977f0  89442414             mov dword ptr [esp + 0x14], eax
// 004977f4  85ff                 test edi, edi
// 004977f6  7506                 jne 0x4977fe
// 004977f8  ff15ace98900         call dword ptr [0x89e9ac]
// 004977fe  8b07                 mov eax, dword ptr [edi]
// 00497800  85f6                 test esi, esi
// 00497802  7404                 je 0x497808
// 00497804  3bf0                 cmp esi, eax
// 00497806  7406                 je 0x49780e
// 00497808  ff15ace98900         call dword ptr [0x89e9ac]
// 0049780e  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00497812  742f                 je 0x497843
// 00497814  85f6                 test esi, esi
// 00497816  7527                 jne 0x49783f
// 00497818  ff15ace98900         call dword ptr [0x89e9ac]
// 0049781e  33c0                 xor eax, eax
// 00497820  3b6814               cmp ebp, dword ptr [eax + 0x14]
// 00497823  7506                 jne 0x49782b
// 00497825  ff15ace98900         call dword ptr [0x89e9ac]
// 0049782b  55                   push ebp
// 0049782c  56                   push esi
// 0049782d  83c508               add ebp, 8
// 00497830  55                   push ebp
// 00497831  8d4c2424             lea ecx, [esp + 0x24]
// 00497835  51                   push ecx
// 00497836  8bcb                 mov ecx, ebx
// 00497838  e863fcffff           call 0x4974a0
// 0049783d  eb91                 jmp 0x4977d0
// 0049783f  8b06                 mov eax, dword ptr [esi]
// 00497841  ebdd                 jmp 0x497820
// 00497843  5f                   pop edi
// 00497844  5e                   pop esi
// 00497845  5d                   pop ebp
// 00497846  5b                   pop ebx
// 00497847  83c414               add esp, 0x14
// 0049784a  c3                   ret 
// copied from an identical function in another client (function ?_Reinsert@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@IAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreMesh.cpp