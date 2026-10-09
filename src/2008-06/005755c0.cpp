// roc 2008-06 005755c0  unit: RBX::ServiceProvider  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005755c0
//
// 005755c0  64a100000000         mov eax, dword ptr fs:[0]
// 005755c6  6aff                 push -1
// 005755c8  686e057d00           push 0x7d056e
// 005755cd  50                   push eax
// 005755ce  b801000000           mov eax, 1
// 005755d3  64892500000000       mov dword ptr fs:[0], esp
// 005755da  8405f8519700         test byte ptr [0x9751f8], al
// 005755e0  7530                 jne 0x575612
// 005755e2  0905f8519700         or dword ptr [0x9751f8], eax
// 005755e8  6aff                 push -1
// 005755ea  68d0168400           push 0x8416d0
// 005755ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005755f7  e894e9fdff           call 0x553f90
// 005755fc  83c408               add esp, 8
// 005755ff  a3f4519700           mov dword ptr [0x9751f4], eax
// 00575604  8b0c24               mov ecx, dword ptr [esp]
// 00575607  64890d00000000       mov dword ptr fs:[0], ecx
// 0057560e  83c40c               add esp, 0xc
// 00575611  c3                   ret 
// 00575612  8b0c24               mov ecx, dword ptr [esp]
// 00575615  a1f4519700           mov eax, dword ptr [0x9751f4]
// 0057561a  64890d00000000       mov dword ptr fs:[0], ecx
// 00575621  83c40c               add esp, 0xc
// 00575624  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
