// roc 2008-06 006180a0  unit: RBX::NewNullTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006180a0
//
// 006180a0  64a100000000         mov eax, dword ptr fs:[0]
// 006180a6  6aff                 push -1
// 006180a8  68de907d00           push 0x7d90de
// 006180ad  50                   push eax
// 006180ae  b801000000           mov eax, 1
// 006180b3  64892500000000       mov dword ptr fs:[0], esp
// 006180ba  840508bf9700         test byte ptr [0x97bf08], al
// 006180c0  7530                 jne 0x6180f2
// 006180c2  090508bf9700         or dword ptr [0x97bf08], eax
// 006180c8  6aff                 push -1
// 006180ca  6808ab9500           push 0x95ab08
// 006180cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006180d7  e8b4bef3ff           call 0x553f90
// 006180dc  83c408               add esp, 8
// 006180df  a304bf9700           mov dword ptr [0x97bf04], eax
// 006180e4  8b0c24               mov ecx, dword ptr [esp]
// 006180e7  64890d00000000       mov dword ptr fs:[0], ecx
// 006180ee  83c40c               add esp, 0xc
// 006180f1  c3                   ret 
// 006180f2  8b0c24               mov ecx, dword ptr [esp]
// 006180f5  a104bf9700           mov eax, dword ptr [0x97bf04]
// 006180fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00618101  83c40c               add esp, 0xc
// 00618104  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
