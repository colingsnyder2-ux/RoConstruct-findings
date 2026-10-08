// from server: 100% by auto
// roc 2007-08 0068f810  unit: CXTPDockingPane  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f810
//
// 0068f810  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0068f814  66c7000300           mov word ptr [eax], 3
// 0068f819  c7400800000000       mov dword ptr [eax + 8], 0
// 0068f820  33c0                 xor eax, eax
// 0068f822  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleHitTest@CXTPDockingPane@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
