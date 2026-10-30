// from server: 100% by auto
// roc 2012-06 00416a50  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00416a50
//
// 00416a50  8b442404             mov eax, dword ptr [esp + 4]
// 00416a54  56                   push esi
// 00416a55  8bf1                 mov esi, ecx
// 00416a57  8906                 mov dword ptr [esi], eax
// 00416a59  85c0                 test eax, eax
// 00416a5b  7408                 je 0x416a65
// 00416a5d  8b08                 mov ecx, dword ptr [eax]
// 00416a5f  8b5104               mov edx, dword ptr [ecx + 4]
// 00416a62  50                   push eax
// 00416a63  ffd2                 call edx
// 00416a65  8bc6                 mov eax, esi
// 00416a67  5e                   pop esi
// 00416a68  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarDatabaseDataProvider.cpp (function ??$?0U_Connection@XTPADODB@@@?$_com_ptr_t@V?$_com_IIID@U_Connection@XTPADODB@@$1?_GUID_00000550_0000_0010_8000_00aa006d2ea4@@3U__s_GUID@@B@@@@QAE@PAU_Connection@XTPADODB@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarDatabaseDataProvider.cpp
