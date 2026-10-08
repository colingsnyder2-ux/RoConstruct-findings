// roc 2011-06 0084f000  unit: CXTPDockingPaneManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084f000
//
// 0084f000  8b442404             mov eax, dword ptr [esp + 4]
// 0084f004  85c0                 test eax, eax
// 0084f006  7508                 jne 0x84f010
// 0084f008  b857000780           mov eax, 0x80070057
// 0084f00d  c20400               ret 4
// 0084f010  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 0084f013  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0084f016  8910                 mov dword ptr [eax], edx
// 0084f018  33c0                 xor eax, eax
// 0084f01a  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleChildCount@CXTPDockingPaneManager@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
