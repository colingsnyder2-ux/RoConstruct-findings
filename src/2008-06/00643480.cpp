// roc 2008-06 00643480  unit: RBX::HUMAN::Landed  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643480
//
// 00643480  64a100000000         mov eax, dword ptr fs:[0]
// 00643486  6aff                 push -1
// 00643488  68feab7d00           push 0x7dabfe
// 0064348d  50                   push eax
// 0064348e  b801000000           mov eax, 1
// 00643493  64892500000000       mov dword ptr fs:[0], esp
// 0064349a  8405d4d59700         test byte ptr [0x97d5d4], al
// 006434a0  7530                 jne 0x6434d2
// 006434a2  0905d4d59700         or dword ptr [0x97d5d4], eax
// 006434a8  6aff                 push -1
// 006434aa  6878cc8400           push 0x84cc78
// 006434af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006434b7  e8d40af1ff           call 0x553f90
// 006434bc  83c408               add esp, 8
// 006434bf  a3d0d59700           mov dword ptr [0x97d5d0], eax
// 006434c4  8b0c24               mov ecx, dword ptr [esp]
// 006434c7  64890d00000000       mov dword ptr fs:[0], ecx
// 006434ce  83c40c               add esp, 0xc
// 006434d1  c3                   ret 
// 006434d2  8b0c24               mov ecx, dword ptr [esp]
// 006434d5  a1d0d59700           mov eax, dword ptr [0x97d5d0]
// 006434da  64890d00000000       mov dword ptr fs:[0], ecx
// 006434e1  83c40c               add esp, 0xc
// 006434e4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
