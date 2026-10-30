// roc 2009-12 00854fe0  unit: CXTPTabClientWnd  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854fe0
//
// 00854fe0  56                   push esi
// 00854fe1  57                   push edi
// 00854fe2  8bf1                 mov esi, ecx
// 00854fe4  e847eef9ff           call 0x7f3e30
// 00854fe9  8bf8                 mov edi, eax
// 00854feb  8b06                 mov eax, dword ptr [esi]
// 00854fed  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00854ff3  8bce                 mov ecx, esi
// 00854ff5  ffd2                 call edx
// 00854ff7  8bc7                 mov eax, edi
// 00854ff9  5f                   pop edi
// 00854ffa  5e                   pop esi
// 00854ffb  c20800               ret 8
// copied from an identical function in another client (function ?OnMDINext@CXTPTabClientWnd@@IAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp