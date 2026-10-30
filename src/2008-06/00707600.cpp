// from server: 100% by auto
// roc 2008-06 00707600  unit: CXTPDockingPane  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707600
//
// 00707600  8b442404             mov eax, dword ptr [esp + 4]
// 00707604  85c0                 test eax, eax
// 00707606  7508                 jne 0x707610
// 00707608  b857000780           mov eax, 0x80070057
// 0070760d  c20400               ret 4
// 00707610  33d2                 xor edx, edx
// 00707612  39515c               cmp dword ptr [ecx + 0x5c], edx
// 00707615  0f95c2               setne dl
// 00707618  8910                 mov dword ptr [eax], edx
// 0070761a  33c0                 xor eax, eax
// 0070761c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleChildCount@CXTPDockingPane@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
