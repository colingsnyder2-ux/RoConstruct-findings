// from server: 100% by auto
// roc 2011-06 005d0a60  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0a60
//
// 005d0a60  64a100000000         mov eax, dword ptr fs:[0]
// 005d0a66  6aff                 push -1
// 005d0a68  680e529e00           push 0x9e520e
// 005d0a6d  50                   push eax
// 005d0a6e  b801000000           mov eax, 1
// 005d0a73  64892500000000       mov dword ptr fs:[0], esp
// 005d0a7a  8405f48bcc00         test byte ptr [0xcc8bf4], al
// 005d0a80  7525                 jne 0x5d0aa7
// 005d0a82  0905f48bcc00         or dword ptr [0xcc8bf4], eax
// 005d0a88  b9508bcc00           mov ecx, 0xcc8b50
// 005d0a8d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0a95  e896971200           call 0x6fa230
// 005d0a9a  68207fa300           push 0xa37f20
// 005d0a9f  e8b9a62300           call 0x80b15d
// 005d0aa4  83c404               add esp, 4
// 005d0aa7  8b0c24               mov ecx, dword ptr [esp]
// 005d0aaa  b8508bcc00           mov eax, 0xcc8b50
// 005d0aaf  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0ab6  83c40c               add esp, 0xc
// 005d0ab9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
