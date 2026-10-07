// roc 2007-08 00685970  unit: CInstanceRecord::CNameItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685970
//
// 00685970  56                   push esi
// 00685971  8bf1                 mov esi, ecx
// 00685973  833e00               cmp dword ptr [esi], 0
// 00685976  750a                 jne 0x685982
// 00685978  6803400080           push 0x80004003
// 0068597d  e81ec0faff           call 0x6319a0
// 00685982  8b06                 mov eax, dword ptr [esi]
// 00685984  5e                   pop esi
// 00685985  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarDatabaseDataProvider.cpp (function ??C?$_com_ptr_t@V?$_com_IIID@U_Connection@XTPADODB@@$1?_GUID_00000550_0000_0010_8000_00aa006d2ea4@@3U__s_GUID@@B@@@@QBEPAU_Connection@XTPADODB@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarDatabaseDataProvider.cpp
