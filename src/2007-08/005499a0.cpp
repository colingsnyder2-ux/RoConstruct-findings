// roc 2007-08 005499a0  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005499a0
//
// 005499a0  64a100000000         mov eax, dword ptr fs:[0]
// 005499a6  6aff                 push -1
// 005499a8  68be207500           push 0x7520be
// 005499ad  50                   push eax
// 005499ae  b801000000           mov eax, 1
// 005499b3  64892500000000       mov dword ptr fs:[0], esp
// 005499ba  8405101b8c00         test byte ptr [0x8c1b10], al
// 005499c0  7530                 jne 0x5499f2
// 005499c2  0905101b8c00         or dword ptr [0x8c1b10], eax
// 005499c8  6aff                 push -1
// 005499ca  68e0827a00           push 0x7a82e0
// 005499cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005499d7  e8642ffeff           call 0x52c940
// 005499dc  83c408               add esp, 8
// 005499df  a30c1b8c00           mov dword ptr [0x8c1b0c], eax
// 005499e4  8b0c24               mov ecx, dword ptr [esp]
// 005499e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005499ee  83c40c               add esp, 0xc
// 005499f1  c3                   ret 
// 005499f2  8b0c24               mov ecx, dword ptr [esp]
// 005499f5  a10c1b8c00           mov eax, dword ptr [0x8c1b0c]
// 005499fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00549a01  83c40c               add esp, 0xc
// 00549a04  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
