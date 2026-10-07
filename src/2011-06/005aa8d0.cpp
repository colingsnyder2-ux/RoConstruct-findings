// roc 2011-06 005aa8d0  unit: RBX::FriendService::W4FriendEventType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005aa8d0
//
// 005aa8d0  64a100000000         mov eax, dword ptr fs:[0]
// 005aa8d6  6aff                 push -1
// 005aa8d8  68fe179e00           push 0x9e17fe
// 005aa8dd  50                   push eax
// 005aa8de  b801000000           mov eax, 1
// 005aa8e3  64892500000000       mov dword ptr fs:[0], esp
// 005aa8ea  84051cdccb00         test byte ptr [0xcbdc1c], al
// 005aa8f0  7525                 jne 0x5aa917
// 005aa8f2  09051cdccb00         or dword ptr [0xcbdc1c], eax
// 005aa8f8  b978dbcb00           mov ecx, 0xcbdb78
// 005aa8fd  c744240800000000     mov dword ptr [esp + 8], 0
// 005aa905  e886f9ffff           call 0x5aa290
// 005aa90a  686056a300           push 0xa35660
// 005aa90f  e849082600           call 0x80b15d
// 005aa914  83c404               add esp, 4
// 005aa917  8b0c24               mov ecx, dword ptr [esp]
// 005aa91a  b878dbcb00           mov eax, 0xcbdb78
// 005aa91f  64890d00000000       mov dword ptr fs:[0], ecx
// 005aa926  83c40c               add esp, 0xc
// 005aa929  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
