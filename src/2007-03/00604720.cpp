// roc 2007-03 00604720  unit: seg_00600000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00604720
//
// 00604720  64a100000000         mov eax, dword ptr fs:[0]
// 00604726  6aff                 push -1
// 00604728  687eca7500           push 0x75ca7e
// 0060472d  50                   push eax
// 0060472e  b801000000           mov eax, 1
// 00604733  64892500000000       mov dword ptr fs:[0], esp
// 0060473a  840534108c00         test byte ptr [0x8c1034], al
// 00604740  7530                 jne 0x604772
// 00604742  090534108c00         or dword ptr [0x8c1034], eax
// 00604748  6aff                 push -1
// 0060474a  6864eb8a00           push 0x8aeb64
// 0060474f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00604757  e88491f2ff           call 0x52d8e0
// 0060475c  83c408               add esp, 8
// 0060475f  a330108c00           mov dword ptr [0x8c1030], eax
// 00604764  8b0c24               mov ecx, dword ptr [esp]
// 00604767  64890d00000000       mov dword ptr fs:[0], ecx
// 0060476e  83c40c               add esp, 0xc
// 00604771  c3                   ret 
// 00604772  8b0c24               mov ecx, dword ptr [esp]
// 00604775  a130108c00           mov eax, dword ptr [0x8c1030]
// 0060477a  64890d00000000       mov dword ptr fs:[0], ecx
// 00604781  83c40c               add esp, 0xc
// 00604784  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
