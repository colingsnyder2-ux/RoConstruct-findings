// roc 2010-06 00810b50  unit: CXTPDockingPane  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810b50
//
// 00810b50  56                   push esi
// 00810b51  8bf1                 mov esi, ecx
// 00810b53  8d4e20               lea ecx, [esi + 0x20]
// 00810b56  e8b53d0500           call 0x864910
// 00810b5b  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 00810b61  0b86c4000000         or eax, dword ptr [esi + 0xc4]
// 00810b67  5e                   pop esi
// 00810b68  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetOptions@CXTPDockingPane@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
