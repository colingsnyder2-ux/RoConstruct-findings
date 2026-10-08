// from server: 100% by auto
// roc 2012-06 009d7f30  unit: CXTPPropExchangeArchive  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7f30
//
// 009d7f30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009d7f34  8b542408             mov edx, dword ptr [esp + 8]
// 009d7f38  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 009d7f3b  50                   push eax
// 009d7f3c  52                   push edx
// 009d7f3d  e81eadfaff           call 0x982c60
// 009d7f42  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?Write@CXTPPropExchangeArchive@@UAEXPBDPBXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
