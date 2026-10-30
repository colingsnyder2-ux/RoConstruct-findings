// roc 2010-06 009670c0  unit: Ogre::RbxSceneUpdater  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009670c0
//
// 009670c0  83ec14               sub esp, 0x14
// 009670c3  53                   push ebx
// 009670c4  55                   push ebp
// 009670c5  56                   push esi
// 009670c6  8bd9                 mov ebx, ecx
// 009670c8  57                   push edi
// 009670c9  8d7b08               lea edi, [ebx + 8]
// 009670cc  8d642400             lea esp, [esp]
// 009670d0  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 009670d3  2b4b30               sub ecx, dword ptr [ebx + 0x30]
// 009670d6  8b4714               mov eax, dword ptr [edi + 0x14]
// 009670d9  8b28                 mov ebp, dword ptr [eax]
// 009670db  8b37                 mov esi, dword ptr [edi]
// 009670dd  c1f903               sar ecx, 3
// 009670e0  85c9                 test ecx, ecx
// 009670e2  7706                 ja 0x9670ea
// 009670e4  ff150ca99e00         call dword ptr [0x9ea90c]
// 009670ea  8b5330               mov edx, dword ptr [ebx + 0x30]
// 009670ed  8b4204               mov eax, dword ptr [edx + 4]
// 009670f0  89442414             mov dword ptr [esp + 0x14], eax
// 009670f4  85ff                 test edi, edi
// 009670f6  7506                 jne 0x9670fe
// 009670f8  ff150ca99e00         call dword ptr [0x9ea90c]
// 009670fe  8b07                 mov eax, dword ptr [edi]
// 00967100  85f6                 test esi, esi
// 00967102  7404                 je 0x967108
// 00967104  3bf0                 cmp esi, eax
// 00967106  7406                 je 0x96710e
// 00967108  ff150ca99e00         call dword ptr [0x9ea90c]
// 0096710e  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00967112  742f                 je 0x967143
// 00967114  85f6                 test esi, esi
// 00967116  7527                 jne 0x96713f
// 00967118  ff150ca99e00         call dword ptr [0x9ea90c]
// 0096711e  33c0                 xor eax, eax
// 00967120  3b6814               cmp ebp, dword ptr [eax + 0x14]
// 00967123  7506                 jne 0x96712b
// 00967125  ff150ca99e00         call dword ptr [0x9ea90c]
// 0096712b  55                   push ebp
// 0096712c  56                   push esi
// 0096712d  83c508               add ebp, 8
// 00967130  55                   push ebp
// 00967131  8d4c2424             lea ecx, [esp + 0x24]
// 00967135  51                   push ecx
// 00967136  8bcb                 mov ecx, ebx
// 00967138  e863fcffff           call 0x966da0
// 0096713d  eb91                 jmp 0x9670d0
// 0096713f  8b06                 mov eax, dword ptr [esi]
// 00967141  ebdd                 jmp 0x967120
// 00967143  5f                   pop edi
// 00967144  5e                   pop esi
// 00967145  5d                   pop ebp
// 00967146  5b                   pop ebx
// 00967147  83c414               add esp, 0x14
// 0096714a  c3                   ret 
// copied from an identical function in another client (function ?_Reinsert@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@IAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreMesh.cpp