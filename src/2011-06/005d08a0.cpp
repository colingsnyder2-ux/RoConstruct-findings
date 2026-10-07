// roc 2011-06 005d08a0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d08a0
//
// 005d08a0  64a100000000         mov eax, dword ptr fs:[0]
// 005d08a6  6aff                 push -1
// 005d08a8  688e519e00           push 0x9e518e
// 005d08ad  50                   push eax
// 005d08ae  b801000000           mov eax, 1
// 005d08b3  64892500000000       mov dword ptr fs:[0], esp
// 005d08ba  84055489cc00         test byte ptr [0xcc8954], al
// 005d08c0  7525                 jne 0x5d08e7
// 005d08c2  09055489cc00         or dword ptr [0xcc8954], eax
// 005d08c8  b9b088cc00           mov ecx, 0xcc88b0
// 005d08cd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d08d5  e8c6861700           call 0x748fa0
// 005d08da  68607fa300           push 0xa37f60
// 005d08df  e879a82300           call 0x80b15d
// 005d08e4  83c404               add esp, 4
// 005d08e7  8b0c24               mov ecx, dword ptr [esp]
// 005d08ea  b8b088cc00           mov eax, 0xcc88b0
// 005d08ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005d08f6  83c40c               add esp, 0xc
// 005d08f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
