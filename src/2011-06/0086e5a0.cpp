// roc 2011-06 0086e5a0  unit: CXTPDockingPane  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e5a0
//
// 0086e5a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086e5a4  b903000000           mov ecx, 3
// 0086e5a9  668908               mov word ptr [eax], cx
// 0086e5ac  c7400800000000       mov dword ptr [eax + 8], 0
// 0086e5b3  33c0                 xor eax, eax
// 0086e5b5  c20c00               ret 0xc
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleHitTest@CXTPDockingPane@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
