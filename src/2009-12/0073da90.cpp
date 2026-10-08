// roc 2009-12 0073da90  unit: G3D::Win32Window  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073da90
//
// 0073da90  8a81ac000000         mov al, byte ptr [ecx + 0xac]
// 0073da96  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?mouseVisible@Win32Window@G3D@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
