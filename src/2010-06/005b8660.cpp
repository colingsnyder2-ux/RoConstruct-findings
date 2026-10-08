// from server: 100% by auto
// roc 2010-06 005b8660  unit: RBX::CharacterMesh::W4BodyPart::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b8660
//
// 005b8660  64a100000000         mov eax, dword ptr fs:[0]
// 005b8666  6aff                 push -1
// 005b8668  68de519900           push 0x9951de
// 005b866d  50                   push eax
// 005b866e  b801000000           mov eax, 1
// 005b8673  64892500000000       mov dword ptr fs:[0], esp
// 005b867a  8405ec6ac100         test byte ptr [0xc16aec], al
// 005b8680  7525                 jne 0x5b86a7
// 005b8682  0905ec6ac100         or dword ptr [0xc16aec], eax
// 005b8688  b9006ac100           mov ecx, 0xc16a00
// 005b868d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8695  e896720e00           call 0x69f930
// 005b869a  6800109e00           push 0x9e1000
// 005b869f  e8bf031f00           call 0x7a8a63
// 005b86a4  83c404               add esp, 4
// 005b86a7  8b0c24               mov ecx, dword ptr [esp]
// 005b86aa  b8006ac100           mov eax, 0xc16a00
// 005b86af  64890d00000000       mov dword ptr fs:[0], ecx
// 005b86b6  83c40c               add esp, 0xc
// 005b86b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
