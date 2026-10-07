// roc 2008-06 00438060  unit: CPropertyGridItemBrickColor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438060
//
// 00438060  64a100000000         mov eax, dword ptr fs:[0]
// 00438066  6aff                 push -1
// 00438068  685e037c00           push 0x7c035e
// 0043806d  50                   push eax
// 0043806e  b801000000           mov eax, 1
// 00438073  64892500000000       mov dword ptr fs:[0], esp
// 0043807a  8405c0d19600         test byte ptr [0x96d1c0], al
// 00438080  7525                 jne 0x4380a7
// 00438082  0905c0d19600         or dword ptr [0x96d1c0], eax
// 00438088  b9b4d19600           mov ecx, 0x96d1b4
// 0043808d  c744240800000000     mov dword ptr [esp + 8], 0
// 00438095  e8d6af1200           call 0x563070
// 0043809a  68f0a97f00           push 0x7fa9f0
// 0043809f  e80b972600           call 0x6a17af
// 004380a4  83c404               add esp, 4
// 004380a7  8b0c24               mov ecx, dword ptr [esp]
// 004380aa  b8b4d19600           mov eax, 0x96d1b4
// 004380af  64890d00000000       mov dword ptr fs:[0], ecx
// 004380b6  83c40c               add esp, 0xc
// 004380b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
