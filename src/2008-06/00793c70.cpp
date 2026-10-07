// roc 2008-06 00793c70  unit: CXTPRibbonTab  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793c70
//
// 00793c70  56                   push esi
// 00793c71  57                   push edi
// 00793c72  8bf1                 mov esi, ecx
// 00793c74  e867a2f7ff           call 0x70dee0
// 00793c79  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00793c7d  3bf8                 cmp edi, eax
// 00793c7f  7428                 je 0x793ca9
// 00793c81  57                   push edi
// 00793c82  8bce                 mov ecx, esi
// 00793c84  e89770feff           call 0x77ad20
// 00793c89  85ff                 test edi, edi
// 00793c8b  751c                 jne 0x793ca9
// 00793c8d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00793c90  397104               cmp dword ptr [ecx + 4], esi
// 00793c93  7514                 jne 0x793ca9
// 00793c95  6a01                 push 1
// 00793c97  6aff                 push -1
// 00793c99  e87288feff           call 0x77c510
// 00793c9e  85c0                 test eax, eax
// 00793ca0  7407                 je 0x793ca9
// 00793ca2  8bc8                 mov ecx, eax
// 00793ca4  e86770feff           call 0x77ad10
// 00793ca9  5f                   pop edi
// 00793caa  5e                   pop esi
// 00793cab  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTab.cpp (function ?SetVisible@CXTPRibbonTab@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTab.cpp
