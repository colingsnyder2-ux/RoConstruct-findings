// roc 2009-12 00814710  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814710
//
// 00814710  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 00814716  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?hdc@Win32Window@G3D@@QBEPAUHDC__@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
