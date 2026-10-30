// from server: 100% by auto
// roc 2012-06 00984f00  unit: CXTPPropertyGridItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984f00
//
// 00984f00  8b442404             mov eax, dword ptr [esp + 4]
// 00984f04  8b5004               mov edx, dword ptr [eax + 4]
// 00984f07  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00984f0a  52                   push edx
// 00984f0b  50                   push eax
// 00984f0c  ff15003cb200         call dword ptr [0xb23c00]
// 00984f12  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?ReleaseDC@CWnd@@QAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
