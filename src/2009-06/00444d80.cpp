// from server: 100% by auto
// roc 2009-06 00444d80  unit: G3D::_WeakPtr  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00444d80
//
// 00444d80  56                   push esi
// 00444d81  8b7108               mov esi, dword ptr [ecx + 8]
// 00444d84  85f6                 test esi, esi
// 00444d86  741b                 je 0x444da3
// 00444d88  8b0e                 mov ecx, dword ptr [esi]
// 00444d8a  8b01                 mov eax, dword ptr [ecx]
// 00444d8c  8b5004               mov edx, dword ptr [eax + 4]
// 00444d8f  ffd2                 call edx
// 00444d91  8bc6                 mov eax, esi
// 00444d93  8b7604               mov esi, dword ptr [esi + 4]
// 00444d96  50                   push eax
// 00444d97  e8963c2d00           call 0x718a32
// 00444d9c  83c404               add esp, 4
// 00444d9f  85f6                 test esi, esi
// 00444da1  75e5                 jne 0x444d88
// 00444da3  5e                   pop esi
// 00444da4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?ReferenceCountedObject_zeroWeakPointers@ReferenceCountedObject@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
