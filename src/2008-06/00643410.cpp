// roc 2008-06 00643410  unit: RBX::HUMAN::Landed  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643410
//
// 00643410  64a100000000         mov eax, dword ptr fs:[0]
// 00643416  6aff                 push -1
// 00643418  68deab7d00           push 0x7dabde
// 0064341d  50                   push eax
// 0064341e  b801000000           mov eax, 1
// 00643423  64892500000000       mov dword ptr fs:[0], esp
// 0064342a  8405ccd59700         test byte ptr [0x97d5cc], al
// 00643430  7530                 jne 0x643462
// 00643432  0905ccd59700         or dword ptr [0x97d5cc], eax
// 00643438  6aff                 push -1
// 0064343a  6870cc8400           push 0x84cc70
// 0064343f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00643447  e8440bf1ff           call 0x553f90
// 0064344c  83c408               add esp, 8
// 0064344f  a3c8d59700           mov dword ptr [0x97d5c8], eax
// 00643454  8b0c24               mov ecx, dword ptr [esp]
// 00643457  64890d00000000       mov dword ptr fs:[0], ecx
// 0064345e  83c40c               add esp, 0xc
// 00643461  c3                   ret 
// 00643462  8b0c24               mov ecx, dword ptr [esp]
// 00643465  a1c8d59700           mov eax, dword ptr [0x97d5c8]
// 0064346a  64890d00000000       mov dword ptr fs:[0], ecx
// 00643471  83c40c               add esp, 0xc
// 00643474  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
