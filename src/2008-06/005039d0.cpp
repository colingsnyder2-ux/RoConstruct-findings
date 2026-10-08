// from server: 100% by auto
// roc 2008-06 005039d0  unit: G3D::Lighting  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005039d0
//
// 005039d0  c70124748200         mov dword ptr [ecx], 0x827424
// 005039d6  83c108               add ecx, 8
// 005039d9  e94225f7ff           jmp 0x475f20
// library xtp-11.2.2/Source\Calendar\XTPCalendarMAPIDataProvider.cpp (function ??1CXTPMAPIBinary@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarMAPIDataProvider.cpp
