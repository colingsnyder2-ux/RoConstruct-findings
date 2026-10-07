// roc 2012-06 009d8870  unit: CXTPPropExchangeXMLNode  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d8870
//
// 009d8870  8b442408             mov eax, dword ptr [esp + 8]
// 009d8874  56                   push esi
// 009d8875  8b742408             mov esi, dword ptr [esp + 8]
// 009d8879  6a10                 push 0x10
// 009d887b  50                   push eax
// 009d887c  8bce                 mov ecx, esi
// 009d887e  e8e3a3faff           call 0x982c66
// 009d8883  8bc6                 mov eax, esi
// 009d8885  5e                   pop esi
// 009d8886  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ??6@YGAAVCArchive@@AAV0@ABUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarThemeOffice2007.cpp
