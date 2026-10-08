// from server: 100% by auto
// roc 2011-06 005d18d0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d18d0
//
// 005d18d0  64a100000000         mov eax, dword ptr fs:[0]
// 005d18d6  6aff                 push -1
// 005d18d8  682e569e00           push 0x9e562e
// 005d18dd  50                   push eax
// 005d18de  b801000000           mov eax, 1
// 005d18e3  64892500000000       mov dword ptr fs:[0], esp
// 005d18ea  84059ca1cc00         test byte ptr [0xcca19c], al
// 005d18f0  7525                 jne 0x5d1917
// 005d18f2  09059ca1cc00         or dword ptr [0xcca19c], eax
// 005d18f8  b9f8a0cc00           mov ecx, 0xcca0f8
// 005d18fd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1905  e836331200           call 0x6f4c40
// 005d190a  68107da300           push 0xa37d10
// 005d190f  e849982300           call 0x80b15d
// 005d1914  83c404               add esp, 4
// 005d1917  8b0c24               mov ecx, dword ptr [esp]
// 005d191a  b8f8a0cc00           mov eax, 0xcca0f8
// 005d191f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1926  83c40c               add esp, 0xc
// 005d1929  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
