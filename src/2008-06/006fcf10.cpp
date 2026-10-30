// from server: 100% by auto
// roc 2008-06 006fcf10  unit: CXTPPropExchangeArchive  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fcf10
//
// 006fcf10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fcf14  8b542408             mov edx, dword ptr [esp + 8]
// 006fcf18  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 006fcf1b  50                   push eax
// 006fcf1c  52                   push edx
// 006fcf1d  e80842faff           call 0x6a112a
// 006fcf22  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?Write@CXTPPropExchangeArchive@@UAEXPBDPBXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
