// from server: 100% by auto
// roc 2012-06 00455720  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00455720
//
// 00455720  8b442404             mov eax, dword ptr [esp + 4]
// 00455724  56                   push esi
// 00455725  8bf1                 mov esi, ecx
// 00455727  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0045572a  8908                 mov dword ptr [eax], ecx
// 0045572c  83460cff             add dword ptr [esi + 0xc], -1
// 00455730  894610               mov dword ptr [esi + 0x10], eax
// 00455733  7529                 jne 0x45575e
// 00455735  8b4604               mov eax, dword ptr [esi + 4]
// 00455738  57                   push edi
// 00455739  33ff                 xor edi, edi
// 0045573b  3bc7                 cmp eax, edi
// 0045573d  7407                 je 0x455746
// 0045573f  90                   nop 
// 00455740  8b00                 mov eax, dword ptr [eax]
// 00455742  3bc7                 cmp eax, edi
// 00455744  75fa                 jne 0x455740
// 00455746  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00455749  897e0c               mov dword ptr [esi + 0xc], edi
// 0045574c  897e10               mov dword ptr [esi + 0x10], edi
// 0045574f  897e08               mov dword ptr [esi + 8], edi
// 00455752  897e04               mov dword ptr [esi + 4], edi
// 00455755  e8f4d45200           call 0x982c4e
// 0045575a  897e14               mov dword ptr [esi + 0x14], edi
// 0045575d  5f                   pop edi
// 0045575e  5e                   pop esi
// 0045575f  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ?FreeNode@?$CList@PAVCXTPCalendarViewPart@@PAV1@@@IAEXPAUCNode@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
