// from server: 100% by auto
// roc 2011-06 0085fb10  unit: CXTPPropExchangeArchive  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085fb10
//
// 0085fb10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085fb14  8b542408             mov edx, dword ptr [esp + 8]
// 0085fb18  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 0085fb1b  50                   push eax
// 0085fb1c  52                   push edx
// 0085fb1d  e8beb0faff           call 0x80abe0
// 0085fb22  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?Write@CXTPPropExchangeArchive@@UAEXPBDPBXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
