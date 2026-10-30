// roc 2010-06 009636b0  unit: Ogre::RbxSceneUpdater  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009636b0
//
// 009636b0  83ec14               sub esp, 0x14
// 009636b3  53                   push ebx
// 009636b4  55                   push ebp
// 009636b5  56                   push esi
// 009636b6  8bd9                 mov ebx, ecx
// 009636b8  57                   push edi
// 009636b9  8d7b08               lea edi, [ebx + 8]
// 009636bc  8d642400             lea esp, [esp]
// 009636c0  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 009636c3  2b4b30               sub ecx, dword ptr [ebx + 0x30]
// 009636c6  8b4714               mov eax, dword ptr [edi + 0x14]
// 009636c9  8b28                 mov ebp, dword ptr [eax]
// 009636cb  8b37                 mov esi, dword ptr [edi]
// 009636cd  c1f903               sar ecx, 3
// 009636d0  85c9                 test ecx, ecx
// 009636d2  7706                 ja 0x9636da
// 009636d4  ff150ca99e00         call dword ptr [0x9ea90c]
// 009636da  8b5330               mov edx, dword ptr [ebx + 0x30]
// 009636dd  8b4204               mov eax, dword ptr [edx + 4]
// 009636e0  89442414             mov dword ptr [esp + 0x14], eax
// 009636e4  85ff                 test edi, edi
// 009636e6  7506                 jne 0x9636ee
// 009636e8  ff150ca99e00         call dword ptr [0x9ea90c]
// 009636ee  8b07                 mov eax, dword ptr [edi]
// 009636f0  85f6                 test esi, esi
// 009636f2  7404                 je 0x9636f8
// 009636f4  3bf0                 cmp esi, eax
// 009636f6  7406                 je 0x9636fe
// 009636f8  ff150ca99e00         call dword ptr [0x9ea90c]
// 009636fe  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00963702  742f                 je 0x963733
// 00963704  85f6                 test esi, esi
// 00963706  7527                 jne 0x96372f
// 00963708  ff150ca99e00         call dword ptr [0x9ea90c]
// 0096370e  33c0                 xor eax, eax
// 00963710  3b6814               cmp ebp, dword ptr [eax + 0x14]
// 00963713  7506                 jne 0x96371b
// 00963715  ff150ca99e00         call dword ptr [0x9ea90c]
// 0096371b  55                   push ebp
// 0096371c  56                   push esi
// 0096371d  83c508               add ebp, 8
// 00963720  55                   push ebp
// 00963721  8d4c2424             lea ecx, [esp + 0x24]
// 00963725  51                   push ecx
// 00963726  8bcb                 mov ecx, ebx
// 00963728  e863fcffff           call 0x963390
// 0096372d  eb91                 jmp 0x9636c0
// 0096372f  8b06                 mov eax, dword ptr [esi]
// 00963731  ebdd                 jmp 0x963710
// 00963733  5f                   pop edi
// 00963734  5e                   pop esi
// 00963735  5d                   pop ebp
// 00963736  5b                   pop ebx
// 00963737  83c414               add esp, 0x14
// 0096373a  c3                   ret 
// copied from an identical function in another client (function ?_Reinsert@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@IAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreMesh.cpp