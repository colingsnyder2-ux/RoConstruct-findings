// roc 2010-06 008a1630  unit: CXTPRibbonGroup  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a1630
//
// 008a1630  83ec14               sub esp, 0x14
// 008a1633  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 008a1639  8b4804               mov ecx, dword ptr [eax + 4]
// 008a163c  8b00                 mov eax, dword ptr [eax]
// 008a163e  56                   push esi
// 008a163f  33d2                 xor edx, edx
// 008a1641  57                   push edi
// 008a1642  33ff                 xor edi, edi
// 008a1644  33f6                 xor esi, esi
// 008a1646  3bca                 cmp ecx, edx
// 008a1648  897c2410             mov dword ptr [esp + 0x10], edi
// 008a164c  89542414             mov dword ptr [esp + 0x14], edx
// 008a1650  89542408             mov dword ptr [esp + 8], edx
// 008a1654  894c2418             mov dword ptr [esp + 0x18], ecx
// 008a1658  8954240c             mov dword ptr [esp + 0xc], edx
// 008a165c  0f8e88000000         jle 0x8a16ea
// 008a1662  53                   push ebx
// 008a1663  55                   push ebp
// 008a1664  8d782c               lea edi, [eax + 0x2c]
// 008a1667  eb0b                 jmp 0x8a1674
// 008a1669  8da42400000000       lea esp, [esp]
// 008a1670  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008a1674  833f00               cmp dword ptr [edi], 0
// 008a1677  8b6ff4               mov ebp, dword ptr [edi - 0xc]
// 008a167a  8b5ff8               mov ebx, dword ptr [edi - 8]
// 008a167d  740c                 je 0x8a168b
// 008a167f  33f6                 xor esi, esi
// 008a1681  03542410             add edx, dword ptr [esp + 0x10]
// 008a1685  8954241c             mov dword ptr [esp + 0x1c], edx
// 008a1689  eb10                 jmp 0x8a169b
// 008a168b  837f0400             cmp dword ptr [edi + 4], 0
// 008a168f  740a                 je 0x8a169b
// 008a1691  837c241400           cmp dword ptr [esp + 0x14], 0
// 008a1696  7e03                 jle 0x8a169b
// 008a1698  83c603               add esi, 3
// 008a169b  8d0413               lea eax, [ebx + edx]
// 008a169e  50                   push eax
// 008a169f  8d4c2e02             lea ecx, [esi + ebp + 2]
// 008a16a3  51                   push ecx
// 008a16a4  52                   push edx
// 008a16a5  8d5602               lea edx, [esi + 2]
// 008a16a8  52                   push edx
// 008a16a9  8d47d4               lea eax, [edi - 0x2c]
// 008a16ac  50                   push eax
// 008a16ad  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 008a16b3  03f5                 add esi, ebp
// 008a16b5  395c2410             cmp dword ptr [esp + 0x10], ebx
// 008a16b9  7f04                 jg 0x8a16bf
// 008a16bb  895c2410             mov dword ptr [esp + 0x10], ebx
// 008a16bf  39742418             cmp dword ptr [esp + 0x18], esi
// 008a16c3  7f04                 jg 0x8a16c9
// 008a16c5  89742418             mov dword ptr [esp + 0x18], esi
// 008a16c9  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a16cd  40                   inc eax
// 008a16ce  83c744               add edi, 0x44
// 008a16d1  3b442420             cmp eax, dword ptr [esp + 0x20]
// 008a16d5  89442414             mov dword ptr [esp + 0x14], eax
// 008a16d9  7c95                 jl 0x8a1670
// 008a16db  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a16df  5d                   pop ebp
// 008a16e0  5b                   pop ebx
// 008a16e1  5f                   pop edi
// 008a16e2  83c004               add eax, 4
// 008a16e5  5e                   pop esi
// 008a16e6  83c414               add esp, 0x14
// 008a16e9  c3                   ret 
// 008a16ea  8d4704               lea eax, [edi + 4]
// 008a16ed  5f                   pop edi
// 008a16ee  5e                   pop esi
// 008a16ef  83c414               add esp, 0x14
// 008a16f2  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_GetSizeSpecialDynamicSize@CXTPRibbonGroup@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
