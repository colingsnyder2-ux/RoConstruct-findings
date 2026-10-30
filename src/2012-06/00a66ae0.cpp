// roc 2012-06 00a66ae0  unit: CXTColorSelectorCtrl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a66ae0
//
// 00a66ae0  8b01                 mov eax, dword ptr [ecx]
// 00a66ae2  8b542404             mov edx, dword ptr [esp + 4]
// 00a66ae6  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 00a66aec  6a00                 push 0
// 00a66aee  52                   push edx
// 00a66aef  ffd0                 call eax
// 00a66af1  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Controls\Popup\XTPColorSelectorCtrl.cpp (function ?EndSelection@CXTPColorSelectorCtrl@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Popup/XTPColorSelectorCtrl.cpp
