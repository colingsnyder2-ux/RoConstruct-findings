// roc 2008-06 00455dc0  unit: CRobloxReportPaneView  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00455dc0
//
// 00455dc0  64a100000000         mov eax, dword ptr fs:[0]
// 00455dc6  6aff                 push -1
// 00455dc8  683e237c00           push 0x7c233e
// 00455dcd  50                   push eax
// 00455dce  b801000000           mov eax, 1
// 00455dd3  64892500000000       mov dword ptr fs:[0], esp
// 00455dda  84058cdd9600         test byte ptr [0x96dd8c], al
// 00455de0  7530                 jne 0x455e12
// 00455de2  09058cdd9600         or dword ptr [0x96dd8c], eax
// 00455de8  6aff                 push -1
// 00455dea  68640c9500           push 0x950c64
// 00455def  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00455df7  e894e10f00           call 0x553f90
// 00455dfc  83c408               add esp, 8
// 00455dff  a388dd9600           mov dword ptr [0x96dd88], eax
// 00455e04  8b0c24               mov ecx, dword ptr [esp]
// 00455e07  64890d00000000       mov dword ptr fs:[0], ecx
// 00455e0e  83c40c               add esp, 0xc
// 00455e11  c3                   ret 
// 00455e12  8b0c24               mov ecx, dword ptr [esp]
// 00455e15  a188dd9600           mov eax, dword ptr [0x96dd88]
// 00455e1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00455e21  83c40c               add esp, 0xc
// 00455e24  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
