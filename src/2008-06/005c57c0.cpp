// roc 2008-06 005c57c0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c57c0
//
// 005c57c0  64a100000000         mov eax, dword ptr fs:[0]
// 005c57c6  6aff                 push -1
// 005c57c8  685e4b7d00           push 0x7d4b5e
// 005c57cd  50                   push eax
// 005c57ce  b801000000           mov eax, 1
// 005c57d3  64892500000000       mov dword ptr fs:[0], esp
// 005c57da  8405ac959700         test byte ptr [0x9795ac], al
// 005c57e0  7530                 jne 0x5c5812
// 005c57e2  0905ac959700         or dword ptr [0x9795ac], eax
// 005c57e8  6aff                 push -1
// 005c57ea  680caf9500           push 0x95af0c
// 005c57ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c57f7  e894e7f8ff           call 0x553f90
// 005c57fc  83c408               add esp, 8
// 005c57ff  a3a8959700           mov dword ptr [0x9795a8], eax
// 005c5804  8b0c24               mov ecx, dword ptr [esp]
// 005c5807  64890d00000000       mov dword ptr fs:[0], ecx
// 005c580e  83c40c               add esp, 0xc
// 005c5811  c3                   ret 
// 005c5812  8b0c24               mov ecx, dword ptr [esp]
// 005c5815  a1a8959700           mov eax, dword ptr [0x9795a8]
// 005c581a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5821  83c40c               add esp, 0xc
// 005c5824  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
