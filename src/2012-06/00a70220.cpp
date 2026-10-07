// roc 2012-06 00a70220  unit: CXTPRibbonTab  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a70220
//
// 00a70220  56                   push esi
// 00a70221  57                   push edi
// 00a70222  8bf1                 mov esi, ecx
// 00a70224  e8576cf7ff           call 0x9e6e80
// 00a70229  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a7022d  3bf8                 cmp edi, eax
// 00a7022f  7428                 je 0xa70259
// 00a70231  57                   push edi
// 00a70232  8bce                 mov ecx, esi
// 00a70234  e807b2fdff           call 0xa4b440
// 00a70239  85ff                 test edi, edi
// 00a7023b  751c                 jne 0xa70259
// 00a7023d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a70240  397104               cmp dword ptr [ecx + 4], esi
// 00a70243  7514                 jne 0xa70259
// 00a70245  6a01                 push 1
// 00a70247  6aff                 push -1
// 00a70249  e852c9fdff           call 0xa4cba0
// 00a7024e  85c0                 test eax, eax
// 00a70250  7407                 je 0xa70259
// 00a70252  8bc8                 mov ecx, eax
// 00a70254  e8d7b1fdff           call 0xa4b430
// 00a70259  5f                   pop edi
// 00a7025a  5e                   pop esi
// 00a7025b  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTab.cpp (function ?SetVisible@CXTPRibbonTab@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTab.cpp
