// roc 2012-06 009d88f0  unit: CXTPPropExchangeXMLNode  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d88f0
//
// 009d88f0  56                   push esi
// 009d88f1  8bf1                 mov esi, ecx
// 009d88f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009d88f7  33c0                 xor eax, eax
// 009d88f9  51                   push ecx
// 009d88fa  8bce                 mov ecx, esi
// 009d88fc  668906               mov word ptr [esi], ax
// 009d88ff  e840100c00           call 0xa99944
// 009d8904  8bc6                 mov eax, esi
// 009d8906  5e                   pop esi
// 009d8907  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarMAPIDataProvider.cpp (function ??0COleVariant@@QAE@ABVCByteArray@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarMAPIDataProvider.cpp
