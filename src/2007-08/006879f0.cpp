// roc 2007-08 006879f0  unit: CXTPPropExchangeXMLNode  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006879f0
//
// 006879f0  8b442404             mov eax, dword ptr [esp + 4]
// 006879f4  8b00                 mov eax, dword ptr [eax]
// 006879f6  56                   push esi
// 006879f7  8bf1                 mov esi, ecx
// 006879f9  57                   push edi
// 006879fa  8b3e                 mov edi, dword ptr [esi]
// 006879fc  3bf8                 cmp edi, eax
// 006879fe  741a                 je 0x687a1a
// 00687a00  85c0                 test eax, eax
// 00687a02  8906                 mov dword ptr [esi], eax
// 00687a04  7408                 je 0x687a0e
// 00687a06  8b08                 mov ecx, dword ptr [eax]
// 00687a08  8b5104               mov edx, dword ptr [ecx + 4]
// 00687a0b  50                   push eax
// 00687a0c  ffd2                 call edx
// 00687a0e  85ff                 test edi, edi
// 00687a10  7408                 je 0x687a1a
// 00687a12  8b07                 mov eax, dword ptr [edi]
// 00687a14  8b4808               mov ecx, dword ptr [eax + 8]
// 00687a17  57                   push edi
// 00687a18  ffd1                 call ecx
// 00687a1a  5f                   pop edi
// 00687a1b  8bc6                 mov eax, esi
// 00687a1d  5e                   pop esi
// 00687a1e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarDatabaseDataProvider.cpp (function ??4?$_com_ptr_t@V?$_com_IIID@U_Recordset@XTPADODB@@$1?_GUID_00000556_0000_0010_8000_00aa006d2ea4@@3U__s_GUID@@B@@@@QAEAAV0@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarDatabaseDataProvider.cpp
