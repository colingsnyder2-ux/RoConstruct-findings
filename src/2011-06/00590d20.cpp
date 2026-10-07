// roc 2011-06 00590d20  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00590d20
//
// 00590d20  64a100000000         mov eax, dword ptr fs:[0]
// 00590d26  6aff                 push -1
// 00590d28  688e059e00           push 0x9e058e
// 00590d2d  50                   push eax
// 00590d2e  b801000000           mov eax, 1
// 00590d33  64892500000000       mov dword ptr fs:[0], esp
// 00590d3a  8405f4aecb00         test byte ptr [0xcbaef4], al
// 00590d40  7525                 jne 0x590d67
// 00590d42  0905f4aecb00         or dword ptr [0xcbaef4], eax
// 00590d48  b950aecb00           mov ecx, 0xcbae50
// 00590d4d  c744240800000000     mov dword ptr [esp + 8], 0
// 00590d55  e8f6f2ffff           call 0x590050
// 00590d5a  68b04ca300           push 0xa34cb0
// 00590d5f  e8f9a32700           call 0x80b15d
// 00590d64  83c404               add esp, 4
// 00590d67  8b0c24               mov ecx, dword ptr [esp]
// 00590d6a  b850aecb00           mov eax, 0xcbae50
// 00590d6f  64890d00000000       mov dword ptr fs:[0], ecx
// 00590d76  83c40c               add esp, 0xc
// 00590d79  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
