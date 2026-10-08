// from server: 100% by auto
// roc 2010-06 00529900  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00529900
//
// 00529900  64a100000000         mov eax, dword ptr fs:[0]
// 00529906  6aff                 push -1
// 00529908  686ee79800           push 0x98e76e
// 0052990d  50                   push eax
// 0052990e  b801000000           mov eax, 1
// 00529913  64892500000000       mov dword ptr fs:[0], esp
// 0052991a  84052c8bc000         test byte ptr [0xc08b2c], al
// 00529920  7525                 jne 0x529947
// 00529922  09052c8bc000         or dword ptr [0xc08b2c], eax
// 00529928  b9c88ac000           mov ecx, 0xc08ac8
// 0052992d  c744240800000000     mov dword ptr [esp + 8], 0
// 00529935  e826fcffff           call 0x529560
// 0052993a  6810de9d00           push 0x9dde10
// 0052993f  e81ff12700           call 0x7a8a63
// 00529944  83c404               add esp, 4
// 00529947  8b0c24               mov ecx, dword ptr [esp]
// 0052994a  b8c88ac000           mov eax, 0xc08ac8
// 0052994f  64890d00000000       mov dword ptr fs:[0], ecx
// 00529956  83c40c               add esp, 0xc
// 00529959  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
