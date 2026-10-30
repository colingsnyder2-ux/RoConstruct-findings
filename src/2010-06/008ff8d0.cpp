// roc 2010-06 008ff8d0  unit: Ogre::RbxSceneUpdater  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008ff8d0
//
// 008ff8d0  83ec14               sub esp, 0x14
// 008ff8d3  53                   push ebx
// 008ff8d4  55                   push ebp
// 008ff8d5  56                   push esi
// 008ff8d6  8bd9                 mov ebx, ecx
// 008ff8d8  57                   push edi
// 008ff8d9  8d7b08               lea edi, [ebx + 8]
// 008ff8dc  8d642400             lea esp, [esp]
// 008ff8e0  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 008ff8e3  2b4b30               sub ecx, dword ptr [ebx + 0x30]
// 008ff8e6  8b4714               mov eax, dword ptr [edi + 0x14]
// 008ff8e9  8b28                 mov ebp, dword ptr [eax]
// 008ff8eb  8b37                 mov esi, dword ptr [edi]
// 008ff8ed  c1f903               sar ecx, 3
// 008ff8f0  85c9                 test ecx, ecx
// 008ff8f2  7706                 ja 0x8ff8fa
// 008ff8f4  ff150ca99e00         call dword ptr [0x9ea90c]
// 008ff8fa  8b5330               mov edx, dword ptr [ebx + 0x30]
// 008ff8fd  8b4204               mov eax, dword ptr [edx + 4]
// 008ff900  89442414             mov dword ptr [esp + 0x14], eax
// 008ff904  85ff                 test edi, edi
// 008ff906  7506                 jne 0x8ff90e
// 008ff908  ff150ca99e00         call dword ptr [0x9ea90c]
// 008ff90e  8b07                 mov eax, dword ptr [edi]
// 008ff910  85f6                 test esi, esi
// 008ff912  7404                 je 0x8ff918
// 008ff914  3bf0                 cmp esi, eax
// 008ff916  7406                 je 0x8ff91e
// 008ff918  ff150ca99e00         call dword ptr [0x9ea90c]
// 008ff91e  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 008ff922  742f                 je 0x8ff953
// 008ff924  85f6                 test esi, esi
// 008ff926  7527                 jne 0x8ff94f
// 008ff928  ff150ca99e00         call dword ptr [0x9ea90c]
// 008ff92e  33c0                 xor eax, eax
// 008ff930  3b6814               cmp ebp, dword ptr [eax + 0x14]
// 008ff933  7506                 jne 0x8ff93b
// 008ff935  ff150ca99e00         call dword ptr [0x9ea90c]
// 008ff93b  55                   push ebp
// 008ff93c  56                   push esi
// 008ff93d  83c508               add ebp, 8
// 008ff940  55                   push ebp
// 008ff941  8d4c2424             lea ecx, [esp + 0x24]
// 008ff945  51                   push ecx
// 008ff946  8bcb                 mov ecx, ebx
// 008ff948  e863fcffff           call 0x8ff5b0
// 008ff94d  eb91                 jmp 0x8ff8e0
// 008ff94f  8b06                 mov eax, dword ptr [esi]
// 008ff951  ebdd                 jmp 0x8ff930
// 008ff953  5f                   pop edi
// 008ff954  5e                   pop esi
// 008ff955  5d                   pop ebp
// 008ff956  5b                   pop ebx
// 008ff957  83c414               add esp, 0x14
// 008ff95a  c3                   ret 
// copied from an identical function in another client (function ?_Reinsert@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@IAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreMesh.cpp