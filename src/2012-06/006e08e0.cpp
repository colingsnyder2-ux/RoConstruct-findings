// roc 2012-06 006e08e0  unit: RBX::DataModel  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006e08e0
//
// 006e08e0  64a100000000         mov eax, dword ptr fs:[0]
// 006e08e6  6aff                 push -1
// 006e08e8  68aeb5ab00           push 0xabb5ae
// 006e08ed  50                   push eax
// 006e08ee  b801000000           mov eax, 1
// 006e08f3  64892500000000       mov dword ptr fs:[0], esp
// 006e08fa  8405f4fce200         test byte ptr [0xe2fcf4], al
// 006e0900  7525                 jne 0x6e0927
// 006e0902  0905f4fce200         or dword ptr [0xe2fcf4], eax
// 006e0908  b948fce200           mov ecx, 0xe2fc48
// 006e090d  c744240800000000     mov dword ptr [esp + 8], 0
// 006e0915  e886f4ffff           call 0x6dfda0
// 006e091a  68806cb100           push 0xb16c80
// 006e091f  e8d1282a00           call 0x9831f5
// 006e0924  83c404               add esp, 4
// 006e0927  8b0c24               mov ecx, dword ptr [esp]
// 006e092a  b848fce200           mov eax, 0xe2fc48
// 006e092f  64890d00000000       mov dword ptr fs:[0], ecx
// 006e0936  83c40c               add esp, 0xc
// 006e0939  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
