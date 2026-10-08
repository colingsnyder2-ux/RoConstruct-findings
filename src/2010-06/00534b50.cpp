// from server: 100% by auto
// roc 2010-06 00534b50  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00534b50
//
// 00534b50  64a100000000         mov eax, dword ptr fs:[0]
// 00534b56  6aff                 push -1
// 00534b58  686ef19800           push 0x98f16e
// 00534b5d  50                   push eax
// 00534b5e  b801000000           mov eax, 1
// 00534b63  64892500000000       mov dword ptr fs:[0], esp
// 00534b6a  84056c8fc000         test byte ptr [0xc08f6c], al
// 00534b70  7525                 jne 0x534b97
// 00534b72  09056c8fc000         or dword ptr [0xc08f6c], eax
// 00534b78  b9088fc000           mov ecx, 0xc08f08
// 00534b7d  c744240800000000     mov dword ptr [esp + 8], 0
// 00534b85  e846f9ffff           call 0x5344d0
// 00534b8a  6870df9d00           push 0x9ddf70
// 00534b8f  e8cf3e2700           call 0x7a8a63
// 00534b94  83c404               add esp, 4
// 00534b97  8b0c24               mov ecx, dword ptr [esp]
// 00534b9a  b8088fc000           mov eax, 0xc08f08
// 00534b9f  64890d00000000       mov dword ptr fs:[0], ecx
// 00534ba6  83c40c               add esp, 0xc
// 00534ba9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
