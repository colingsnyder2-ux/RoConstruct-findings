// roc 2011-06 008c3430  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c3430
//
// 008c3430  8b442404             mov eax, dword ptr [esp + 4]
// 008c3434  85c0                 test eax, eax
// 008c3436  7508                 jne 0x8c3440
// 008c3438  b857000780           mov eax, 0x80070057
// 008c343d  c20400               ret 4
// 008c3440  8b49cc               mov ecx, dword ptr [ecx - 0x34]
// 008c3443  41                   inc ecx
// 008c3444  8908                 mov dword ptr [eax], ecx
// 008c3446  33c0                 xor eax, eax
// 008c3448  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneTabbedContainer@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
