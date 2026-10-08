// roc 2009-12 0044b020  unit: G3D::_WeakPtr  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044b020
//
// 0044b020  56                   push esi
// 0044b021  8b7108               mov esi, dword ptr [ecx + 8]
// 0044b024  85f6                 test esi, esi
// 0044b026  741b                 je 0x44b043
// 0044b028  8b0e                 mov ecx, dword ptr [esi]
// 0044b02a  8b01                 mov eax, dword ptr [ecx]
// 0044b02c  8b5004               mov edx, dword ptr [eax + 4]
// 0044b02f  ffd2                 call edx
// 0044b031  8bc6                 mov eax, esi
// 0044b033  8b7604               mov esi, dword ptr [esi + 4]
// 0044b036  50                   push eax
// 0044b037  e81e883a00           call 0x7f385a
// 0044b03c  83c404               add esp, 4
// 0044b03f  85f6                 test esi, esi
// 0044b041  75e5                 jne 0x44b028
// 0044b043  5e                   pop esi
// 0044b044  c3                   ret 
// library rbxgs-appdraw/AdornG3D.cpp (function ?ReferenceCountedObject_zeroWeakPointers@ReferenceCountedObject@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
