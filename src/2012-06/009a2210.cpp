// roc 2012-06 009a2210  unit: CXTPCommandBars  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2210
//
// 009a2210  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 009a2216  56                   push esi
// 009a2217  51                   push ecx
// 009a2218  e8c3740f00           call 0xa996e0
// 009a221d  50                   push eax
// 009a221e  e8c302feff           call 0x9824e6
// 009a2223  8bf0                 mov esi, eax
// 009a2225  83c408               add esp, 8
// 009a2228  85f6                 test esi, esi
// 009a222a  741e                 je 0x9a224a
// 009a222c  f686e400000008       test byte ptr [esi + 0xe4], 8
// 009a2233  7415                 je 0x9a224a
// 009a2235  8b06                 mov eax, dword ptr [esi]
// 009a2237  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 009a223d  6a00                 push 0
// 009a223f  8bce                 mov ecx, esi
// 009a2241  ffd2                 call edx
// 009a2243  83a6e4000000f7       and dword ptr [esi + 0xe4], 0xfffffff7
// 009a224a  5e                   pop esi
// 009a224b  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?IdleRecalcLayout@CXTPCommandBars@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCommandBars.cpp
