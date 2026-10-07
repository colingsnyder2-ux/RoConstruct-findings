// roc 2008-06 00707470  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707470
//
// 00707470  83791000             cmp dword ptr [ecx + 0x10], 0
// 00707474  7503                 jne 0x707479
// 00707476  33c0                 xor eax, eax
// 00707478  c3                   ret 
// 00707479  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0070747c  8b01                 mov eax, dword ptr [ecx]
// 0070747e  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00707481  ffe2                 jmp edx
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsHidden@CXTPDockingPane@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
