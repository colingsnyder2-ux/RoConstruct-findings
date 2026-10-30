// roc 2009-06 00781b30  unit: CXTPDockingPane  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781b30
//
// 00781b30  56                   push esi
// 00781b31  8bf1                 mov esi, ecx
// 00781b33  8d4e20               lea ecx, [esi + 0x20]
// 00781b36  e8c5410500           call 0x7d5d00
// 00781b3b  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 00781b41  0b86c4000000         or eax, dword ptr [esi + 0xc4]
// 00781b47  5e                   pop esi
// 00781b48  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetOptions@CXTPDockingPane@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
