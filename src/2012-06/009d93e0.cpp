// from server: 100% by auto
// roc 2012-06 009d93e0  unit: CXTPPropExchange  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d93e0
//
// 009d93e0  56                   push esi
// 009d93e1  8bf1                 mov esi, ecx
// 009d93e3  e888e5ffff           call 0x9d7970
// 009d93e8  8b442408             mov eax, dword ptr [esp + 8]
// 009d93ec  894644               mov dword ptr [esi + 0x44], eax
// 009d93ef  c706dc60c100         mov dword ptr [esi], 0xc160dc
// 009d93f5  8b4018               mov eax, dword ptr [eax + 0x18]
// 009d93f8  83e001               and eax, 1
// 009d93fb  894628               mov dword ptr [esi + 0x28], eax
// 009d93fe  8bc6                 mov eax, esi
// 009d9400  5e                   pop esi
// 009d9401  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ??0CXTPPropExchangeArchive@@QAE@AAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
