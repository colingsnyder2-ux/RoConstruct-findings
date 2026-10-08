// from server: 100% by auto
// roc 2011-06 004ddd80  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ddd80
//
// 004ddd80  64a100000000         mov eax, dword ptr fs:[0]
// 004ddd86  6aff                 push -1
// 004ddd88  682eae9d00           push 0x9dae2e
// 004ddd8d  50                   push eax
// 004ddd8e  b801000000           mov eax, 1
// 004ddd93  64892500000000       mov dword ptr fs:[0], esp
// 004ddd9a  84054477cb00         test byte ptr [0xcb7744], al
// 004ddda0  7525                 jne 0x4dddc7
// 004ddda2  09054477cb00         or dword ptr [0xcb7744], eax
// 004ddda8  b9a076cb00           mov ecx, 0xcb76a0
// 004dddad  c744240800000000     mov dword ptr [esp + 8], 0
// 004dddb5  e8065b0000           call 0x4e38c0
// 004dddba  681034a300           push 0xa33410
// 004dddbf  e899d33200           call 0x80b15d
// 004dddc4  83c404               add esp, 4
// 004dddc7  8b0c24               mov ecx, dword ptr [esp]
// 004dddca  b8a076cb00           mov eax, 0xcb76a0
// 004dddcf  64890d00000000       mov dword ptr fs:[0], ecx
// 004dddd6  83c40c               add esp, 0xc
// 004dddd9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
