// from server: 100% by auto
// roc 2012-06 005c9390  unit: RBX::AdornRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c9390
//
// 005c9390  8b01                 mov eax, dword ptr [ecx]
// 005c9392  50                   push eax
// 005c9393  ff150c23b200         call dword ptr [0xb2230c]
// 005c9399  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??1CComBSTR@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
