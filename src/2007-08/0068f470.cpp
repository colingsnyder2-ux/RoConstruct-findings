// roc 2007-08 0068f470  unit: CXTPDockingPane  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f470
//
// 0068f470  83791000             cmp dword ptr [ecx + 0x10], 0
// 0068f474  7503                 jne 0x68f479
// 0068f476  33c0                 xor eax, eax
// 0068f478  c3                   ret 
// 0068f479  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0068f47c  8b01                 mov eax, dword ptr [ecx]
// 0068f47e  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0068f481  ffe2                 jmp edx
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?IsHidden@CXTPDockingPane@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
