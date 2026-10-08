// from server: 100% by auto
// roc 2011-06 005d1160  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1160
//
// 005d1160  64a100000000         mov eax, dword ptr fs:[0]
// 005d1166  6aff                 push -1
// 005d1168  680e549e00           push 0x9e540e
// 005d116d  50                   push eax
// 005d116e  b801000000           mov eax, 1
// 005d1173  64892500000000       mov dword ptr fs:[0], esp
// 005d117a  84057496cc00         test byte ptr [0xcc9674], al
// 005d1180  7525                 jne 0x5d11a7
// 005d1182  09057496cc00         or dword ptr [0xcc9674], eax
// 005d1188  b9d095cc00           mov ecx, 0xcc95d0
// 005d118d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1195  e836791700           call 0x748ad0
// 005d119a  68207ea300           push 0xa37e20
// 005d119f  e8b99f2300           call 0x80b15d
// 005d11a4  83c404               add esp, 4
// 005d11a7  8b0c24               mov ecx, dword ptr [esp]
// 005d11aa  b8d095cc00           mov eax, 0xcc95d0
// 005d11af  64890d00000000       mov dword ptr fs:[0], ecx
// 005d11b6  83c40c               add esp, 0xc
// 005d11b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
