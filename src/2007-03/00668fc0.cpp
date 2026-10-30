// roc 2007-03 00668fc0  unit: seg_00660000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00668fc0
//
// 00668fc0  8b442404             mov eax, dword ptr [esp + 4]
// 00668fc4  8b00                 mov eax, dword ptr [eax]
// 00668fc6  56                   push esi
// 00668fc7  8bf1                 mov esi, ecx
// 00668fc9  57                   push edi
// 00668fca  8b3e                 mov edi, dword ptr [esi]
// 00668fcc  3bf8                 cmp edi, eax
// 00668fce  741a                 je 0x668fea
// 00668fd0  85c0                 test eax, eax
// 00668fd2  8906                 mov dword ptr [esi], eax
// 00668fd4  7408                 je 0x668fde
// 00668fd6  8b08                 mov ecx, dword ptr [eax]
// 00668fd8  8b5104               mov edx, dword ptr [ecx + 4]
// 00668fdb  50                   push eax
// 00668fdc  ffd2                 call edx
// 00668fde  85ff                 test edi, edi
// 00668fe0  7408                 je 0x668fea
// 00668fe2  8b07                 mov eax, dword ptr [edi]
// 00668fe4  8b4808               mov ecx, dword ptr [eax + 8]
// 00668fe7  57                   push edi
// 00668fe8  ffd1                 call ecx
// 00668fea  5f                   pop edi
// 00668feb  8bc6                 mov eax, esi
// 00668fed  5e                   pop esi
// 00668fee  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarDatabaseDataProvider.cpp (function ??4?$_com_ptr_t@V?$_com_IIID@U_Recordset@XTPADODB@@$1?_GUID_00000556_0000_0010_8000_00aa006d2ea4@@3U__s_GUID@@B@@@@QAEAAV0@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarDatabaseDataProvider.cpp
