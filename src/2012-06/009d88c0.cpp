// roc 2012-06 009d88c0  unit: CXTPPropExchangeXMLNode  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d88c0
//
// 009d88c0  8b442408             mov eax, dword ptr [esp + 8]
// 009d88c4  56                   push esi
// 009d88c5  8b742408             mov esi, dword ptr [esp + 8]
// 009d88c9  6a10                 push 0x10
// 009d88cb  50                   push eax
// 009d88cc  8bce                 mov ecx, esi
// 009d88ce  e88da3faff           call 0x982c60
// 009d88d3  83f810               cmp eax, 0x10
// 009d88d6  7409                 je 0x9d88e1
// 009d88d8  6a00                 push 0
// 009d88da  6a03                 push 3
// 009d88dc  e879a3faff           call 0x982c5a
// 009d88e1  8bc6                 mov eax, esi
// 009d88e3  5e                   pop esi
// 009d88e4  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ??5@YGAAVCArchive@@AAV0@AAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarThemeOffice2007.cpp
