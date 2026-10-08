// from server: 100% by auto
// roc 2008-06 005653d0  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005653d0
//
// 005653d0  64a100000000         mov eax, dword ptr fs:[0]
// 005653d6  6aff                 push -1
// 005653d8  687ef37c00           push 0x7cf37e
// 005653dd  50                   push eax
// 005653de  b801000000           mov eax, 1
// 005653e3  64892500000000       mov dword ptr fs:[0], esp
// 005653ea  8405b8439700         test byte ptr [0x9743b8], al
// 005653f0  7525                 jne 0x565417
// 005653f2  0905b8439700         or dword ptr [0x9743b8], eax
// 005653f8  b9d0429700           mov ecx, 0x9742d0
// 005653fd  c744240800000000     mov dword ptr [esp + 8], 0
// 00565405  e8d6f7ffff           call 0x564be0
// 0056540a  68b0cf7f00           push 0x7fcfb0
// 0056540f  e89bc31300           call 0x6a17af
// 00565414  83c404               add esp, 4
// 00565417  8b0c24               mov ecx, dword ptr [esp]
// 0056541a  b8d0429700           mov eax, 0x9742d0
// 0056541f  64890d00000000       mov dword ptr fs:[0], ecx
// 00565426  83c40c               add esp, 0xc
// 00565429  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
