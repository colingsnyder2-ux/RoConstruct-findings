// roc 2012-06 009dc940  unit: CXTPTabClientWnd  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc940
//
// 009dc940  56                   push esi
// 009dc941  57                   push edi
// 009dc942  8bf1                 mov esi, ecx
// 009dc944  e8955dfaff           call 0x9826de
// 009dc949  8bf8                 mov edi, eax
// 009dc94b  8b06                 mov eax, dword ptr [esi]
// 009dc94d  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 009dc953  8bce                 mov ecx, esi
// 009dc955  ffd2                 call edx
// 009dc957  8bc7                 mov eax, edi
// 009dc959  5f                   pop edi
// 009dc95a  5e                   pop esi
// 009dc95b  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMDINext@CXTPTabClientWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
