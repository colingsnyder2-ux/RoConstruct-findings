// roc 2008-06 004a16f0  unit: RBX::Network::Server::ClientProxy  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a16f0
//
// 004a16f0  64a100000000         mov eax, dword ptr fs:[0]
// 004a16f6  6aff                 push -1
// 004a16f8  680e7b7c00           push 0x7c7b0e
// 004a16fd  50                   push eax
// 004a16fe  b801000000           mov eax, 1
// 004a1703  64892500000000       mov dword ptr fs:[0], esp
// 004a170a  8405040d9700         test byte ptr [0x970d04], al
// 004a1710  7530                 jne 0x4a1742
// 004a1712  0905040d9700         or dword ptr [0x970d04], eax
// 004a1718  6aff                 push -1
// 004a171a  68a8429500           push 0x9542a8
// 004a171f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a1727  e864280b00           call 0x553f90
// 004a172c  83c408               add esp, 8
// 004a172f  a3000d9700           mov dword ptr [0x970d00], eax
// 004a1734  8b0c24               mov ecx, dword ptr [esp]
// 004a1737  64890d00000000       mov dword ptr fs:[0], ecx
// 004a173e  83c40c               add esp, 0xc
// 004a1741  c3                   ret 
// 004a1742  8b0c24               mov ecx, dword ptr [esp]
// 004a1745  a1000d9700           mov eax, dword ptr [0x970d00]
// 004a174a  64890d00000000       mov dword ptr fs:[0], ecx
// 004a1751  83c40c               add esp, 0xc
// 004a1754  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
