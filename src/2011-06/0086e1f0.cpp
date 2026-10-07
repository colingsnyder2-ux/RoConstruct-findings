// roc 2011-06 0086e1f0  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e1f0
//
// 0086e1f0  83791000             cmp dword ptr [ecx + 0x10], 0
// 0086e1f4  7503                 jne 0x86e1f9
// 0086e1f6  33c0                 xor eax, eax
// 0086e1f8  c3                   ret 
// 0086e1f9  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0086e1fc  8b01                 mov eax, dword ptr [ecx]
// 0086e1fe  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0086e201  ffe2                 jmp edx
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?IsHidden@CXTPDockingPane@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
