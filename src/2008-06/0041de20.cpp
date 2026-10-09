// roc 2008-06 0041de20  unit: VDHTMLWindow::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041de20
//
// 0041de20  64a100000000         mov eax, dword ptr fs:[0]
// 0041de26  6aff                 push -1
// 0041de28  683ee47b00           push 0x7be43e
// 0041de2d  50                   push eax
// 0041de2e  b801000000           mov eax, 1
// 0041de33  64892500000000       mov dword ptr fs:[0], esp
// 0041de3a  840590d09600         test byte ptr [0x96d090], al
// 0041de40  7530                 jne 0x41de72
// 0041de42  090590d09600         or dword ptr [0x96d090], eax
// 0041de48  6aff                 push -1
// 0041de4a  68689c9400           push 0x949c68
// 0041de4f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041de57  e834611300           call 0x553f90
// 0041de5c  83c408               add esp, 8
// 0041de5f  a38cd09600           mov dword ptr [0x96d08c], eax
// 0041de64  8b0c24               mov ecx, dword ptr [esp]
// 0041de67  64890d00000000       mov dword ptr fs:[0], ecx
// 0041de6e  83c40c               add esp, 0xc
// 0041de71  c3                   ret 
// 0041de72  8b0c24               mov ecx, dword ptr [esp]
// 0041de75  a18cd09600           mov eax, dword ptr [0x96d08c]
// 0041de7a  64890d00000000       mov dword ptr fs:[0], ecx
// 0041de81  83c40c               add esp, 0xc
// 0041de84  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
