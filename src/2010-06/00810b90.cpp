// roc 2010-06 00810b90  unit: CXTPDockingPane  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810b90
//
// 00810b90  8b442404             mov eax, dword ptr [esp + 4]
// 00810b94  85c0                 test eax, eax
// 00810b96  7508                 jne 0x810ba0
// 00810b98  b857000780           mov eax, 0x80070057
// 00810b9d  c20400               ret 4
// 00810ba0  33d2                 xor edx, edx
// 00810ba2  39515c               cmp dword ptr [ecx + 0x5c], edx
// 00810ba5  0f95c2               setne dl
// 00810ba8  8910                 mov dword ptr [eax], edx
// 00810baa  33c0                 xor eax, eax
// 00810bac  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleChildCount@CXTPDockingPane@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
