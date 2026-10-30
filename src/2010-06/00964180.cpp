// roc 2010-06 00964180  unit: Ogre::RbxSceneUpdater  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00964180
//
// 00964180  83ec14               sub esp, 0x14
// 00964183  53                   push ebx
// 00964184  55                   push ebp
// 00964185  56                   push esi
// 00964186  8bd9                 mov ebx, ecx
// 00964188  57                   push edi
// 00964189  8d7b08               lea edi, [ebx + 8]
// 0096418c  8d642400             lea esp, [esp]
// 00964190  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00964193  2b4b30               sub ecx, dword ptr [ebx + 0x30]
// 00964196  8b4714               mov eax, dword ptr [edi + 0x14]
// 00964199  8b28                 mov ebp, dword ptr [eax]
// 0096419b  8b37                 mov esi, dword ptr [edi]
// 0096419d  c1f903               sar ecx, 3
// 009641a0  85c9                 test ecx, ecx
// 009641a2  7706                 ja 0x9641aa
// 009641a4  ff150ca99e00         call dword ptr [0x9ea90c]
// 009641aa  8b5330               mov edx, dword ptr [ebx + 0x30]
// 009641ad  8b4204               mov eax, dword ptr [edx + 4]
// 009641b0  89442414             mov dword ptr [esp + 0x14], eax
// 009641b4  85ff                 test edi, edi
// 009641b6  7506                 jne 0x9641be
// 009641b8  ff150ca99e00         call dword ptr [0x9ea90c]
// 009641be  8b07                 mov eax, dword ptr [edi]
// 009641c0  85f6                 test esi, esi
// 009641c2  7404                 je 0x9641c8
// 009641c4  3bf0                 cmp esi, eax
// 009641c6  7406                 je 0x9641ce
// 009641c8  ff150ca99e00         call dword ptr [0x9ea90c]
// 009641ce  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 009641d2  742f                 je 0x964203
// 009641d4  85f6                 test esi, esi
// 009641d6  7527                 jne 0x9641ff
// 009641d8  ff150ca99e00         call dword ptr [0x9ea90c]
// 009641de  33c0                 xor eax, eax
// 009641e0  3b6814               cmp ebp, dword ptr [eax + 0x14]
// 009641e3  7506                 jne 0x9641eb
// 009641e5  ff150ca99e00         call dword ptr [0x9ea90c]
// 009641eb  55                   push ebp
// 009641ec  56                   push esi
// 009641ed  83c508               add ebp, 8
// 009641f0  55                   push ebp
// 009641f1  8d4c2424             lea ecx, [esp + 0x24]
// 009641f5  51                   push ecx
// 009641f6  8bcb                 mov ecx, ebx
// 009641f8  e873faffff           call 0x963c70
// 009641fd  eb91                 jmp 0x964190
// 009641ff  8b06                 mov eax, dword ptr [esi]
// 00964201  ebdd                 jmp 0x9641e0
// 00964203  5f                   pop edi
// 00964204  5e                   pop esi
// 00964205  5d                   pop ebp
// 00964206  5b                   pop ebx
// 00964207  83c414               add esp, 0x14
// 0096420a  c3                   ret 
// copied from an identical function in another client (function ?_Reinsert@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@IAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreMesh.cpp