// roc 2008-06 00489c30  unit: G3D::GWindow  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489c30
//
// 00489c30  64a100000000         mov eax, dword ptr fs:[0]
// 00489c36  6aff                 push -1
// 00489c38  68ee5d7c00           push 0x7c5dee
// 00489c3d  50                   push eax
// 00489c3e  b801000000           mov eax, 1
// 00489c43  64892500000000       mov dword ptr fs:[0], esp
// 00489c4a  8405f4fa9600         test byte ptr [0x96faf4], al
// 00489c50  7530                 jne 0x489c82
// 00489c52  0905f4fa9600         or dword ptr [0x96faf4], eax
// 00489c58  6aff                 push -1
// 00489c5a  6880b69400           push 0x94b680
// 00489c5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00489c67  e824a30c00           call 0x553f90
// 00489c6c  83c408               add esp, 8
// 00489c6f  a3f0fa9600           mov dword ptr [0x96faf0], eax
// 00489c74  8b0c24               mov ecx, dword ptr [esp]
// 00489c77  64890d00000000       mov dword ptr fs:[0], ecx
// 00489c7e  83c40c               add esp, 0xc
// 00489c81  c3                   ret 
// 00489c82  8b0c24               mov ecx, dword ptr [esp]
// 00489c85  a1f0fa9600           mov eax, dword ptr [0x96faf0]
// 00489c8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00489c91  83c40c               add esp, 0xc
// 00489c94  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
