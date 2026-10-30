// roc 2009-06 0076d920  unit: CXTPControlToolbars::CXTPControlToolbar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076d920
//
// 0076d920  56                   push esi
// 0076d921  57                   push edi
// 0076d922  8bf9                 mov edi, ecx
// 0076d924  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0076d92a  e861fafbff           call 0x72d390
// 0076d92f  8bf0                 mov esi, eax
// 0076d931  8bce                 mov ecx, esi
// 0076d933  e8f8d8fbff           call 0x72b230
// 0076d938  85f6                 test esi, esi
// 0076d93a  740b                 je 0x76d947
// 0076d93c  8b477c               mov eax, dword ptr [edi + 0x7c]
// 0076d93f  50                   push eax
// 0076d940  8bce                 mov ecx, esi
// 0076d942  e819c7fbff           call 0x72a060
// 0076d947  5f                   pop edi
// 0076d948  5e                   pop esi
// 0076d949  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?OnExecute@CXTPControlToolbar@CXTPControlToolbars@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
