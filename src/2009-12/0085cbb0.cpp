// roc 2009-12 0085cbb0  unit: CXTPDockingPane  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085cbb0
//
// 0085cbb0  8b442404             mov eax, dword ptr [esp + 4]
// 0085cbb4  85c0                 test eax, eax
// 0085cbb6  7508                 jne 0x85cbc0
// 0085cbb8  b857000780           mov eax, 0x80070057
// 0085cbbd  c20400               ret 4
// 0085cbc0  33d2                 xor edx, edx
// 0085cbc2  39515c               cmp dword ptr [ecx + 0x5c], edx
// 0085cbc5  0f95c2               setne dl
// 0085cbc8  8910                 mov dword ptr [eax], edx
// 0085cbca  33c0                 xor eax, eax
// 0085cbcc  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleChildCount@CXTPDockingPane@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
