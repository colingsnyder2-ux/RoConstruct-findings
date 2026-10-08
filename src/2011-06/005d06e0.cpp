// from server: 100% by auto
// roc 2011-06 005d06e0  unit: RBX::DialogRoot::W4DialogTone::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d06e0
//
// 005d06e0  64a100000000         mov eax, dword ptr fs:[0]
// 005d06e6  6aff                 push -1
// 005d06e8  680e519e00           push 0x9e510e
// 005d06ed  50                   push eax
// 005d06ee  b801000000           mov eax, 1
// 005d06f3  64892500000000       mov dword ptr fs:[0], esp
// 005d06fa  8405b486cc00         test byte ptr [0xcc86b4], al
// 005d0700  7525                 jne 0x5d0727
// 005d0702  0905b486cc00         or dword ptr [0xcc86b4], eax
// 005d0708  b91086cc00           mov ecx, 0xcc8610
// 005d070d  c744240800000000     mov dword ptr [esp + 8], 0
// 005d0715  e846251600           call 0x732c60
// 005d071a  68a07fa300           push 0xa37fa0
// 005d071f  e839aa2300           call 0x80b15d
// 005d0724  83c404               add esp, 4
// 005d0727  8b0c24               mov ecx, dword ptr [esp]
// 005d072a  b81086cc00           mov eax, 0xcc8610
// 005d072f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0736  83c40c               add esp, 0xc
// 005d0739  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
