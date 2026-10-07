// roc 2011-06 0040e040  unit: RBX::Reflection::ClassDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040e040
//
// 0040e040  64a100000000         mov eax, dword ptr fs:[0]
// 0040e046  6aff                 push -1
// 0040e048  687ed89c00           push 0x9cd87e
// 0040e04d  50                   push eax
// 0040e04e  b801000000           mov eax, 1
// 0040e053  64892500000000       mov dword ptr fs:[0], esp
// 0040e05a  84055418cb00         test byte ptr [0xcb1854], al
// 0040e060  7525                 jne 0x40e087
// 0040e062  09055418cb00         or dword ptr [0xcb1854], eax
// 0040e068  b98017cb00           mov ecx, 0xcb1780
// 0040e06d  c744240800000000     mov dword ptr [esp + 8], 0
// 0040e075  e8b6711d00           call 0x5e5230
// 0040e07a  689003a300           push 0xa30390
// 0040e07f  e8d9d03f00           call 0x80b15d
// 0040e084  83c404               add esp, 4
// 0040e087  8b0c24               mov ecx, dword ptr [esp]
// 0040e08a  b88017cb00           mov eax, 0xcb1780
// 0040e08f  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e096  83c40c               add esp, 0xc
// 0040e099  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
