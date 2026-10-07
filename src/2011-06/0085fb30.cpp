// roc 2011-06 0085fb30  unit: CXTPPropExchangeArchive  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085fb30
//
// 0085fb30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085fb34  8b542408             mov edx, dword ptr [esp + 8]
// 0085fb38  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 0085fb3b  50                   push eax
// 0085fb3c  52                   push edx
// 0085fb3d  e898b0faff           call 0x80abda
// 0085fb42  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?Write@CXTPPropExchangeArchive@@UAEXPBDPBXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
