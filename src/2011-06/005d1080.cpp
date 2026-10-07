// roc 2011-06 005d1080  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1080
//
// 005d1080  64a100000000         mov eax, dword ptr fs:[0]
// 005d1086  6aff                 push -1
// 005d1088  68ce539e00           push 0x9e53ce
// 005d108d  50                   push eax
// 005d108e  b801000000           mov eax, 1
// 005d1093  64892500000000       mov dword ptr fs:[0], esp
// 005d109a  84052495cc00         test byte ptr [0xcc9524], al
// 005d10a0  7525                 jne 0x5d10c7
// 005d10a2  09052495cc00         or dword ptr [0xcc9524], eax
// 005d10a8  b98094cc00           mov ecx, 0xcc9480
// 005d10ad  c744240800000000     mov dword ptr [esp + 8], 0
// 005d10b5  e8163d0c00           call 0x694dd0
// 005d10ba  68407ea300           push 0xa37e40
// 005d10bf  e899a02300           call 0x80b15d
// 005d10c4  83c404               add esp, 4
// 005d10c7  8b0c24               mov ecx, dword ptr [esp]
// 005d10ca  b88094cc00           mov eax, 0xcc9480
// 005d10cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005d10d6  83c40c               add esp, 0xc
// 005d10d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
