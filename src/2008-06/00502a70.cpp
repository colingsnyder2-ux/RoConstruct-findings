// from server: 100% by auto
// roc 2008-06 00502a70  unit: G3D::Sphere  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502a70
//
// 00502a70  56                   push esi
// 00502a71  8bf1                 mov esi, ecx
// 00502a73  8b06                 mov eax, dword ptr [esi]
// 00502a75  85c0                 test eax, eax
// 00502a77  7429                 je 0x502aa2
// 00502a79  83c004               add eax, 4
// 00502a7c  50                   push eax
// 00502a7d  ff15ac218000         call dword ptr [0x8021ac]
// 00502a83  85c0                 test eax, eax
// 00502a85  7515                 jne 0x502a9c
// 00502a87  8b0e                 mov ecx, dword ptr [esi]
// 00502a89  e80283f5ff           call 0x45ad90
// 00502a8e  8b0e                 mov ecx, dword ptr [esi]
// 00502a90  85c9                 test ecx, ecx
// 00502a92  7408                 je 0x502a9c
// 00502a94  8b01                 mov eax, dword ptr [ecx]
// 00502a96  8b10                 mov edx, dword ptr [eax]
// 00502a98  6a01                 push 1
// 00502a9a  ffd2                 call edx
// 00502a9c  c70600000000         mov dword ptr [esi], 0
// 00502aa2  5e                   pop esi
// 00502aa3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?zeroPointer@?$ReferenceCountedPointer@VRenderbuffer@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
