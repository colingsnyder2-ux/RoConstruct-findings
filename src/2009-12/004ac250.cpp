// roc 2009-12 004ac250  unit: Ogre::RbxSceneUpdater  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ac250
//
// 004ac250  83ec14               sub esp, 0x14
// 004ac253  53                   push ebx
// 004ac254  55                   push ebp
// 004ac255  56                   push esi
// 004ac256  8bd9                 mov ebx, ecx
// 004ac258  57                   push edi
// 004ac259  8d7b08               lea edi, [ebx + 8]
// 004ac25c  8d642400             lea esp, [esp]
// 004ac260  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 004ac263  2b4b30               sub ecx, dword ptr [ebx + 0x30]
// 004ac266  8b4714               mov eax, dword ptr [edi + 0x14]
// 004ac269  8b28                 mov ebp, dword ptr [eax]
// 004ac26b  8b37                 mov esi, dword ptr [edi]
// 004ac26d  c1f903               sar ecx, 3
// 004ac270  85c9                 test ecx, ecx
// 004ac272  7706                 ja 0x4ac27a
// 004ac274  ff1560b79800         call dword ptr [0x98b760]
// 004ac27a  8b5330               mov edx, dword ptr [ebx + 0x30]
// 004ac27d  8b4204               mov eax, dword ptr [edx + 4]
// 004ac280  89442414             mov dword ptr [esp + 0x14], eax
// 004ac284  85ff                 test edi, edi
// 004ac286  7506                 jne 0x4ac28e
// 004ac288  ff1560b79800         call dword ptr [0x98b760]
// 004ac28e  8b07                 mov eax, dword ptr [edi]
// 004ac290  85f6                 test esi, esi
// 004ac292  7404                 je 0x4ac298
// 004ac294  3bf0                 cmp esi, eax
// 004ac296  7406                 je 0x4ac29e
// 004ac298  ff1560b79800         call dword ptr [0x98b760]
// 004ac29e  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 004ac2a2  742f                 je 0x4ac2d3
// 004ac2a4  85f6                 test esi, esi
// 004ac2a6  7527                 jne 0x4ac2cf
// 004ac2a8  ff1560b79800         call dword ptr [0x98b760]
// 004ac2ae  33c0                 xor eax, eax
// 004ac2b0  3b6814               cmp ebp, dword ptr [eax + 0x14]
// 004ac2b3  7506                 jne 0x4ac2bb
// 004ac2b5  ff1560b79800         call dword ptr [0x98b760]
// 004ac2bb  55                   push ebp
// 004ac2bc  56                   push esi
// 004ac2bd  83c508               add ebp, 8
// 004ac2c0  55                   push ebp
// 004ac2c1  8d4c2424             lea ecx, [esp + 0x24]
// 004ac2c5  51                   push ecx
// 004ac2c6  8bcb                 mov ecx, ebx
// 004ac2c8  e863fcffff           call 0x4abf30
// 004ac2cd  eb91                 jmp 0x4ac260
// 004ac2cf  8b06                 mov eax, dword ptr [esi]
// 004ac2d1  ebdd                 jmp 0x4ac2b0
// 004ac2d3  5f                   pop edi
// 004ac2d4  5e                   pop esi
// 004ac2d5  5d                   pop ebp
// 004ac2d6  5b                   pop ebx
// 004ac2d7  83c414               add esp, 0x14
// 004ac2da  c3                   ret 
// copied from an identical function in another client (function ?_Reinsert@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@IAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreMesh.cpp