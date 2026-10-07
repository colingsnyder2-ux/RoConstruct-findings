// roc 2012-06 0042a4d0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042a4d0
//
// 0042a4d0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0042a4d3  50                   push eax
// 0042a4d4  ff15803ab200         call dword ptr [0xb23a80]
// 0042a4da  50                   push eax
// 0042a4db  e886815500           call 0x982666
// 0042a4e0  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?GetDC@CWnd@@QAEPAVCDC@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
