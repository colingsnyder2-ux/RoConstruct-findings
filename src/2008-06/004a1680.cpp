// roc 2008-06 004a1680  unit: RBX::Network::Server::ClientProxy  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a1680
//
// 004a1680  64a100000000         mov eax, dword ptr fs:[0]
// 004a1686  6aff                 push -1
// 004a1688  68ee7a7c00           push 0x7c7aee
// 004a168d  50                   push eax
// 004a168e  b801000000           mov eax, 1
// 004a1693  64892500000000       mov dword ptr fs:[0], esp
// 004a169a  8405fc0c9700         test byte ptr [0x970cfc], al
// 004a16a0  7530                 jne 0x4a16d2
// 004a16a2  0905fc0c9700         or dword ptr [0x970cfc], eax
// 004a16a8  6aff                 push -1
// 004a16aa  68a0429500           push 0x9542a0
// 004a16af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a16b7  e8d4280b00           call 0x553f90
// 004a16bc  83c408               add esp, 8
// 004a16bf  a3f80c9700           mov dword ptr [0x970cf8], eax
// 004a16c4  8b0c24               mov ecx, dword ptr [esp]
// 004a16c7  64890d00000000       mov dword ptr fs:[0], ecx
// 004a16ce  83c40c               add esp, 0xc
// 004a16d1  c3                   ret 
// 004a16d2  8b0c24               mov ecx, dword ptr [esp]
// 004a16d5  a1f80c9700           mov eax, dword ptr [0x970cf8]
// 004a16da  64890d00000000       mov dword ptr fs:[0], ecx
// 004a16e1  83c40c               add esp, 0xc
// 004a16e4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
