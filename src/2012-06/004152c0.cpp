// roc 2012-06 004152c0  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct::Creator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004152c0
//
// 004152c0  85c9                 test ecx, ecx
// 004152c2  7503                 jne 0x4152c7
// 004152c4  33c0                 xor eax, eax
// 004152c6  c3                   ret 
// 004152c7  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004152ca  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?GetSafeHwnd@CWnd@@QBEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
