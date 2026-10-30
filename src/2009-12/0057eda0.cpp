// roc 2009-12 0057eda0  unit: Ogre::RbxSceneUpdater  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0057eda0
//
// 0057eda0  83ec14               sub esp, 0x14
// 0057eda3  53                   push ebx
// 0057eda4  55                   push ebp
// 0057eda5  56                   push esi
// 0057eda6  8bd9                 mov ebx, ecx
// 0057eda8  57                   push edi
// 0057eda9  8d7b08               lea edi, [ebx + 8]
// 0057edac  8d642400             lea esp, [esp]
// 0057edb0  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0057edb3  2b4b30               sub ecx, dword ptr [ebx + 0x30]
// 0057edb6  8b4714               mov eax, dword ptr [edi + 0x14]
// 0057edb9  8b28                 mov ebp, dword ptr [eax]
// 0057edbb  8b37                 mov esi, dword ptr [edi]
// 0057edbd  c1f903               sar ecx, 3
// 0057edc0  85c9                 test ecx, ecx
// 0057edc2  7706                 ja 0x57edca
// 0057edc4  ff1560b79800         call dword ptr [0x98b760]
// 0057edca  8b5330               mov edx, dword ptr [ebx + 0x30]
// 0057edcd  8b4204               mov eax, dword ptr [edx + 4]
// 0057edd0  89442414             mov dword ptr [esp + 0x14], eax
// 0057edd4  85ff                 test edi, edi
// 0057edd6  7506                 jne 0x57edde
// 0057edd8  ff1560b79800         call dword ptr [0x98b760]
// 0057edde  8b07                 mov eax, dword ptr [edi]
// 0057ede0  85f6                 test esi, esi
// 0057ede2  7404                 je 0x57ede8
// 0057ede4  3bf0                 cmp esi, eax
// 0057ede6  7406                 je 0x57edee
// 0057ede8  ff1560b79800         call dword ptr [0x98b760]
// 0057edee  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0057edf2  742f                 je 0x57ee23
// 0057edf4  85f6                 test esi, esi
// 0057edf6  7527                 jne 0x57ee1f
// 0057edf8  ff1560b79800         call dword ptr [0x98b760]
// 0057edfe  33c0                 xor eax, eax
// 0057ee00  3b6814               cmp ebp, dword ptr [eax + 0x14]
// 0057ee03  7506                 jne 0x57ee0b
// 0057ee05  ff1560b79800         call dword ptr [0x98b760]
// 0057ee0b  55                   push ebp
// 0057ee0c  56                   push esi
// 0057ee0d  83c508               add ebp, 8
// 0057ee10  55                   push ebp
// 0057ee11  8d4c2424             lea ecx, [esp + 0x24]
// 0057ee15  51                   push ecx
// 0057ee16  8bcb                 mov ecx, ebx
// 0057ee18  e863fcffff           call 0x57ea80
// 0057ee1d  eb91                 jmp 0x57edb0
// 0057ee1f  8b06                 mov eax, dword ptr [esi]
// 0057ee21  ebdd                 jmp 0x57ee00
// 0057ee23  5f                   pop edi
// 0057ee24  5e                   pop esi
// 0057ee25  5d                   pop ebp
// 0057ee26  5b                   pop ebx
// 0057ee27  83c414               add esp, 0x14
// 0057ee2a  c3                   ret 
// copied from an identical function in another client (function ?_Reinsert@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@IAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreMesh.cpp