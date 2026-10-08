// from server: 100% by auto
// roc 2011-06 005d0ad0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0ad0
//
// 005d0ad0  64a100000000         mov eax, dword ptr fs:[0]
// 005d0ad6  6aff                 push -1
// 005d0ad8  682e529e00           push 0x9e522e
// 005d0add  50                   push eax
// 005d0ade  b801000000           mov eax, 1
// 005d0ae3  64892500000000       mov dword ptr fs:[0], esp
// 005d0aea  84059c8ccc00         test byte ptr [0xcc8c9c], al
// 005d0af0  7525                 jne 0x5d0b17
// 005d0af2  09059c8ccc00         or dword ptr [0xcc8c9c], eax
// 005d0af8  b9f88bcc00           mov ecx, 0xcc8bf8
// 005d0afd  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0b05  e806961200           call 0x6fa110
// 005d0b0a  68107fa300           push 0xa37f10
// 005d0b0f  e849a62300           call 0x80b15d
// 005d0b14  83c404               add esp, 4
// 005d0b17  8b0c24               mov ecx, dword ptr [esp]
// 005d0b1a  b8f88bcc00           mov eax, 0xcc8bf8
// 005d0b1f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0b26  83c40c               add esp, 0xc
// 005d0b29  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
