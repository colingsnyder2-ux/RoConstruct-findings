// roc 2008-06 0078e720  unit: CXTColorSelectorCtrl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078e720
//
// 0078e720  8b01                 mov eax, dword ptr [ecx]
// 0078e722  8b542404             mov edx, dword ptr [esp + 4]
// 0078e726  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0078e72c  6a00                 push 0
// 0078e72e  52                   push edx
// 0078e72f  ffd0                 call eax
// 0078e731  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorSelectorCtrl.cpp (function ?EndSelection@CXTColorSelectorCtrl@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorSelectorCtrl.cpp
