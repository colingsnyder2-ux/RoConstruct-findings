// roc 2008-06 006ff650  unit: CXTPPropExchangeXMLNode  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ff650
//
// 006ff650  8b442404             mov eax, dword ptr [esp + 4]
// 006ff654  8b00                 mov eax, dword ptr [eax]
// 006ff656  56                   push esi
// 006ff657  8bf1                 mov esi, ecx
// 006ff659  57                   push edi
// 006ff65a  8b3e                 mov edi, dword ptr [esi]
// 006ff65c  3bf8                 cmp edi, eax
// 006ff65e  741a                 je 0x6ff67a
// 006ff660  8906                 mov dword ptr [esi], eax
// 006ff662  85c0                 test eax, eax
// 006ff664  7408                 je 0x6ff66e
// 006ff666  8b08                 mov ecx, dword ptr [eax]
// 006ff668  8b5104               mov edx, dword ptr [ecx + 4]
// 006ff66b  50                   push eax
// 006ff66c  ffd2                 call edx
// 006ff66e  85ff                 test edi, edi
// 006ff670  7408                 je 0x6ff67a
// 006ff672  8b07                 mov eax, dword ptr [edi]
// 006ff674  8b4808               mov ecx, dword ptr [eax + 8]
// 006ff677  57                   push edi
// 006ff678  ffd1                 call ecx
// 006ff67a  5f                   pop edi
// 006ff67b  8bc6                 mov eax, esi
// 006ff67d  5e                   pop esi
// 006ff67e  c20400               ret 4
// library xtp-11.2.2/Source\Calendar\XTPCalendarDatabaseDataProvider.cpp (function ??4?$_com_ptr_t@V?$_com_IIID@U_Recordset@XTPADODB@@$1?_GUID_00000556_0000_0010_8000_00aa006d2ea4@@3U__s_GUID@@B@@@@QAEAAV0@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarDatabaseDataProvider.cpp
