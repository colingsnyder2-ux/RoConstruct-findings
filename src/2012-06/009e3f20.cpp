// from server: 100% by auto
// roc 2012-06 009e3f20  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3f20
//
// 009e3f20  83791000             cmp dword ptr [ecx + 0x10], 0
// 009e3f24  7503                 jne 0x9e3f29
// 009e3f26  33c0                 xor eax, eax
// 009e3f28  c3                   ret 
// 009e3f29  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 009e3f2c  8b01                 mov eax, dword ptr [ecx]
// 009e3f2e  8b501c               mov edx, dword ptr [eax + 0x1c]
// 009e3f31  ffe2                 jmp edx
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?IsHidden@CXTPDockingPane@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
