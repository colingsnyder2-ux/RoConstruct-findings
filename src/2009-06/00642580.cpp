// roc 2009-06 00642580  unit: RBX::Accoutrement  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00642580
//
// 00642580  64a100000000         mov eax, dword ptr fs:[0]
// 00642586  6aff                 push -1
// 00642588  68cea68600           push 0x86a6ce
// 0064258d  50                   push eax
// 0064258e  b801000000           mov eax, 1
// 00642593  64892500000000       mov dword ptr fs:[0], esp
// 0064259a  8405c8bca400         test byte ptr [0xa4bcc8], al
// 006425a0  7525                 jne 0x6425c7
// 006425a2  0905c8bca400         or dword ptr [0xa4bcc8], eax
// 006425a8  b9e0bba400           mov ecx, 0xa4bbe0
// 006425ad  c744240800000000     mov dword ptr [esp + 8], 0
// 006425b5  e8a6e1ffff           call 0x640760
// 006425ba  68e0a08900           push 0x89a0e0
// 006425bf  e837750d00           call 0x719afb
// 006425c4  83c404               add esp, 4
// 006425c7  8b0c24               mov ecx, dword ptr [esp]
// 006425ca  b8e0bba400           mov eax, 0xa4bbe0
// 006425cf  64890d00000000       mov dword ptr fs:[0], ecx
// 006425d6  83c40c               add esp, 0xc
// 006425d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
