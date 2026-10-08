// from server: 100% by auto
// roc 2008-06 004672d0  unit: CSettingsDialog  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004672d0
//
// 004672d0  51                   push ecx
// 004672d1  ff15b0218000         call dword ptr [0x8021b0]
// 004672d7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?increment@AtomicInt32@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
