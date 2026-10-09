// roc 2008-06 005754e0  unit: RBX::ServiceProvider  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005754e0
//
// 005754e0  64a100000000         mov eax, dword ptr fs:[0]
// 005754e6  6aff                 push -1
// 005754e8  682e057d00           push 0x7d052e
// 005754ed  50                   push eax
// 005754ee  b801000000           mov eax, 1
// 005754f3  64892500000000       mov dword ptr fs:[0], esp
// 005754fa  8405e8519700         test byte ptr [0x9751e8], al
// 00575500  7530                 jne 0x575532
// 00575502  0905e8519700         or dword ptr [0x9751e8], eax
// 00575508  6aff                 push -1
// 0057550a  6878108400           push 0x841078
// 0057550f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00575517  e874eafdff           call 0x553f90
// 0057551c  83c408               add esp, 8
// 0057551f  a3e4519700           mov dword ptr [0x9751e4], eax
// 00575524  8b0c24               mov ecx, dword ptr [esp]
// 00575527  64890d00000000       mov dword ptr fs:[0], ecx
// 0057552e  83c40c               add esp, 0xc
// 00575531  c3                   ret 
// 00575532  8b0c24               mov ecx, dword ptr [esp]
// 00575535  a1e4519700           mov eax, dword ptr [0x9751e4]
// 0057553a  64890d00000000       mov dword ptr fs:[0], ecx
// 00575541  83c40c               add esp, 0xc
// 00575544  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
