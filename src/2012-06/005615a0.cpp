// from server: 100% by auto
// roc 2012-06 005615a0  unit: RBX::VTextBox::?$FactoryProduct::Creator  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005615a0
//
// 005615a0  8b442404             mov eax, dword ptr [esp + 4]
// 005615a4  51                   push ecx
// 005615a5  50                   push eax
// 005615a6  e8d5fcffff           call 0x561280
// 005615ab  83c408               add esp, 8
// 005615ae  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?ConvertSystemTimeToVariantTime@COleDateTime@ATL@@IAEHABU_SYSTEMTIME@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
