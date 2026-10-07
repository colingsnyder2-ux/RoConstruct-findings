// roc 2011-06 005d0d70  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d0d70
//
// 005d0d70  64a100000000         mov eax, dword ptr fs:[0]
// 005d0d76  6aff                 push -1
// 005d0d78  68ee529e00           push 0x9e52ee
// 005d0d7d  50                   push eax
// 005d0d7e  b801000000           mov eax, 1
// 005d0d83  64892500000000       mov dword ptr fs:[0], esp
// 005d0d8a  84058c90cc00         test byte ptr [0xcc908c], al
// 005d0d90  7525                 jne 0x5d0db7
// 005d0d92  09058c90cc00         or dword ptr [0xcc908c], eax
// 005d0d98  b9e88fcc00           mov ecx, 0xcc8fe8
// 005d0d9d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0da5  e866060b00           call 0x681410
// 005d0daa  68b07ea300           push 0xa37eb0
// 005d0daf  e8a9a32300           call 0x80b15d
// 005d0db4  83c404               add esp, 4
// 005d0db7  8b0c24               mov ecx, dword ptr [esp]
// 005d0dba  b8e88fcc00           mov eax, 0xcc8fe8
// 005d0dbf  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0dc6  83c40c               add esp, 0xc
// 005d0dc9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
