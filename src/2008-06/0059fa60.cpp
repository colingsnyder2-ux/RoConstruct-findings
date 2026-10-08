// from server: 100% by auto
// roc 2008-06 0059fa60  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059fa60
//
// 0059fa60  64a100000000         mov eax, dword ptr fs:[0]
// 0059fa66  6aff                 push -1
// 0059fa68  682e287d00           push 0x7d282e
// 0059fa6d  50                   push eax
// 0059fa6e  b801000000           mov eax, 1
// 0059fa73  64892500000000       mov dword ptr fs:[0], esp
// 0059fa7a  8405f8679700         test byte ptr [0x9767f8], al
// 0059fa80  7525                 jne 0x59faa7
// 0059fa82  0905f8679700         or dword ptr [0x9767f8], eax
// 0059fa88  b910679700           mov ecx, 0x976710
// 0059fa8d  c744240800000000     mov dword ptr [esp + 8], 0
// 0059fa95  e896fbffff           call 0x59f630
// 0059fa9a  6890e07f00           push 0x7fe090
// 0059fa9f  e80b1d1000           call 0x6a17af
// 0059faa4  83c404               add esp, 4
// 0059faa7  8b0c24               mov ecx, dword ptr [esp]
// 0059faaa  b810679700           mov eax, 0x976710
// 0059faaf  64890d00000000       mov dword ptr fs:[0], ecx
// 0059fab6  83c40c               add esp, 0xc
// 0059fab9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
