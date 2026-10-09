// roc 2008-06 005c5ec0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5ec0
//
// 005c5ec0  64a100000000         mov eax, dword ptr fs:[0]
// 005c5ec6  6aff                 push -1
// 005c5ec8  685e4d7d00           push 0x7d4d5e
// 005c5ecd  50                   push eax
// 005c5ece  b801000000           mov eax, 1
// 005c5ed3  64892500000000       mov dword ptr fs:[0], esp
// 005c5eda  84052c969700         test byte ptr [0x97962c], al
// 005c5ee0  7530                 jne 0x5c5f12
// 005c5ee2  09052c969700         or dword ptr [0x97962c], eax
// 005c5ee8  6aff                 push -1
// 005c5eea  68fcaa9500           push 0x95aafc
// 005c5eef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5ef7  e894e0f8ff           call 0x553f90
// 005c5efc  83c408               add esp, 8
// 005c5eff  a328969700           mov dword ptr [0x979628], eax
// 005c5f04  8b0c24               mov ecx, dword ptr [esp]
// 005c5f07  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5f0e  83c40c               add esp, 0xc
// 005c5f11  c3                   ret 
// 005c5f12  8b0c24               mov ecx, dword ptr [esp]
// 005c5f15  a128969700           mov eax, dword ptr [0x979628]
// 005c5f1a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5f21  83c40c               add esp, 0xc
// 005c5f24  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
