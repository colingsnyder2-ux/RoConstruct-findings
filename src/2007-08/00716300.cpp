// roc 2007-08 00716300  unit: CXTPRibbonTab  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716300
//
// 00716300  56                   push esi
// 00716301  57                   push edi
// 00716302  8bf1                 mov esi, ecx
// 00716304  e8e7bef7ff           call 0x6921f0
// 00716309  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0071630d  3bf8                 cmp edi, eax
// 0071630f  7428                 je 0x716339
// 00716311  57                   push edi
// 00716312  8bce                 mov ecx, esi
// 00716314  e8676efeff           call 0x6fd180
// 00716319  85ff                 test edi, edi
// 0071631b  751c                 jne 0x716339
// 0071631d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00716320  397104               cmp dword ptr [ecx + 4], esi
// 00716323  7514                 jne 0x716339
// 00716325  6a01                 push 1
// 00716327  6aff                 push -1
// 00716329  e81286feff           call 0x6fe940
// 0071632e  85c0                 test eax, eax
// 00716330  7407                 je 0x716339
// 00716332  8bc8                 mov ecx, eax
// 00716334  e8276efeff           call 0x6fd160
// 00716339  5f                   pop edi
// 0071633a  5e                   pop esi
// 0071633b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonTab.cpp (function ?SetVisible@CXTPRibbonTab@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonTab.cpp
