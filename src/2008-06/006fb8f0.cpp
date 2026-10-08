// from server: 100% by auto
// roc 2008-06 006fb8f0  unit: CXTPPropertyGrid  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb8f0
//
// 006fb8f0  85c9                 test ecx, ecx
// 006fb8f2  7417                 je 0x6fb90b
// 006fb8f4  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006fb8f7  85c0                 test eax, eax
// 006fb8f9  7410                 je 0x6fb90b
// 006fb8fb  6885010000           push 0x185
// 006fb900  6a00                 push 0
// 006fb902  6a00                 push 0
// 006fb904  50                   push eax
// 006fb905  ff15742c8000         call dword ptr [0x802c74]
// 006fb90b  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?RedrawControl@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
