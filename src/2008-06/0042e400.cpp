// roc 2008-06 0042e400  unit: VCLuaFunction::?$CComObject  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e400
//
// 0042e400  8b09                 mov ecx, dword ptr [ecx]
// 0042e402  85c9                 test ecx, ecx
// 0042e404  7405                 je 0x42e40b
// 0042e406  e9d9272700           jmp 0x6a0be4
// 0042e40b  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarCustomProperties.cpp (function ??1CXTPPropExchangeSection@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarCustomProperties.cpp
