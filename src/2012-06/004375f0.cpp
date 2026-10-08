// from server: 100% by auto
// roc 2012-06 004375f0  unit: CMainFrame  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004375f0
//
// 004375f0  8b01                 mov eax, dword ptr [ecx]
// 004375f2  85c0                 test eax, eax
// 004375f4  7408                 je 0x4375fe
// 004375f6  8b08                 mov ecx, dword ptr [eax]
// 004375f8  8b5108               mov edx, dword ptr [ecx + 8]
// 004375fb  50                   push eax
// 004375fc  ffd2                 call edx
// 004375fe  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCustomProperties.cpp (function ?_Release@?$_com_ptr_t@V?$_com_IIID@UIXMLDOMDocument@XTPXML@@$1?_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCustomProperties.cpp
