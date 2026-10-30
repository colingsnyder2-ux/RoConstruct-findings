// from server: 100% by auto
// roc 2008-06 0075eba0  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075eba0
//
// 0075eba0  8b442404             mov eax, dword ptr [esp + 4]
// 0075eba4  85c0                 test eax, eax
// 0075eba6  7508                 jne 0x75ebb0
// 0075eba8  b857000780           mov eax, 0x80070057
// 0075ebad  c20400               ret 4
// 0075ebb0  8b49cc               mov ecx, dword ptr [ecx - 0x34]
// 0075ebb3  41                   inc ecx
// 0075ebb4  8908                 mov dword ptr [eax], ecx
// 0075ebb6  33c0                 xor eax, eax
// 0075ebb8  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneTabbedContainer@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
