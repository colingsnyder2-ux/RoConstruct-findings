// from server: 100% by auto
// roc 2011-06 005d0980  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0980
//
// 005d0980  64a100000000         mov eax, dword ptr fs:[0]
// 005d0986  6aff                 push -1
// 005d0988  68ce519e00           push 0x9e51ce
// 005d098d  50                   push eax
// 005d098e  b801000000           mov eax, 1
// 005d0993  64892500000000       mov dword ptr fs:[0], esp
// 005d099a  8405a48acc00         test byte ptr [0xcc8aa4], al
// 005d09a0  7525                 jne 0x5d09c7
// 005d09a2  0905a48acc00         or dword ptr [0xcc8aa4], eax
// 005d09a8  b9008acc00           mov ecx, 0xcc8a00
// 005d09ad  c744240800000000     mov dword ptr [esp + 8], 0
// 005d09b5  e8f6f9fbff           call 0x5903b0
// 005d09ba  68407fa300           push 0xa37f40
// 005d09bf  e899a72300           call 0x80b15d
// 005d09c4  83c404               add esp, 4
// 005d09c7  8b0c24               mov ecx, dword ptr [esp]
// 005d09ca  b8008acc00           mov eax, 0xcc8a00
// 005d09cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005d09d6  83c40c               add esp, 0xc
// 005d09d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
