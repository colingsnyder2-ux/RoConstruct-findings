// roc 2009-12 006fbf40  unit: G3D::Win32Window  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fbf40
//
// 006fbf40  8a81ad000000         mov al, byte ptr [ecx + 0xad]
// 006fbf46  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?inputCapture@Win32Window@G3D@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
