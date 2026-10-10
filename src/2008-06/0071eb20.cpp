// roc 2008-06 0071eb20  unit: UtagACCEL::?$CArray  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071eb20
//
// 0071eb20  55                   push ebp
// 0071eb21  57                   push edi
// 0071eb22  8bf9                 mov edi, ecx
// 0071eb24  33ed                 xor ebp, ebp
// 0071eb26  396f04               cmp dword ptr [edi + 4], ebp
// 0071eb29  742d                 je 0x71eb58
// 0071eb2b  53                   push ebx
// 0071eb2c  33db                 xor ebx, ebx
// 0071eb2e  396f08               cmp dword ptr [edi + 8], ebp
// 0071eb31  7624                 jbe 0x71eb57
// 0071eb33  56                   push esi
// 0071eb34  8b4704               mov eax, dword ptr [edi + 4]
// 0071eb37  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0071eb3a  3bf5                 cmp esi, ebp
// 0071eb3c  7412                 je 0x71eb50
// 0071eb3e  8bff                 mov edi, edi
// 0071eb40  8d4e04               lea ecx, [esi + 4]
// 0071eb43  ff15143f8000         call dword ptr [0x803f14]
// 0071eb49  8b7608               mov esi, dword ptr [esi + 8]
// 0071eb4c  3bf5                 cmp esi, ebp
// 0071eb4e  75f0                 jne 0x71eb40
// 0071eb50  43                   inc ebx
// 0071eb51  3b5f08               cmp ebx, dword ptr [edi + 8]
// 0071eb54  72de                 jb 0x71eb34
// 0071eb56  5e                   pop esi
// 0071eb57  5b                   pop ebx
// 0071eb58  8b4f04               mov ecx, dword ptr [edi + 4]
// 0071eb5b  51                   push ecx
// 0071eb5c  e8e91df8ff           call 0x6a094a
// 0071eb61  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0071eb64  83c404               add esp, 4
// 0071eb67  896f04               mov dword ptr [edi + 4], ebp
// 0071eb6a  896f0c               mov dword ptr [edi + 0xc], ebp
// 0071eb6d  896f10               mov dword ptr [edi + 0x10], ebp
// 0071eb70  e8a325f8ff           call 0x6a1118
// 0071eb75  896f14               mov dword ptr [edi + 0x14], ebp
// 0071eb78  5f                   pop edi
// 0071eb79  5d                   pop ebp
// 0071eb7a  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPShortcutManager.cpp (function ?RemoveAll@?$CMap@IIV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V12@@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPShortcutManager.cpp
