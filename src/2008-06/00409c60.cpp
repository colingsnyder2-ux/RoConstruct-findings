// roc 2008-06 00409c60  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409c60
//
// 00409c60  64a100000000         mov eax, dword ptr fs:[0]
// 00409c66  6aff                 push -1
// 00409c68  68ded07b00           push 0x7bd0de
// 00409c6d  50                   push eax
// 00409c6e  b801000000           mov eax, 1
// 00409c73  64892500000000       mov dword ptr fs:[0], esp
// 00409c7a  840570c39600         test byte ptr [0x96c370], al
// 00409c80  7530                 jne 0x409cb2
// 00409c82  090570c39600         or dword ptr [0x96c370], eax
// 00409c88  6aff                 push -1
// 00409c8a  6808019300           push 0x930108
// 00409c8f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00409c97  e8f4a21400           call 0x553f90
// 00409c9c  83c408               add esp, 8
// 00409c9f  a36cc39600           mov dword ptr [0x96c36c], eax
// 00409ca4  8b0c24               mov ecx, dword ptr [esp]
// 00409ca7  64890d00000000       mov dword ptr fs:[0], ecx
// 00409cae  83c40c               add esp, 0xc
// 00409cb1  c3                   ret 
// 00409cb2  8b0c24               mov ecx, dword ptr [esp]
// 00409cb5  a16cc39600           mov eax, dword ptr [0x96c36c]
// 00409cba  64890d00000000       mov dword ptr fs:[0], ecx
// 00409cc1  83c40c               add esp, 0xc
// 00409cc4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
