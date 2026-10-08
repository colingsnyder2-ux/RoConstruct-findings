// from server: 100% by auto
// roc 2008-06 0045ad80  unit: G3D::GImage  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ad80
//
// 0045ad80  51                   push ecx
// 0045ad81  ff15ac218000         call dword ptr [0x8021ac]
// 0045ad87  f7d8                 neg eax
// 0045ad89  1bc0                 sbb eax, eax
// 0045ad8b  f7d8                 neg eax
// 0045ad8d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?decrement@AtomicInt32@G3D@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
