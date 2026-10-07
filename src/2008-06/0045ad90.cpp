// roc 2008-06 0045ad90  unit: G3D::GImage  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ad90
//
// 0045ad90  56                   push esi
// 0045ad91  8b7108               mov esi, dword ptr [ecx + 8]
// 0045ad94  85f6                 test esi, esi
// 0045ad96  741b                 je 0x45adb3
// 0045ad98  8b0e                 mov ecx, dword ptr [esi]
// 0045ad9a  8b01                 mov eax, dword ptr [ecx]
// 0045ad9c  8b5004               mov edx, dword ptr [eax + 4]
// 0045ad9f  ffd2                 call edx
// 0045ada1  8bc6                 mov eax, esi
// 0045ada3  8b7604               mov esi, dword ptr [esi + 4]
// 0045ada6  50                   push eax
// 0045ada7  e8ce582400           call 0x6a067a
// 0045adac  83c404               add esp, 4
// 0045adaf  85f6                 test esi, esi
// 0045adb1  75e5                 jne 0x45ad98
// 0045adb3  5e                   pop esi
// 0045adb4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?ReferenceCountedObject_zeroWeakPointers@ReferenceCountedObject@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
