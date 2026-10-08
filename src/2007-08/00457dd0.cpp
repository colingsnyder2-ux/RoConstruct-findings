// from server: 100% by auto
// roc 2007-08 00457dd0  unit: G3D::GImage  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457dd0
//
// 00457dd0  56                   push esi
// 00457dd1  8b7108               mov esi, dword ptr [ecx + 8]
// 00457dd4  85f6                 test esi, esi
// 00457dd6  741b                 je 0x457df3
// 00457dd8  8b0e                 mov ecx, dword ptr [esi]
// 00457dda  8b01                 mov eax, dword ptr [ecx]
// 00457ddc  8b5004               mov edx, dword ptr [eax + 4]
// 00457ddf  ffd2                 call edx
// 00457de1  8bc6                 mov eax, esi
// 00457de3  8b7604               mov esi, dword ptr [esi + 4]
// 00457de6  50                   push eax
// 00457de7  e8767e1d00           call 0x62fc62
// 00457dec  83c404               add esp, 4
// 00457def  85f6                 test esi, esi
// 00457df1  75e5                 jne 0x457dd8
// 00457df3  5e                   pop esi
// 00457df4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?ReferenceCountedObject_zeroWeakPointers@ReferenceCountedObject@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
