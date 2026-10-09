// roc 2008-06 00409aa0  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409aa0
//
// 00409aa0  64a100000000         mov eax, dword ptr fs:[0]
// 00409aa6  6aff                 push -1
// 00409aa8  685ed07b00           push 0x7bd05e
// 00409aad  50                   push eax
// 00409aae  b801000000           mov eax, 1
// 00409ab3  64892500000000       mov dword ptr fs:[0], esp
// 00409aba  840550c39600         test byte ptr [0x96c350], al
// 00409ac0  7530                 jne 0x409af2
// 00409ac2  090550c39600         or dword ptr [0x96c350], eax
// 00409ac8  6aff                 push -1
// 00409aca  6898009300           push 0x930098
// 00409acf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00409ad7  e8b4a41400           call 0x553f90
// 00409adc  83c408               add esp, 8
// 00409adf  a34cc39600           mov dword ptr [0x96c34c], eax
// 00409ae4  8b0c24               mov ecx, dword ptr [esp]
// 00409ae7  64890d00000000       mov dword ptr fs:[0], ecx
// 00409aee  83c40c               add esp, 0xc
// 00409af1  c3                   ret 
// 00409af2  8b0c24               mov ecx, dword ptr [esp]
// 00409af5  a14cc39600           mov eax, dword ptr [0x96c34c]
// 00409afa  64890d00000000       mov dword ptr fs:[0], ecx
// 00409b01  83c40c               add esp, 0xc
// 00409b04  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
