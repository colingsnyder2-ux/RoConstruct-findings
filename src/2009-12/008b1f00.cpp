// roc 2009-12 008b1f00  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1f00
//
// 008b1f00  8b442404             mov eax, dword ptr [esp + 4]
// 008b1f04  85c0                 test eax, eax
// 008b1f06  7508                 jne 0x8b1f10
// 008b1f08  b857000780           mov eax, 0x80070057
// 008b1f0d  c20400               ret 4
// 008b1f10  8b49cc               mov ecx, dword ptr [ecx - 0x34]
// 008b1f13  41                   inc ecx
// 008b1f14  8908                 mov dword ptr [eax], ecx
// 008b1f16  33c0                 xor eax, eax
// 008b1f18  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneTabbedContainer@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
