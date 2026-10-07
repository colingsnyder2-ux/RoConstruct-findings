// roc 2008-06 00565360  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565360
//
// 00565360  64a100000000         mov eax, dword ptr fs:[0]
// 00565366  6aff                 push -1
// 00565368  685ef37c00           push 0x7cf35e
// 0056536d  50                   push eax
// 0056536e  b801000000           mov eax, 1
// 00565373  64892500000000       mov dword ptr fs:[0], esp
// 0056537a  8405c8429700         test byte ptr [0x9742c8], al
// 00565380  7525                 jne 0x5653a7
// 00565382  0905c8429700         or dword ptr [0x9742c8], eax
// 00565388  b9e0419700           mov ecx, 0x9741e0
// 0056538d  c744240800000000     mov dword ptr [esp + 8], 0
// 00565395  e8c6f6ffff           call 0x564a60
// 0056539a  68c0cf7f00           push 0x7fcfc0
// 0056539f  e80bc41300           call 0x6a17af
// 005653a4  83c404               add esp, 4
// 005653a7  8b0c24               mov ecx, dword ptr [esp]
// 005653aa  b8e0419700           mov eax, 0x9741e0
// 005653af  64890d00000000       mov dword ptr fs:[0], ecx
// 005653b6  83c40c               add esp, 0xc
// 005653b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
