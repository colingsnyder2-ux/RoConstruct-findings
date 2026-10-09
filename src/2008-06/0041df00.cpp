// roc 2008-06 0041df00  unit: VDHTMLWindow::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041df00
//
// 0041df00  64a100000000         mov eax, dword ptr fs:[0]
// 0041df06  6aff                 push -1
// 0041df08  687ee47b00           push 0x7be47e
// 0041df0d  50                   push eax
// 0041df0e  b801000000           mov eax, 1
// 0041df13  64892500000000       mov dword ptr fs:[0], esp
// 0041df1a  8405a0d09600         test byte ptr [0x96d0a0], al
// 0041df20  7530                 jne 0x41df52
// 0041df22  0905a0d09600         or dword ptr [0x96d0a0], eax
// 0041df28  6aff                 push -1
// 0041df2a  6840a29400           push 0x94a240
// 0041df2f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041df37  e854601300           call 0x553f90
// 0041df3c  83c408               add esp, 8
// 0041df3f  a39cd09600           mov dword ptr [0x96d09c], eax
// 0041df44  8b0c24               mov ecx, dword ptr [esp]
// 0041df47  64890d00000000       mov dword ptr fs:[0], ecx
// 0041df4e  83c40c               add esp, 0xc
// 0041df51  c3                   ret 
// 0041df52  8b0c24               mov ecx, dword ptr [esp]
// 0041df55  a19cd09600           mov eax, dword ptr [0x96d09c]
// 0041df5a  64890d00000000       mov dword ptr fs:[0], ecx
// 0041df61  83c40c               add esp, 0xc
// 0041df64  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
