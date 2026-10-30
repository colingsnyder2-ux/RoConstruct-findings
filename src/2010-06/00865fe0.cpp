// roc 2010-06 00865fe0  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865fe0
//
// 00865fe0  8b442404             mov eax, dword ptr [esp + 4]
// 00865fe4  85c0                 test eax, eax
// 00865fe6  7508                 jne 0x865ff0
// 00865fe8  b857000780           mov eax, 0x80070057
// 00865fed  c20400               ret 4
// 00865ff0  8b49cc               mov ecx, dword ptr [ecx - 0x34]
// 00865ff3  41                   inc ecx
// 00865ff4  8908                 mov dword ptr [eax], ecx
// 00865ff6  33c0                 xor eax, eax
// 00865ff8  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneTabbedContainer@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
