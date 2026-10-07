// roc 2008-06 006fcef0  unit: CXTPPropExchangeArchive  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fcef0
//
// 006fcef0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fcef4  8b542408             mov edx, dword ptr [esp + 8]
// 006fcef8  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 006fcefb  50                   push eax
// 006fcefc  52                   push edx
// 006fcefd  e82e42faff           call 0x6a1130
// 006fcf02  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?Write@CXTPPropExchangeArchive@@UAEXPBDPBXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
