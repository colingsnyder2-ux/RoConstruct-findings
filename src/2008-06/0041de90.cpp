// roc 2008-06 0041de90  unit: VDHTMLWindow::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041de90
//
// 0041de90  64a100000000         mov eax, dword ptr fs:[0]
// 0041de96  6aff                 push -1
// 0041de98  685ee47b00           push 0x7be45e
// 0041de9d  50                   push eax
// 0041de9e  b801000000           mov eax, 1
// 0041dea3  64892500000000       mov dword ptr fs:[0], esp
// 0041deaa  840598d09600         test byte ptr [0x96d098], al
// 0041deb0  7530                 jne 0x41dee2
// 0041deb2  090598d09600         or dword ptr [0x96d098], eax
// 0041deb8  6aff                 push -1
// 0041deba  68709c9400           push 0x949c70
// 0041debf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041dec7  e8c4601300           call 0x553f90
// 0041decc  83c408               add esp, 8
// 0041decf  a394d09600           mov dword ptr [0x96d094], eax
// 0041ded4  8b0c24               mov ecx, dword ptr [esp]
// 0041ded7  64890d00000000       mov dword ptr fs:[0], ecx
// 0041dede  83c40c               add esp, 0xc
// 0041dee1  c3                   ret 
// 0041dee2  8b0c24               mov ecx, dword ptr [esp]
// 0041dee5  a194d09600           mov eax, dword ptr [0x96d094]
// 0041deea  64890d00000000       mov dword ptr fs:[0], ecx
// 0041def1  83c40c               add esp, 0xc
// 0041def4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
