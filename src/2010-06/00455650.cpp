// roc 2010-06 00455650  unit: RBX::PartInstance::W4Material::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00455650
//
// 00455650  64a100000000         mov eax, dword ptr fs:[0]
// 00455656  6aff                 push -1
// 00455658  687e209800           push 0x98207e
// 0045565d  50                   push eax
// 0045565e  b801000000           mov eax, 1
// 00455663  64892500000000       mov dword ptr fs:[0], esp
// 0045566a  8405541dc000         test byte ptr [0xc01d54], al
// 00455670  7525                 jne 0x455697
// 00455672  0905541dc000         or dword ptr [0xc01d54], eax
// 00455678  b9681cc000           mov ecx, 0xc01c68
// 0045567d  c744240800000000     mov dword ptr [esp + 8], 0
// 00455685  e886581e00           call 0x63af10
// 0045568a  6880bc9d00           push 0x9dbc80
// 0045568f  e8cf333500           call 0x7a8a63
// 00455694  83c404               add esp, 4
// 00455697  8b0c24               mov ecx, dword ptr [esp]
// 0045569a  b8681cc000           mov eax, 0xc01c68
// 0045569f  64890d00000000       mov dword ptr fs:[0], ecx
// 004556a6  83c40c               add esp, 0xc
// 004556a9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
