// roc 2010-06 00529820  unit: RBX::VRenderSurfaceTypes::?$Table  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00529820
//
// 00529820  64a100000000         mov eax, dword ptr fs:[0]
// 00529826  6aff                 push -1
// 00529828  682ee79800           push 0x98e72e
// 0052982d  50                   push eax
// 0052982e  b801000000           mov eax, 1
// 00529833  64892500000000       mov dword ptr fs:[0], esp
// 0052983a  84055c8ac000         test byte ptr [0xc08a5c], al
// 00529840  7525                 jne 0x529867
// 00529842  09055c8ac000         or dword ptr [0xc08a5c], eax
// 00529848  b9f889c000           mov ecx, 0xc089f8
// 0052984d  c744240800000000     mov dword ptr [esp + 8], 0
// 00529855  e8a6fbffff           call 0x529400
// 0052985a  6830de9d00           push 0x9dde30
// 0052985f  e8fff12700           call 0x7a8a63
// 00529864  83c404               add esp, 4
// 00529867  8b0c24               mov ecx, dword ptr [esp]
// 0052986a  b8f889c000           mov eax, 0xc089f8
// 0052986f  64890d00000000       mov dword ptr fs:[0], ecx
// 00529876  83c40c               add esp, 0xc
// 00529879  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
