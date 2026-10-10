// roc 2012-06 00a18b00  unit: UtagACCEL::?$CArray  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a18b00
//
// 00a18b00  55                   push ebp
// 00a18b01  57                   push edi
// 00a18b02  8bf9                 mov edi, ecx
// 00a18b04  33ed                 xor ebp, ebp
// 00a18b06  396f04               cmp dword ptr [edi + 4], ebp
// 00a18b09  742d                 je 0xa18b38
// 00a18b0b  53                   push ebx
// 00a18b0c  33db                 xor ebx, ebx
// 00a18b0e  396f08               cmp dword ptr [edi + 8], ebp
// 00a18b11  7624                 jbe 0xa18b37
// 00a18b13  56                   push esi
// 00a18b14  8b4704               mov eax, dword ptr [edi + 4]
// 00a18b17  8b3498               mov esi, dword ptr [eax + ebx*4]
// 00a18b1a  3bf5                 cmp esi, ebp
// 00a18b1c  7412                 je 0xa18b30
// 00a18b1e  8bff                 mov edi, edi
// 00a18b20  8d4e04               lea ecx, [esi + 4]
// 00a18b23  ff15d047b200         call dword ptr [0xb247d0]
// 00a18b29  8b7608               mov esi, dword ptr [esi + 8]
// 00a18b2c  3bf5                 cmp esi, ebp
// 00a18b2e  75f0                 jne 0xa18b20
// 00a18b30  43                   inc ebx
// 00a18b31  3b5f08               cmp ebx, dword ptr [edi + 8]
// 00a18b34  72de                 jb 0xa18b14
// 00a18b36  5e                   pop esi
// 00a18b37  5b                   pop ebx
// 00a18b38  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a18b3b  51                   push ecx
// 00a18b3c  e87998f6ff           call 0x9823ba
// 00a18b41  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00a18b44  83c404               add esp, 4
// 00a18b47  896f04               mov dword ptr [edi + 4], ebp
// 00a18b4a  896f0c               mov dword ptr [edi + 0xc], ebp
// 00a18b4d  896f10               mov dword ptr [edi + 0x10], ebp
// 00a18b50  e8f9a0f6ff           call 0x982c4e
// 00a18b55  896f14               mov dword ptr [edi + 0x14], ebp
// 00a18b58  5f                   pop edi
// 00a18b59  5d                   pop ebp
// 00a18b5a  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPShortcutManager.cpp (function ?RemoveAll@?$CMap@GGV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V12@@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPShortcutManager.cpp
