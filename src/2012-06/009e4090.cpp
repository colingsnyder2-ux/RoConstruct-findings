// roc 2012-06 009e4090  unit: CXTPDockingPane  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e4090
//
// 009e4090  56                   push esi
// 009e4091  8bf1                 mov esi, ecx
// 009e4093  8d4e20               lea ecx, [esi + 0x20]
// 009e4096  e8d5600500           call 0xa3a170
// 009e409b  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 009e40a1  0b86c4000000         or eax, dword ptr [esi + 0xc4]
// 009e40a7  5e                   pop esi
// 009e40a8  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetOptions@CXTPDockingPane@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
