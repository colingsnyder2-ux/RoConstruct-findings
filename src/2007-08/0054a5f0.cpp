// roc 2007-08 0054a5f0  unit: RBX::ServiceProvider  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054a5f0
//
// 0054a5f0  64a100000000         mov eax, dword ptr fs:[0]
// 0054a5f6  6aff                 push -1
// 0054a5f8  68de227500           push 0x7522de
// 0054a5fd  50                   push eax
// 0054a5fe  b801000000           mov eax, 1
// 0054a603  64892500000000       mov dword ptr fs:[0], esp
// 0054a60a  8405381c8c00         test byte ptr [0x8c1c38], al
// 0054a610  7530                 jne 0x54a642
// 0054a612  0905381c8c00         or dword ptr [0x8c1c38], eax
// 0054a618  6aff                 push -1
// 0054a61a  68c8707a00           push 0x7a70c8
// 0054a61f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054a627  e81423feff           call 0x52c940
// 0054a62c  83c408               add esp, 8
// 0054a62f  a3341c8c00           mov dword ptr [0x8c1c34], eax
// 0054a634  8b0c24               mov ecx, dword ptr [esp]
// 0054a637  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a63e  83c40c               add esp, 0xc
// 0054a641  c3                   ret 
// 0054a642  8b0c24               mov ecx, dword ptr [esp]
// 0054a645  a1341c8c00           mov eax, dword ptr [0x8c1c34]
// 0054a64a  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a651  83c40c               add esp, 0xc
// 0054a654  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
