// roc 2010-06 0064e690  unit: RBX::VController::?$EventDesc  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0064e690
//
// 0064e690  83ec14               sub esp, 0x14
// 0064e693  53                   push ebx
// 0064e694  55                   push ebp
// 0064e695  56                   push esi
// 0064e696  8bd9                 mov ebx, ecx
// 0064e698  57                   push edi
// 0064e699  8d7b08               lea edi, [ebx + 8]
// 0064e69c  8d642400             lea esp, [esp]
// 0064e6a0  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0064e6a3  2b4b30               sub ecx, dword ptr [ebx + 0x30]
// 0064e6a6  8b4714               mov eax, dword ptr [edi + 0x14]
// 0064e6a9  8b28                 mov ebp, dword ptr [eax]
// 0064e6ab  8b37                 mov esi, dword ptr [edi]
// 0064e6ad  c1f903               sar ecx, 3
// 0064e6b0  85c9                 test ecx, ecx
// 0064e6b2  7706                 ja 0x64e6ba
// 0064e6b4  ff150ca99e00         call dword ptr [0x9ea90c]
// 0064e6ba  8b5330               mov edx, dword ptr [ebx + 0x30]
// 0064e6bd  8b4204               mov eax, dword ptr [edx + 4]
// 0064e6c0  89442414             mov dword ptr [esp + 0x14], eax
// 0064e6c4  85ff                 test edi, edi
// 0064e6c6  7506                 jne 0x64e6ce
// 0064e6c8  ff150ca99e00         call dword ptr [0x9ea90c]
// 0064e6ce  8b07                 mov eax, dword ptr [edi]
// 0064e6d0  85f6                 test esi, esi
// 0064e6d2  7404                 je 0x64e6d8
// 0064e6d4  3bf0                 cmp esi, eax
// 0064e6d6  7406                 je 0x64e6de
// 0064e6d8  ff150ca99e00         call dword ptr [0x9ea90c]
// 0064e6de  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0064e6e2  742f                 je 0x64e713
// 0064e6e4  85f6                 test esi, esi
// 0064e6e6  7527                 jne 0x64e70f
// 0064e6e8  ff150ca99e00         call dword ptr [0x9ea90c]
// 0064e6ee  33c0                 xor eax, eax
// 0064e6f0  3b6814               cmp ebp, dword ptr [eax + 0x14]
// 0064e6f3  7506                 jne 0x64e6fb
// 0064e6f5  ff150ca99e00         call dword ptr [0x9ea90c]
// 0064e6fb  55                   push ebp
// 0064e6fc  56                   push esi
// 0064e6fd  83c508               add ebp, 8
// 0064e700  55                   push ebp
// 0064e701  8d4c2424             lea ecx, [esp + 0x24]
// 0064e705  51                   push ecx
// 0064e706  8bcb                 mov ecx, ebx
// 0064e708  e863fcffff           call 0x64e370
// 0064e70d  eb91                 jmp 0x64e6a0
// 0064e70f  8b06                 mov eax, dword ptr [esi]
// 0064e711  ebdd                 jmp 0x64e6f0
// 0064e713  5f                   pop edi
// 0064e714  5e                   pop esi
// 0064e715  5d                   pop ebp
// 0064e716  5b                   pop ebx
// 0064e717  83c414               add esp, 0x14
// 0064e71a  c3                   ret 
// copied from an identical function in another client (function ?_Reinsert@?$_Hash@V?$_Hmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GV?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@stdext@@@stdext@@IAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreMesh.cpp