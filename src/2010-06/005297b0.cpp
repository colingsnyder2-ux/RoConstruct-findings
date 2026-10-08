// from server: 100% by auto
// roc 2010-06 005297b0  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005297b0
//
// 005297b0  64a100000000         mov eax, dword ptr fs:[0]
// 005297b6  6aff                 push -1
// 005297b8  680ee79800           push 0x98e70e
// 005297bd  50                   push eax
// 005297be  b801000000           mov eax, 1
// 005297c3  64892500000000       mov dword ptr fs:[0], esp
// 005297ca  8405f489c000         test byte ptr [0xc089f4], al
// 005297d0  7525                 jne 0x5297f7
// 005297d2  0905f489c000         or dword ptr [0xc089f4], eax
// 005297d8  b99089c000           mov ecx, 0xc08990
// 005297dd  c744240800000000     mov dword ptr [esp + 8], 0
// 005297e5  e866fbffff           call 0x529350
// 005297ea  6840de9d00           push 0x9dde40
// 005297ef  e86ff22700           call 0x7a8a63
// 005297f4  83c404               add esp, 4
// 005297f7  8b0c24               mov ecx, dword ptr [esp]
// 005297fa  b89089c000           mov eax, 0xc08990
// 005297ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00529806  83c40c               add esp, 0xc
// 00529809  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
