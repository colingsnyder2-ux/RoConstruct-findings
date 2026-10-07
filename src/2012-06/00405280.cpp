// roc 2012-06 00405280  unit: VCApp::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00405280
//
// 00405280  8d4104               lea eax, [ecx + 4]
// 00405283  3901                 cmp dword ptr [ecx], eax
// 00405285  7405                 je 0x40528c
// 00405287  e944f8ffff           jmp 0x404ad0
// 0040528c  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ??1?$CTempBuffer@D$0IA@VCCRTAllocator@ATL@@@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarThemeOffice2007.cpp
