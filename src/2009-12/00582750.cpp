// roc 2009-12 00582750  unit: Ogre::RbxSceneUpdater  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00582750
//
// 00582750  83ec14               sub esp, 0x14
// 00582753  53                   push ebx
// 00582754  55                   push ebp
// 00582755  56                   push esi
// 00582756  8bd9                 mov ebx, ecx
// 00582758  57                   push edi
// 00582759  8d7b08               lea edi, [ebx + 8]
// 0058275c  8d642400             lea esp, [esp]
// 00582760  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00582763  2b4b30               sub ecx, dword ptr [ebx + 0x30]
// 00582766  8b4714               mov eax, dword ptr [edi + 0x14]
// 00582769  8b28                 mov ebp, dword ptr [eax]
// 0058276b  8b37                 mov esi, dword ptr [edi]
// 0058276d  c1f903               sar ecx, 3
// 00582770  85c9                 test ecx, ecx
// 00582772  7706                 ja 0x58277a
// 00582774  ff1560b79800         call dword ptr [0x98b760]
// 0058277a  8b5330               mov edx, dword ptr [ebx + 0x30]
// 0058277d  8b4204               mov eax, dword ptr [edx + 4]
// 00582780  89442414             mov dword ptr [esp + 0x14], eax
// 00582784  85ff                 test edi, edi
// 00582786  7506                 jne 0x58278e
// 00582788  ff1560b79800         call dword ptr [0x98b760]
// 0058278e  8b07                 mov eax, dword ptr [edi]
// 00582790  85f6                 test esi, esi
// 00582792  7404                 je 0x582798
// 00582794  3bf0                 cmp esi, eax
// 00582796  7406                 je 0x58279e
// 00582798  ff1560b79800         call dword ptr [0x98b760]
// 0058279e  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 005827a2  742f                 je 0x5827d3
// 005827a4  85f6                 test esi, esi
// 005827a6  7527                 jne 0x5827cf
// 005827a8  ff1560b79800         call dword ptr [0x98b760]
// 005827ae  33c0                 xor eax, eax
// 005827b0  3b6814               cmp ebp, dword ptr [eax + 0x14]
// 005827b3  7506                 jne 0x5827bb
// 005827b5  ff1560b79800         call dword ptr [0x98b760]
// 005827bb  55                   push ebp
// 005827bc  56                   push esi
// 005827bd  83c508               add ebp, 8
// 005827c0  55                   push ebp
// 005827c1  8d4c2424             lea ecx, [esp + 0x24]
// 005827c5  51                   push ecx
// 005827c6  8bcb                 mov ecx, ebx
// 005827c8  e863fcffff           call 0x582430
// 005827cd  eb91                 jmp 0x582760
// 005827cf  8b06                 mov eax, dword ptr [esi]
// 005827d1  ebdd                 jmp 0x5827b0
// 005827d3  5f                   pop edi
// 005827d4  5e                   pop esi
// 005827d5  5d                   pop ebp
// 005827d6  5b                   pop ebx
// 005827d7  83c414               add esp, 0x14
// 005827da  c3                   ret 
// copied from an identical function in another client (function ?_Reinsert@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@IAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreMesh.cpp