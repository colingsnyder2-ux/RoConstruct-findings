// roc 2009-12 0085cb80  unit: CXTPDockingPane  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085cb80
//
// 0085cb80  56                   push esi
// 0085cb81  8bf1                 mov esi, ecx
// 0085cb83  8d4e20               lea ecx, [esi + 0x20]
// 0085cb86  e8b53c0500           call 0x8b0840
// 0085cb8b  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 0085cb91  0b86c4000000         or eax, dword ptr [esi + 0xc4]
// 0085cb97  5e                   pop esi
// 0085cb98  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetOptions@CXTPDockingPane@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
