// roc 2011-06 00862270  unit: CXTPPropExchangeXMLNode  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00862270
//
// 00862270  8b442404             mov eax, dword ptr [esp + 4]
// 00862274  8b00                 mov eax, dword ptr [eax]
// 00862276  56                   push esi
// 00862277  8bf1                 mov esi, ecx
// 00862279  57                   push edi
// 0086227a  8b3e                 mov edi, dword ptr [esi]
// 0086227c  3bf8                 cmp edi, eax
// 0086227e  741a                 je 0x86229a
// 00862280  8906                 mov dword ptr [esi], eax
// 00862282  85c0                 test eax, eax
// 00862284  7408                 je 0x86228e
// 00862286  8b08                 mov ecx, dword ptr [eax]
// 00862288  8b5104               mov edx, dword ptr [ecx + 4]
// 0086228b  50                   push eax
// 0086228c  ffd2                 call edx
// 0086228e  85ff                 test edi, edi
// 00862290  7408                 je 0x86229a
// 00862292  8b07                 mov eax, dword ptr [edi]
// 00862294  8b4808               mov ecx, dword ptr [eax + 8]
// 00862297  57                   push edi
// 00862298  ffd1                 call ecx
// 0086229a  5f                   pop edi
// 0086229b  8bc6                 mov eax, esi
// 0086229d  5e                   pop esi
// 0086229e  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarDatabaseDataProvider.cpp (function ??4?$_com_ptr_t@V?$_com_IIID@U_Recordset@XTPADODB@@$1?_GUID_00000556_0000_0010_8000_00aa006d2ea4@@3U__s_GUID@@B@@@@QAEAAV0@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarDatabaseDataProvider.cpp
