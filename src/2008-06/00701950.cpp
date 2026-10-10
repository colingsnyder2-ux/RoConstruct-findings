// roc 2008-06 00701950  unit: CXTPTabClientWnd  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701950
//
// 00701950  56                   push esi
// 00701951  57                   push edi
// 00701952  8bf1                 mov esi, ecx
// 00701954  e80ff3f9ff           call 0x6a0c68
// 00701959  8bf8                 mov edi, eax
// 0070195b  8b06                 mov eax, dword ptr [esi]
// 0070195d  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00701963  8bce                 mov ecx, esi
// 00701965  ffd2                 call edx
// 00701967  8bc7                 mov eax, edi
// 00701969  5f                   pop edi
// 0070196a  5e                   pop esi
// 0070196b  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMDINext@CXTPTabClientWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
