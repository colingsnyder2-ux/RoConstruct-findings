// from server: 100% by auto
// roc 2012-06 0054af80  unit: RBX::VInsertService::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0054af80
//
// 0054af80  64a100000000         mov eax, dword ptr fs:[0]
// 0054af86  6aff                 push -1
// 0054af88  685ed2aa00           push 0xaad25e
// 0054af8d  50                   push eax
// 0054af8e  b801000000           mov eax, 1
// 0054af93  64892500000000       mov dword ptr fs:[0], esp
// 0054af9a  84059417e200         test byte ptr [0xe21794], al
// 0054afa0  7525                 jne 0x54afc7
// 0054afa2  09059417e200         or dword ptr [0xe21794], eax
// 0054afa8  b9e816e200           mov ecx, 0xe216e8
// 0054afad  c744240800000000     mov dword ptr [esp + 8], 0
// 0054afb5  e816fcffff           call 0x54abd0
// 0054afba  68d039b100           push 0xb139d0
// 0054afbf  e831824300           call 0x9831f5
// 0054afc4  83c404               add esp, 4
// 0054afc7  8b0c24               mov ecx, dword ptr [esp]
// 0054afca  b8e816e200           mov eax, 0xe216e8
// 0054afcf  64890d00000000       mov dword ptr fs:[0], ecx
// 0054afd6  83c40c               add esp, 0xc
// 0054afd9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
