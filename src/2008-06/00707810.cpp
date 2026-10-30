// from server: 100% by auto
// roc 2008-06 00707810  unit: CXTPDockingPane  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707810
//
// 00707810  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00707814  b903000000           mov ecx, 3
// 00707819  668908               mov word ptr [eax], cx
// 0070781c  c7400800000000       mov dword ptr [eax + 8], 0
// 00707823  33c0                 xor eax, eax
// 00707825  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?AccessibleHitTest@CXTPDockingPane@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
