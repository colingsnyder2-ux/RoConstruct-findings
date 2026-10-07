// roc 2008-06 0075ab30  unit: CXTPDockingPaneWindowSelect  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ab30
//
// 0075ab30  c70184588600         mov dword ptr [ecx], 0x865884
// 0075ab36  83c108               add ecx, 8
// 0075ab39  e9c2e9ffff           jmp 0x759500
// library xtp-11.2.2/Source\Calendar\XTPCalendarMAPIDataProvider.cpp (function ??1CXTPMAPIBinary@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarMAPIDataProvider.cpp
