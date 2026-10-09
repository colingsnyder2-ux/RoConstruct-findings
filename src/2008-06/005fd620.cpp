// roc 2008-06 005fd620  unit: RBX::Tool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd620
//
// 005fd620  64a100000000         mov eax, dword ptr fs:[0]
// 005fd626  6aff                 push -1
// 005fd628  689e7e7d00           push 0x7d7e9e
// 005fd62d  50                   push eax
// 005fd62e  b801000000           mov eax, 1
// 005fd633  64892500000000       mov dword ptr fs:[0], esp
// 005fd63a  8405d8b59700         test byte ptr [0x97b5d8], al
// 005fd640  7530                 jne 0x5fd672
// 005fd642  0905d8b59700         or dword ptr [0x97b5d8], eax
// 005fd648  6aff                 push -1
// 005fd64a  68d41e9600           push 0x961ed4
// 005fd64f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fd657  e83469f5ff           call 0x553f90
// 005fd65c  83c408               add esp, 8
// 005fd65f  a3d4b59700           mov dword ptr [0x97b5d4], eax
// 005fd664  8b0c24               mov ecx, dword ptr [esp]
// 005fd667  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd66e  83c40c               add esp, 0xc
// 005fd671  c3                   ret 
// 005fd672  8b0c24               mov ecx, dword ptr [esp]
// 005fd675  a1d4b59700           mov eax, dword ptr [0x97b5d4]
// 005fd67a  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd681  83c40c               add esp, 0xc
// 005fd684  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
