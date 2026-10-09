// roc 2008-06 005e2840  unit: RBX::JointInstance  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2840
//
// 005e2840  64a100000000         mov eax, dword ptr fs:[0]
// 005e2846  6aff                 push -1
// 005e2848  684e657d00           push 0x7d654e
// 005e284d  50                   push eax
// 005e284e  b801000000           mov eax, 1
// 005e2853  64892500000000       mov dword ptr fs:[0], esp
// 005e285a  8405d4aa9700         test byte ptr [0x97aad4], al
// 005e2860  7530                 jne 0x5e2892
// 005e2862  0905d4aa9700         or dword ptr [0x97aad4], eax
// 005e2868  6aff                 push -1
// 005e286a  6830e08300           push 0x83e030
// 005e286f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e2877  e81417f7ff           call 0x553f90
// 005e287c  83c408               add esp, 8
// 005e287f  a3d0aa9700           mov dword ptr [0x97aad0], eax
// 005e2884  8b0c24               mov ecx, dword ptr [esp]
// 005e2887  64890d00000000       mov dword ptr fs:[0], ecx
// 005e288e  83c40c               add esp, 0xc
// 005e2891  c3                   ret 
// 005e2892  8b0c24               mov ecx, dword ptr [esp]
// 005e2895  a1d0aa9700           mov eax, dword ptr [0x97aad0]
// 005e289a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e28a1  83c40c               add esp, 0xc
// 005e28a4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
