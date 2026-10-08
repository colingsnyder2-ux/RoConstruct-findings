// from server: 100% by auto
// roc 2012-06 009d8850  unit: CXTPPropExchangeXMLNode  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8850
//
// 009d8850  56                   push esi
// 009d8851  8b742408             mov esi, dword ptr [esp + 8]
// 009d8855  6a08                 push 8
// 009d8857  8d442410             lea eax, [esp + 0x10]
// 009d885b  50                   push eax
// 009d885c  8bce                 mov ecx, esi
// 009d885e  e803a4faff           call 0x982c66
// 009d8863  8bc6                 mov eax, esi
// 009d8865  5e                   pop esi
// 009d8866  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ??6@YGAAVCArchive@@AAV0@UtagSIZE@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
