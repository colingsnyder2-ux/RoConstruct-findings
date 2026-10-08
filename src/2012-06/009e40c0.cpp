// roc 2012-06 009e40c0  unit: CXTPDockingPane  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e40c0
//
// 009e40c0  8b442404             mov eax, dword ptr [esp + 4]
// 009e40c4  85c0                 test eax, eax
// 009e40c6  7508                 jne 0x9e40d0
// 009e40c8  b857000780           mov eax, 0x80070057
// 009e40cd  c20400               ret 4
// 009e40d0  33d2                 xor edx, edx
// 009e40d2  39515c               cmp dword ptr [ecx + 0x5c], edx
// 009e40d5  0f95c2               setne dl
// 009e40d8  8910                 mov dword ptr [eax], edx
// 009e40da  33c0                 xor eax, eax
// 009e40dc  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleChildCount@CXTPDockingPane@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
