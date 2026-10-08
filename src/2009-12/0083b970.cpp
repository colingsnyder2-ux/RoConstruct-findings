// roc 2009-12 0083b970  unit: CXTPToolBar::CControlButtonExpand  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b970
//
// 0083b970  51                   push ecx
// 0083b971  ff15d0b29800         call dword ptr [0x98b2d0]
// 0083b977  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
