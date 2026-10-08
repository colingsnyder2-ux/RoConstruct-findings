// from server: 100% by auto
// roc 2009-06 005ef630  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ef630
//
// 005ef630  64a100000000         mov eax, dword ptr fs:[0]
// 005ef636  6aff                 push -1
// 005ef638  687e598600           push 0x86597e
// 005ef63d  50                   push eax
// 005ef63e  b801000000           mov eax, 1
// 005ef643  64892500000000       mov dword ptr fs:[0], esp
// 005ef64a  840524a2a400         test byte ptr [0xa4a224], al
// 005ef650  7525                 jne 0x5ef677
// 005ef652  090524a2a400         or dword ptr [0xa4a224], eax
// 005ef658  b938a1a400           mov ecx, 0xa4a138
// 005ef65d  c744240800000000     mov dword ptr [esp + 8], 0
// 005ef665  e8b6fa0700           call 0x66f120
// 005ef66a  68108a8900           push 0x898a10
// 005ef66f  e887a41200           call 0x719afb
// 005ef674  83c404               add esp, 4
// 005ef677  8b0c24               mov ecx, dword ptr [esp]
// 005ef67a  b838a1a400           mov eax, 0xa4a138
// 005ef67f  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef686  83c40c               add esp, 0xc
// 005ef689  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
