// roc 2008-06 0041df70  unit: VDHTMLWindow::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041df70
//
// 0041df70  64a100000000         mov eax, dword ptr fs:[0]
// 0041df76  6aff                 push -1
// 0041df78  689ee47b00           push 0x7be49e
// 0041df7d  50                   push eax
// 0041df7e  b801000000           mov eax, 1
// 0041df83  64892500000000       mov dword ptr fs:[0], esp
// 0041df8a  8405a8d09600         test byte ptr [0x96d0a8], al
// 0041df90  7530                 jne 0x41dfc2
// 0041df92  0905a8d09600         or dword ptr [0x96d0a8], eax
// 0041df98  6aff                 push -1
// 0041df9a  68acaf9400           push 0x94afac
// 0041df9f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041dfa7  e8e45f1300           call 0x553f90
// 0041dfac  83c408               add esp, 8
// 0041dfaf  a3a4d09600           mov dword ptr [0x96d0a4], eax
// 0041dfb4  8b0c24               mov ecx, dword ptr [esp]
// 0041dfb7  64890d00000000       mov dword ptr fs:[0], ecx
// 0041dfbe  83c40c               add esp, 0xc
// 0041dfc1  c3                   ret 
// 0041dfc2  8b0c24               mov ecx, dword ptr [esp]
// 0041dfc5  a1a4d09600           mov eax, dword ptr [0x96d0a4]
// 0041dfca  64890d00000000       mov dword ptr fs:[0], ecx
// 0041dfd1  83c40c               add esp, 0xc
// 0041dfd4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
