// from server: 100% by auto
// roc 2010-06 00529890  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00529890
//
// 00529890  64a100000000         mov eax, dword ptr fs:[0]
// 00529896  6aff                 push -1
// 00529898  684ee79800           push 0x98e74e
// 0052989d  50                   push eax
// 0052989e  b801000000           mov eax, 1
// 005298a3  64892500000000       mov dword ptr fs:[0], esp
// 005298aa  8405c48ac000         test byte ptr [0xc08ac4], al
// 005298b0  7525                 jne 0x5298d7
// 005298b2  0905c48ac000         or dword ptr [0xc08ac4], eax
// 005298b8  b9608ac000           mov ecx, 0xc08a60
// 005298bd  c744240800000000     mov dword ptr [esp + 8], 0
// 005298c5  e8e6fbffff           call 0x5294b0
// 005298ca  6820de9d00           push 0x9dde20
// 005298cf  e88ff12700           call 0x7a8a63
// 005298d4  83c404               add esp, 4
// 005298d7  8b0c24               mov ecx, dword ptr [esp]
// 005298da  b8608ac000           mov eax, 0xc08a60
// 005298df  64890d00000000       mov dword ptr fs:[0], ecx
// 005298e6  83c40c               add esp, 0xc
// 005298e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
