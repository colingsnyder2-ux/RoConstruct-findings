// roc 2008-06 0041dfe0  unit: VDHTMLWindow::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041dfe0
//
// 0041dfe0  64a100000000         mov eax, dword ptr fs:[0]
// 0041dfe6  6aff                 push -1
// 0041dfe8  68bee47b00           push 0x7be4be
// 0041dfed  50                   push eax
// 0041dfee  b801000000           mov eax, 1
// 0041dff3  64892500000000       mov dword ptr fs:[0], esp
// 0041dffa  8405b0d09600         test byte ptr [0x96d0b0], al
// 0041e000  7530                 jne 0x41e032
// 0041e002  0905b0d09600         or dword ptr [0x96d0b0], eax
// 0041e008  6aff                 push -1
// 0041e00a  68cc419400           push 0x9441cc
// 0041e00f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041e017  e8745f1300           call 0x553f90
// 0041e01c  83c408               add esp, 8
// 0041e01f  a3acd09600           mov dword ptr [0x96d0ac], eax
// 0041e024  8b0c24               mov ecx, dword ptr [esp]
// 0041e027  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e02e  83c40c               add esp, 0xc
// 0041e031  c3                   ret 
// 0041e032  8b0c24               mov ecx, dword ptr [esp]
// 0041e035  a1acd09600           mov eax, dword ptr [0x96d0ac]
// 0041e03a  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e041  83c40c               add esp, 0xc
// 0041e044  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
