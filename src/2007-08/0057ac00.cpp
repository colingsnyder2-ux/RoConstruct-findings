// roc 2007-08 0057ac00  unit: RBX::Workspace  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ac00
//
// 0057ac00  64a100000000         mov eax, dword ptr fs:[0]
// 0057ac06  6aff                 push -1
// 0057ac08  688e557500           push 0x75558e
// 0057ac0d  50                   push eax
// 0057ac0e  b801000000           mov eax, 1
// 0057ac13  64892500000000       mov dword ptr fs:[0], esp
// 0057ac1a  84052c308c00         test byte ptr [0x8c302c], al
// 0057ac20  7530                 jne 0x57ac52
// 0057ac22  09052c308c00         or dword ptr [0x8c302c], eax
// 0057ac28  6aff                 push -1
// 0057ac2a  68d0d27b00           push 0x7bd2d0
// 0057ac2f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057ac37  e8041dfbff           call 0x52c940
// 0057ac3c  83c408               add esp, 8
// 0057ac3f  a328308c00           mov dword ptr [0x8c3028], eax
// 0057ac44  8b0c24               mov ecx, dword ptr [esp]
// 0057ac47  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ac4e  83c40c               add esp, 0xc
// 0057ac51  c3                   ret 
// 0057ac52  8b0c24               mov ecx, dword ptr [esp]
// 0057ac55  a128308c00           mov eax, dword ptr [0x8c3028]
// 0057ac5a  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ac61  83c40c               add esp, 0xc
// 0057ac64  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
