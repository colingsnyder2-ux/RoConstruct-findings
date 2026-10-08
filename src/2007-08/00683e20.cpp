// from server: 100% by auto
// roc 2007-08 00683e20  unit: CXTPPropertyGrid  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00683e20
//
// 00683e20  85c9                 test ecx, ecx
// 00683e22  7417                 je 0x683e3b
// 00683e24  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00683e27  85c0                 test eax, eax
// 00683e29  7410                 je 0x683e3b
// 00683e2b  6885010000           push 0x185
// 00683e30  6a00                 push 0
// 00683e32  6a00                 push 0
// 00683e34  50                   push eax
// 00683e35  ff151cee7700         call dword ptr [0x77ee1c]
// 00683e3b  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?RedrawControl@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGrid.cpp
