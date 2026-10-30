// roc 2009-06 007d73c0  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d73c0
//
// 007d73c0  8b442404             mov eax, dword ptr [esp + 4]
// 007d73c4  85c0                 test eax, eax
// 007d73c6  7508                 jne 0x7d73d0
// 007d73c8  b857000780           mov eax, 0x80070057
// 007d73cd  c20400               ret 4
// 007d73d0  8b49cc               mov ecx, dword ptr [ecx - 0x34]
// 007d73d3  41                   inc ecx
// 007d73d4  8908                 mov dword ptr [eax], ecx
// 007d73d6  33c0                 xor eax, eax
// 007d73d8  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneTabbedContainer@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
