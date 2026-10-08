// roc 2012-06 00a3b860  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3b860
//
// 00a3b860  8b442404             mov eax, dword ptr [esp + 4]
// 00a3b864  85c0                 test eax, eax
// 00a3b866  7508                 jne 0xa3b870
// 00a3b868  b857000780           mov eax, 0x80070057
// 00a3b86d  c20400               ret 4
// 00a3b870  8b49cc               mov ecx, dword ptr [ecx - 0x34]
// 00a3b873  41                   inc ecx
// 00a3b874  8908                 mov dword ptr [eax], ecx
// 00a3b876  33c0                 xor eax, eax
// 00a3b878  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneTabbedContainer@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
