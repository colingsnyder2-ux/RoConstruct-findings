// roc 2008-06 00761ab0  unit: CXTPDockingPaneSplitterContainer  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00761ab0
//
// 00761ab0  56                   push esi
// 00761ab1  8bf1                 mov esi, ecx
// 00761ab3  837e1000             cmp dword ptr [esi + 0x10], 0
// 00761ab7  740f                 je 0x761ac8
// 00761ab9  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00761abc  8b01                 mov eax, dword ptr [ecx]
// 00761abe  8b542408             mov edx, dword ptr [esp + 8]
// 00761ac2  8b4034               mov eax, dword ptr [eax + 0x34]
// 00761ac5  52                   push edx
// 00761ac6  ffd0                 call eax
// 00761ac8  8d4ee0               lea ecx, [esi - 0x20]
// 00761acb  e850fdffff           call 0x761820
// 00761ad0  8d46e0               lea eax, [esi - 0x20]
// 00761ad3  f7d8                 neg eax
// 00761ad5  1bc0                 sbb eax, eax
// 00761ad7  23c6                 and eax, esi
// 00761ad9  6a01                 push 1
// 00761adb  50                   push eax
// 00761adc  8bce                 mov ecx, esi
// 00761ade  e8bdb9ffff           call 0x75d4a0
// 00761ae3  8bc8                 mov ecx, eax
// 00761ae5  e80641f8ff           call 0x6e5bf0
// 00761aea  5e                   pop esi
// 00761aeb  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnChildContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
