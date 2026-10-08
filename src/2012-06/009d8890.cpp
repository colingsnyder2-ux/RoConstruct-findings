// from server: 100% by auto
// roc 2012-06 009d8890  unit: CXTPPropExchangeXMLNode  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8890
//
// 009d8890  8b442408             mov eax, dword ptr [esp + 8]
// 009d8894  56                   push esi
// 009d8895  8b742408             mov esi, dword ptr [esp + 8]
// 009d8899  6a08                 push 8
// 009d889b  50                   push eax
// 009d889c  8bce                 mov ecx, esi
// 009d889e  e8bda3faff           call 0x982c60
// 009d88a3  83f808               cmp eax, 8
// 009d88a6  7409                 je 0x9d88b1
// 009d88a8  6a00                 push 0
// 009d88aa  6a03                 push 3
// 009d88ac  e8a9a3faff           call 0x982c5a
// 009d88b1  8bc6                 mov eax, esi
// 009d88b3  5e                   pop esi
// 009d88b4  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ??5@YGAAVCArchive@@AAV0@AAUtagSIZE@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
