// roc 2007-08 0067f2c0  unit: CXTPControlSelector  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f2c0
//
// 0067f2c0  8bc1                 mov eax, ecx
// 0067f2c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067f2c6  8908                 mov dword ptr [eax], ecx
// 0067f2c8  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ??0AtomicInt32@G3D@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
