// roc 2009-12 0057f810  unit: Ogre::RbxSceneUpdater  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0057f810
//
// 0057f810  83ec14               sub esp, 0x14
// 0057f813  53                   push ebx
// 0057f814  55                   push ebp
// 0057f815  56                   push esi
// 0057f816  8bd9                 mov ebx, ecx
// 0057f818  57                   push edi
// 0057f819  8d7b08               lea edi, [ebx + 8]
// 0057f81c  8d642400             lea esp, [esp]
// 0057f820  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0057f823  2b4b30               sub ecx, dword ptr [ebx + 0x30]
// 0057f826  8b4714               mov eax, dword ptr [edi + 0x14]
// 0057f829  8b28                 mov ebp, dword ptr [eax]
// 0057f82b  8b37                 mov esi, dword ptr [edi]
// 0057f82d  c1f903               sar ecx, 3
// 0057f830  85c9                 test ecx, ecx
// 0057f832  7706                 ja 0x57f83a
// 0057f834  ff1560b79800         call dword ptr [0x98b760]
// 0057f83a  8b5330               mov edx, dword ptr [ebx + 0x30]
// 0057f83d  8b4204               mov eax, dword ptr [edx + 4]
// 0057f840  89442414             mov dword ptr [esp + 0x14], eax
// 0057f844  85ff                 test edi, edi
// 0057f846  7506                 jne 0x57f84e
// 0057f848  ff1560b79800         call dword ptr [0x98b760]
// 0057f84e  8b07                 mov eax, dword ptr [edi]
// 0057f850  85f6                 test esi, esi
// 0057f852  7404                 je 0x57f858
// 0057f854  3bf0                 cmp esi, eax
// 0057f856  7406                 je 0x57f85e
// 0057f858  ff1560b79800         call dword ptr [0x98b760]
// 0057f85e  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0057f862  742f                 je 0x57f893
// 0057f864  85f6                 test esi, esi
// 0057f866  7527                 jne 0x57f88f
// 0057f868  ff1560b79800         call dword ptr [0x98b760]
// 0057f86e  33c0                 xor eax, eax
// 0057f870  3b6814               cmp ebp, dword ptr [eax + 0x14]
// 0057f873  7506                 jne 0x57f87b
// 0057f875  ff1560b79800         call dword ptr [0x98b760]
// 0057f87b  55                   push ebp
// 0057f87c  56                   push esi
// 0057f87d  83c508               add ebp, 8
// 0057f880  55                   push ebp
// 0057f881  8d4c2424             lea ecx, [esp + 0x24]
// 0057f885  51                   push ecx
// 0057f886  8bcb                 mov ecx, ebx
// 0057f888  e873faffff           call 0x57f300
// 0057f88d  eb91                 jmp 0x57f820
// 0057f88f  8b06                 mov eax, dword ptr [esi]
// 0057f891  ebdd                 jmp 0x57f870
// 0057f893  5f                   pop edi
// 0057f894  5e                   pop esi
// 0057f895  5d                   pop ebp
// 0057f896  5b                   pop ebx
// 0057f897  83c414               add esp, 0x14
// 0057f89a  c3                   ret 
// copied from an identical function in another client (function ?_Reinsert@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@IAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreMesh.cpp