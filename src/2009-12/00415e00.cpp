// roc 2009-12 00415e00  unit: PasteVerb  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00415e00
//
// 00415e00  51                   push ecx
// 00415e01  ff1534ba9800         call dword ptr [0x98ba34]
// 00415e07  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
