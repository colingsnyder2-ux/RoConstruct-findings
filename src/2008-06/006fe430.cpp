// roc 2008-06 006fe430  unit: CXTPPropExchange  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fe430
//
// 006fe430  56                   push esi
// 006fe431  8bf1                 mov esi, ecx
// 006fe433  e818e5ffff           call 0x6fc950
// 006fe438  8b442408             mov eax, dword ptr [esp + 8]
// 006fe43c  894644               mov dword ptr [esi + 0x44], eax
// 006fe43f  c70694af8500         mov dword ptr [esi], 0x85af94
// 006fe445  8b4018               mov eax, dword ptr [eax + 0x18]
// 006fe448  83e001               and eax, 1
// 006fe44b  894628               mov dword ptr [esi + 0x28], eax
// 006fe44e  8bc6                 mov eax, esi
// 006fe450  5e                   pop esi
// 006fe451  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ??0CXTPPropExchangeArchive@@QAE@AAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
