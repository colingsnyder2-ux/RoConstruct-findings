// roc 2011-06 0086e360  unit: CXTPDockingPane  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e360
//
// 0086e360  56                   push esi
// 0086e361  8bf1                 mov esi, ecx
// 0086e363  8d4e20               lea ecx, [esi + 0x20]
// 0086e366  e8f5390500           call 0x8c1d60
// 0086e36b  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 0086e371  0b86c4000000         or eax, dword ptr [esi + 0xc4]
// 0086e377  5e                   pop esi
// 0086e378  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetOptions@CXTPDockingPane@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
