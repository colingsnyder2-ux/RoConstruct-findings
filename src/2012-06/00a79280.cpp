// from server: 100% by auto
// roc 2012-06 00a79280  unit: CXTWndHook  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79280
//
// 00a79280  56                   push esi
// 00a79281  6a0a                 push 0xa
// 00a79283  8bf1                 mov esi, ecx
// 00a79285  e8ee080200           call 0xa99b78
// 00a7928a  c7063498c200         mov dword ptr [esi], 0xc29834
// 00a79290  8bc6                 mov eax, esi
// 00a79292  5e                   pop esi
// 00a79293  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ??0?$CXTPCalendarTypedPtrAutoDeleteMap@HPAVCXTPCalendarViewPartBrushValue@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarThemeOffice2007.cpp
