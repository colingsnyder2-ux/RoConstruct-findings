// from server: 100% by auto
// roc 2012-06 009e42d0  unit: CXTPDockingPane  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e42d0
//
// 009e42d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009e42d4  b903000000           mov ecx, 3
// 009e42d9  668908               mov word ptr [eax], cx
// 009e42dc  c7400800000000       mov dword ptr [eax + 8], 0
// 009e42e3  33c0                 xor eax, eax
// 009e42e5  c20c00               ret 0xc
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleHitTest@CXTPDockingPane@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
