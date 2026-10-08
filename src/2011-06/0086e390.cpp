// roc 2011-06 0086e390  unit: CXTPDockingPane  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e390
//
// 0086e390  8b442404             mov eax, dword ptr [esp + 4]
// 0086e394  85c0                 test eax, eax
// 0086e396  7508                 jne 0x86e3a0
// 0086e398  b857000780           mov eax, 0x80070057
// 0086e39d  c20400               ret 4
// 0086e3a0  33d2                 xor edx, edx
// 0086e3a2  39515c               cmp dword ptr [ecx + 0x5c], edx
// 0086e3a5  0f95c2               setne dl
// 0086e3a8  8910                 mov dword ptr [eax], edx
// 0086e3aa  33c0                 xor eax, eax
// 0086e3ac  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleChildCount@CXTPDockingPane@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
