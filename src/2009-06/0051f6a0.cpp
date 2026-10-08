// from server: 100% by auto
// roc 2009-06 0051f6a0  unit: RBX::VBlockMesh::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051f6a0
//
// 0051f6a0  64a100000000         mov eax, dword ptr fs:[0]
// 0051f6a6  6aff                 push -1
// 0051f6a8  682ee38500           push 0x85e32e
// 0051f6ad  50                   push eax
// 0051f6ae  b801000000           mov eax, 1
// 0051f6b3  64892500000000       mov dword ptr fs:[0], esp
// 0051f6ba  8405cc16a400         test byte ptr [0xa416cc], al
// 0051f6c0  7525                 jne 0x51f6e7
// 0051f6c2  0905cc16a400         or dword ptr [0xa416cc], eax
// 0051f6c8  b96816a400           mov ecx, 0xa41668
// 0051f6cd  c744240800000000     mov dword ptr [esp + 8], 0
// 0051f6d5  e866f4ffff           call 0x51eb40
// 0051f6da  6800668900           push 0x896600
// 0051f6df  e817a41f00           call 0x719afb
// 0051f6e4  83c404               add esp, 4
// 0051f6e7  8b0c24               mov ecx, dword ptr [esp]
// 0051f6ea  b86816a400           mov eax, 0xa41668
// 0051f6ef  64890d00000000       mov dword ptr fs:[0], ecx
// 0051f6f6  83c40c               add esp, 0xc
// 0051f6f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
