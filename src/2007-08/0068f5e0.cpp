// from server: 100% by auto
// roc 2007-08 0068f5e0  unit: CXTPDockingPane  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f5e0
//
// 0068f5e0  56                   push esi
// 0068f5e1  8bf1                 mov esi, ecx
// 0068f5e3  8d4e20               lea ecx, [esi + 0x20]
// 0068f5e6  e8550f0500           call 0x6e0540
// 0068f5eb  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 0068f5f1  0b86c4000000         or eax, dword ptr [esi + 0xc4]
// 0068f5f7  5e                   pop esi
// 0068f5f8  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?GetOptions@CXTPDockingPane@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
