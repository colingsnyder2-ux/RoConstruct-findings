// roc 2011-06 005aa860  unit: RBX::FriendService::W4FriendEventType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005aa860
//
// 005aa860  64a100000000         mov eax, dword ptr fs:[0]
// 005aa866  6aff                 push -1
// 005aa868  68de179e00           push 0x9e17de
// 005aa86d  50                   push eax
// 005aa86e  b801000000           mov eax, 1
// 005aa873  64892500000000       mov dword ptr fs:[0], esp
// 005aa87a  840574dbcb00         test byte ptr [0xcbdb74], al
// 005aa880  7525                 jne 0x5aa8a7
// 005aa882  090574dbcb00         or dword ptr [0xcbdb74], eax
// 005aa888  b9d0dacb00           mov ecx, 0xcbdad0
// 005aa88d  c744240800000000     mov dword ptr [esp + 8], 0
// 005aa895  e8b6f8ffff           call 0x5aa150
// 005aa89a  687056a300           push 0xa35670
// 005aa89f  e8b9082600           call 0x80b15d
// 005aa8a4  83c404               add esp, 4
// 005aa8a7  8b0c24               mov ecx, dword ptr [esp]
// 005aa8aa  b8d0dacb00           mov eax, 0xcbdad0
// 005aa8af  64890d00000000       mov dword ptr fs:[0], ecx
// 005aa8b6  83c40c               add esp, 0xc
// 005aa8b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
