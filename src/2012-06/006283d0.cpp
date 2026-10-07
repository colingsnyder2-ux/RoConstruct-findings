// roc 2012-06 006283d0  unit: G3D::Log  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006283d0
//
// 006283d0  56                   push esi
// 006283d1  8b7108               mov esi, dword ptr [ecx + 8]
// 006283d4  85f6                 test esi, esi
// 006283d6  741b                 je 0x6283f3
// 006283d8  8b0e                 mov ecx, dword ptr [esi]
// 006283da  8b01                 mov eax, dword ptr [ecx]
// 006283dc  8b5004               mov edx, dword ptr [eax + 4]
// 006283df  ffd2                 call edx
// 006283e1  8bc6                 mov eax, esi
// 006283e3  8b7604               mov esi, dword ptr [esi + 4]
// 006283e6  50                   push eax
// 006283e7  e8289d3500           call 0x982114
// 006283ec  83c404               add esp, 4
// 006283ef  85f6                 test esi, esi
// 006283f1  75e5                 jne 0x6283d8
// 006283f3  5e                   pop esi
// 006283f4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?ReferenceCountedObject_zeroWeakPointers@ReferenceCountedObject@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
