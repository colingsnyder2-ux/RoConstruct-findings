// roc 2012-06 009da660  unit: CXTPPropExchangeXMLNode  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009da660
//
// 009da660  8b442404             mov eax, dword ptr [esp + 4]
// 009da664  8b00                 mov eax, dword ptr [eax]
// 009da666  56                   push esi
// 009da667  8bf1                 mov esi, ecx
// 009da669  57                   push edi
// 009da66a  8b3e                 mov edi, dword ptr [esi]
// 009da66c  3bf8                 cmp edi, eax
// 009da66e  741a                 je 0x9da68a
// 009da670  8906                 mov dword ptr [esi], eax
// 009da672  85c0                 test eax, eax
// 009da674  7408                 je 0x9da67e
// 009da676  8b08                 mov ecx, dword ptr [eax]
// 009da678  8b5104               mov edx, dword ptr [ecx + 4]
// 009da67b  50                   push eax
// 009da67c  ffd2                 call edx
// 009da67e  85ff                 test edi, edi
// 009da680  7408                 je 0x9da68a
// 009da682  8b07                 mov eax, dword ptr [edi]
// 009da684  8b4808               mov ecx, dword ptr [eax + 8]
// 009da687  57                   push edi
// 009da688  ffd1                 call ecx
// 009da68a  5f                   pop edi
// 009da68b  8bc6                 mov eax, esi
// 009da68d  5e                   pop esi
// 009da68e  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarDatabaseDataProvider.cpp (function ??4?$_com_ptr_t@V?$_com_IIID@U_Recordset@XTPADODB@@$1?_GUID_00000556_0000_0010_8000_00aa006d2ea4@@3U__s_GUID@@B@@@@QAEAAV0@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarDatabaseDataProvider.cpp
