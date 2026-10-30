// roc 2007-03 00679350  unit: seg_00670000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00679350
//
// 00679350  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00679354  66c7000300           mov word ptr [eax], 3
// 00679359  c7400800000000       mov dword ptr [eax + 8], 0
// 00679360  33c0                 xor eax, eax
// 00679362  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleHitTest@CXTPDockingPane@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
