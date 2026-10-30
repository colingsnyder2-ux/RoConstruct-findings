// roc 2007-03 00679140  unit: seg_00670000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00679140
//
// 00679140  8b442404             mov eax, dword ptr [esp + 4]
// 00679144  85c0                 test eax, eax
// 00679146  7508                 jne 0x679150
// 00679148  b857000780           mov eax, 0x80070057
// 0067914d  c20400               ret 4
// 00679150  33d2                 xor edx, edx
// 00679152  39515c               cmp dword ptr [ecx + 0x5c], edx
// 00679155  0f95c2               setne dl
// 00679158  8910                 mov dword ptr [eax], edx
// 0067915a  33c0                 xor eax, eax
// 0067915c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleChildCount@CXTPDockingPane@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
