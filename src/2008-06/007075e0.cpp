// from server: 100% by auto
// roc 2008-06 007075e0  unit: CXTPDockingPane  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007075e0
//
// 007075e0  56                   push esi
// 007075e1  8bf1                 mov esi, ecx
// 007075e3  8d4e20               lea ecx, [esi + 0x20]
// 007075e6  e8b55e0500           call 0x75d4a0
// 007075eb  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 007075f1  0b86c4000000         or eax, dword ptr [esi + 0xc4]
// 007075f7  5e                   pop esi
// 007075f8  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetOptions@CXTPDockingPane@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
