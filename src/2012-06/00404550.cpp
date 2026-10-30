// from server: 100% by auto
// roc 2012-06 00404550  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00404550
//
// 00404550  8b4108               mov eax, dword ptr [ecx + 8]
// 00404553  50                   push eax
// 00404554  ff151051b200         call dword ptr [0xb25110]
// 0040455a  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ?GetTextColor@CDC@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
