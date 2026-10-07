// roc 2011-06 00592ac0  unit: RBX::VBlockMesh::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00592ac0
//
// 00592ac0  64a100000000         mov eax, dword ptr fs:[0]
// 00592ac6  6aff                 push -1
// 00592ac8  68ae079e00           push 0x9e07ae
// 00592acd  50                   push eax
// 00592ace  b801000000           mov eax, 1
// 00592ad3  64892500000000       mov dword ptr fs:[0], esp
// 00592ada  8405f0bacb00         test byte ptr [0xcbbaf0], al
// 00592ae0  7525                 jne 0x592b07
// 00592ae2  0905f0bacb00         or dword ptr [0xcbbaf0], eax
// 00592ae8  b9ccbacb00           mov ecx, 0xcbbacc
// 00592aed  c744240800000000     mov dword ptr [esp + 8], 0
// 00592af5  e806fcffff           call 0x592700
// 00592afa  68004ea300           push 0xa34e00
// 00592aff  e859862700           call 0x80b15d
// 00592b04  83c404               add esp, 4
// 00592b07  8b0c24               mov ecx, dword ptr [esp]
// 00592b0a  b8ccbacb00           mov eax, 0xcbbacc
// 00592b0f  64890d00000000       mov dword ptr fs:[0], ecx
// 00592b16  83c40c               add esp, 0xc
// 00592b19  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
