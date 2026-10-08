// roc 2009-06 00781b50  unit: CXTPDockingPane  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781b50
//
// 00781b50  8b442404             mov eax, dword ptr [esp + 4]
// 00781b54  85c0                 test eax, eax
// 00781b56  7508                 jne 0x781b60
// 00781b58  b857000780           mov eax, 0x80070057
// 00781b5d  c20400               ret 4
// 00781b60  33d2                 xor edx, edx
// 00781b62  39515c               cmp dword ptr [ecx + 0x5c], edx
// 00781b65  0f95c2               setne dl
// 00781b68  8910                 mov dword ptr [eax], edx
// 00781b6a  33c0                 xor eax, eax
// 00781b6c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleChildCount@CXTPDockingPane@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
