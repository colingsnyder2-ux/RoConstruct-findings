// roc 2008-06 0071eb80  unit: UtagACCEL::?$CArray  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071eb80
//
// 0071eb80  56                   push esi
// 0071eb81  8bf1                 mov esi, ecx
// 0071eb83  837e1000             cmp dword ptr [esi + 0x10], 0
// 0071eb87  57                   push edi
// 0071eb88  7537                 jne 0x71ebc1
// 0071eb8a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0071eb8d  6a10                 push 0x10
// 0071eb8f  50                   push eax
// 0071eb90  8d4e14               lea ecx, [esi + 0x14]
// 0071eb93  51                   push ecx
// 0071eb94  e8a325f8ff           call 0x6a113c
// 0071eb99  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0071eb9c  8bd1                 mov edx, ecx
// 0071eb9e  83c004               add eax, 4
// 0071eba1  c1e204               shl edx, 4
// 0071eba4  83c1ff               add ecx, -1
// 0071eba7  8d4410f0             lea eax, [eax + edx - 0x10]
// 0071ebab  7814                 js 0x71ebc1
// 0071ebad  8d4900               lea ecx, [ecx]
// 0071ebb0  8b5610               mov edx, dword ptr [esi + 0x10]
// 0071ebb3  895008               mov dword ptr [eax + 8], edx
// 0071ebb6  894610               mov dword ptr [esi + 0x10], eax
// 0071ebb9  49                   dec ecx
// 0071ebba  83e810               sub eax, 0x10
// 0071ebbd  85c9                 test ecx, ecx
// 0071ebbf  7def                 jge 0x71ebb0
// 0071ebc1  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0071ebc4  85ff                 test edi, edi
// 0071ebc6  7505                 jne 0x71ebcd
// 0071ebc8  e8771df8ff           call 0x6a0944
// 0071ebcd  8b4f08               mov ecx, dword ptr [edi + 8]
// 0071ebd0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0071ebd4  33c0                 xor eax, eax
// 0071ebd6  8907                 mov dword ptr [edi], eax
// 0071ebd8  894704               mov dword ptr [edi + 4], eax
// 0071ebdb  89470c               mov dword ptr [edi + 0xc], eax
// 0071ebde  894f08               mov dword ptr [edi + 8], ecx
// 0071ebe1  8b4610               mov eax, dword ptr [esi + 0x10]
// 0071ebe4  8b4808               mov ecx, dword ptr [eax + 8]
// 0071ebe7  ff460c               inc dword ptr [esi + 0xc]
// 0071ebea  894e10               mov dword ptr [esi + 0x10], ecx
// 0071ebed  8d4f04               lea ecx, [edi + 4]
// 0071ebf0  8917                 mov dword ptr [edi], edx
// 0071ebf2  ff15043f8000         call dword ptr [0x803f04]
// 0071ebf8  8bc7                 mov eax, edi
// 0071ebfa  5f                   pop edi
// 0071ebfb  5e                   pop esi
// 0071ebfc  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPShortcutManager.cpp (function ?NewAssoc@?$CMap@IIV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V12@@@IAEPAVCAssoc@1@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPShortcutManager.cpp
