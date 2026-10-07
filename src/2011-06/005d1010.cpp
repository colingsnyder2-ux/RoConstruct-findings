// roc 2011-06 005d1010  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d1010
//
// 005d1010  64a100000000         mov eax, dword ptr fs:[0]
// 005d1016  6aff                 push -1
// 005d1018  68ae539e00           push 0x9e53ae
// 005d101d  50                   push eax
// 005d101e  b801000000           mov eax, 1
// 005d1023  64892500000000       mov dword ptr fs:[0], esp
// 005d102a  84057c94cc00         test byte ptr [0xcc947c], al
// 005d1030  7525                 jne 0x5d1057
// 005d1032  09057c94cc00         or dword ptr [0xcc947c], eax
// 005d1038  b9d893cc00           mov ecx, 0xcc93d8
// 005d103d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1045  e886a00b00           call 0x68b0d0
// 005d104a  68507ea300           push 0xa37e50
// 005d104f  e809a12300           call 0x80b15d
// 005d1054  83c404               add esp, 4
// 005d1057  8b0c24               mov ecx, dword ptr [esp]
// 005d105a  b8d893cc00           mov eax, 0xcc93d8
// 005d105f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1066  83c40c               add esp, 0xc
// 005d1069  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
