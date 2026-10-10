// roc 2008-06 006a2900  unit: CXTPCommandBars  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2900
//
// 006a2900  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 006a2906  56                   push esi
// 006a2907  51                   push ecx
// 006a2908  e859e8ffff           call 0x6a1166
// 006a290d  50                   push eax
// 006a290e  e813e3ffff           call 0x6a0c26
// 006a2913  8bf0                 mov esi, eax
// 006a2915  83c408               add esp, 8
// 006a2918  85f6                 test esi, esi
// 006a291a  741e                 je 0x6a293a
// 006a291c  f686e400000008       test byte ptr [esi + 0xe4], 8
// 006a2923  7415                 je 0x6a293a
// 006a2925  8b06                 mov eax, dword ptr [esi]
// 006a2927  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 006a292d  6a00                 push 0
// 006a292f  8bce                 mov ecx, esi
// 006a2931  ffd2                 call edx
// 006a2933  83a6e4000000f7       and dword ptr [esi + 0xe4], 0xfffffff7
// 006a293a  5e                   pop esi
// 006a293b  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?IdleRecalcLayout@CXTPCommandBars@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
