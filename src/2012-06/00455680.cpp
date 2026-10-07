// roc 2012-06 00455680  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00455680
//
// 00455680  56                   push esi
// 00455681  8bf1                 mov esi, ecx
// 00455683  8b4604               mov eax, dword ptr [esi + 4]
// 00455686  57                   push edi
// 00455687  33ff                 xor edi, edi
// 00455689  3bc7                 cmp eax, edi
// 0045568b  7409                 je 0x455696
// 0045568d  8d4900               lea ecx, [ecx]
// 00455690  8b00                 mov eax, dword ptr [eax]
// 00455692  3bc7                 cmp eax, edi
// 00455694  75fa                 jne 0x455690
// 00455696  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00455699  897e0c               mov dword ptr [esi + 0xc], edi
// 0045569c  897e10               mov dword ptr [esi + 0x10], edi
// 0045569f  897e08               mov dword ptr [esi + 8], edi
// 004556a2  897e04               mov dword ptr [esi + 4], edi
// 004556a5  e8a4d55200           call 0x982c4e
// 004556aa  897e14               mov dword ptr [esi + 0x14], edi
// 004556ad  5f                   pop edi
// 004556ae  5e                   pop esi
// 004556af  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ?RemoveAll@?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
