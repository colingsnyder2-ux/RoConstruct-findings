// from server: 100% by auto
// roc 2010-06 00483b20  unit: G3D::GImage  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00483b20
//
// 00483b20  56                   push esi
// 00483b21  8b7108               mov esi, dword ptr [ecx + 8]
// 00483b24  85f6                 test esi, esi
// 00483b26  741b                 je 0x483b43
// 00483b28  8b0e                 mov ecx, dword ptr [esi]
// 00483b2a  8b01                 mov eax, dword ptr [ecx]
// 00483b2c  8b5004               mov edx, dword ptr [eax + 4]
// 00483b2f  ffd2                 call edx
// 00483b31  8bc6                 mov eax, esi
// 00483b33  8b7604               mov esi, dword ptr [esi + 4]
// 00483b36  50                   push eax
// 00483b37  e85e3e3200           call 0x7a799a
// 00483b3c  83c404               add esp, 4
// 00483b3f  85f6                 test esi, esi
// 00483b41  75e5                 jne 0x483b28
// 00483b43  5e                   pop esi
// 00483b44  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?ReferenceCountedObject_zeroWeakPointers@ReferenceCountedObject@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
