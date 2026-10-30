// from server: 100% by auto
// roc 2011-06 008f7ef0  unit: CXTPRibbonTab  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f7ef0
//
// 008f7ef0  56                   push esi
// 008f7ef1  57                   push edi
// 008f7ef2  8bf1                 mov esi, ecx
// 008f7ef4  e8279ab5ff           call 0x451920
// 008f7ef9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008f7efd  3bf8                 cmp edi, eax
// 008f7eff  7428                 je 0x8f7f29
// 008f7f01  57                   push edi
// 008f7f02  8bce                 mov ecx, esi
// 008f7f04  e807b2fdff           call 0x8d3110
// 008f7f09  85ff                 test edi, edi
// 008f7f0b  751c                 jne 0x8f7f29
// 008f7f0d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008f7f10  397104               cmp dword ptr [ecx + 4], esi
// 008f7f13  7514                 jne 0x8f7f29
// 008f7f15  6a01                 push 1
// 008f7f17  6aff                 push -1
// 008f7f19  e832c9fdff           call 0x8d4850
// 008f7f1e  85c0                 test eax, eax
// 008f7f20  7407                 je 0x8f7f29
// 008f7f22  8bc8                 mov ecx, eax
// 008f7f24  e8d7b1fdff           call 0x8d3100
// 008f7f29  5f                   pop edi
// 008f7f2a  5e                   pop esi
// 008f7f2b  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTab.cpp (function ?SetVisible@CXTPRibbonTab@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTab.cpp
