// roc 2009-06 0070c660  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070c660
//
// 0070c660  64a100000000         mov eax, dword ptr fs:[0]
// 0070c666  6aff                 push -1
// 0070c668  689e3b8700           push 0x873b9e
// 0070c66d  50                   push eax
// 0070c66e  b801000000           mov eax, 1
// 0070c673  64892500000000       mov dword ptr fs:[0], esp
// 0070c67a  84050807a500         test byte ptr [0xa50708], al
// 0070c680  7525                 jne 0x70c6a7
// 0070c682  09050807a500         or dword ptr [0xa50708], eax
// 0070c688  b96805a500           mov ecx, 0xa50568
// 0070c68d  c744240800000000     mov dword ptr [esp + 8], 0
// 0070c695  e876fbffff           call 0x70c210
// 0070c69a  68b0d28900           push 0x89d2b0
// 0070c69f  e857d40000           call 0x719afb
// 0070c6a4  83c404               add esp, 4
// 0070c6a7  8b0c24               mov ecx, dword ptr [esp]
// 0070c6aa  b86805a500           mov eax, 0xa50568
// 0070c6af  64890d00000000       mov dword ptr fs:[0], ecx
// 0070c6b6  83c40c               add esp, 0xc
// 0070c6b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
