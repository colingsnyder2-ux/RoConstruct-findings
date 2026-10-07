// roc 2007-08 005b8f00  unit: RBX::VDecal::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8f00
//
// 005b8f00  64a100000000         mov eax, dword ptr fs:[0]
// 005b8f06  6aff                 push -1
// 005b8f08  683e927500           push 0x75923e
// 005b8f0d  50                   push eax
// 005b8f0e  b801000000           mov eax, 1
// 005b8f13  64892500000000       mov dword ptr fs:[0], esp
// 005b8f1a  840598658c00         test byte ptr [0x8c6598], al
// 005b8f20  7525                 jne 0x5b8f47
// 005b8f22  090598658c00         or dword ptr [0x8c6598], eax
// 005b8f28  b900658c00           mov ecx, 0x8c6500
// 005b8f2d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8f35  e8266dfbff           call 0x56fc60
// 005b8f3a  68e0bb7700           push 0x77bbe0
// 005b8f3f  e8df7d0700           call 0x630d23
// 005b8f44  83c404               add esp, 4
// 005b8f47  8b0c24               mov ecx, dword ptr [esp]
// 005b8f4a  b800658c00           mov eax, 0x8c6500
// 005b8f4f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8f56  83c40c               add esp, 0xc
// 005b8f59  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
