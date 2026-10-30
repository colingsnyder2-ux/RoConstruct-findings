// roc 2007-03 00666f60  unit: seg_00660000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00666f60
//
// 00666f60  56                   push esi
// 00666f61  8bf1                 mov esi, ecx
// 00666f63  833e00               cmp dword ptr [esi], 0
// 00666f66  750a                 jne 0x666f72
// 00666f68  6803400080           push 0x80004003
// 00666f6d  e8ce8efbff           call 0x61fe40
// 00666f72  8b06                 mov eax, dword ptr [esi]
// 00666f74  5e                   pop esi
// 00666f75  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarDatabaseDataProvider.cpp (function ??C?$_com_ptr_t@V?$_com_IIID@U_Connection@XTPADODB@@$1?_GUID_00000550_0000_0010_8000_00aa006d2ea4@@3U__s_GUID@@B@@@@QBEPAU_Connection@XTPADODB@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarDatabaseDataProvider.cpp
