// roc 2011-06 0053c460  unit: G3D::Log  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053c460
//
// 0053c460  56                   push esi
// 0053c461  8b7108               mov esi, dword ptr [ecx + 8]
// 0053c464  85f6                 test esi, esi
// 0053c466  741b                 je 0x53c483
// 0053c468  8b0e                 mov ecx, dword ptr [esi]
// 0053c46a  8b01                 mov eax, dword ptr [ecx]
// 0053c46c  8b5004               mov edx, dword ptr [eax + 4]
// 0053c46f  ffd2                 call edx
// 0053c471  8bc6                 mov eax, esi
// 0053c473  8b7604               mov esi, dword ptr [esi + 4]
// 0053c476  50                   push eax
// 0053c477  e8dcdb2c00           call 0x80a058
// 0053c47c  83c404               add esp, 4
// 0053c47f  85f6                 test esi, esi
// 0053c481  75e5                 jne 0x53c468
// 0053c483  5e                   pop esi
// 0053c484  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?ReferenceCountedObject_zeroWeakPointers@ReferenceCountedObject@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
