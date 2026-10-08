// from server: 100% by auto
// roc 2010-06 009c1668  unit: seg_009c0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c1668
//
// 009c1668  68f0ca5200           push 0x52caf0
// 009c166d  6a06                 push 6
// 009c166f  6a04                 push 4
// 009c1671  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 009c1674  83c00c               add eax, 0xc
// 009c1677  50                   push eax
// 009c1678  e86174deff           call 0x7a8ade
// 009c167d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function __unwindfunclet$??1Sky@G3D@@UAE@XZ$1)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
