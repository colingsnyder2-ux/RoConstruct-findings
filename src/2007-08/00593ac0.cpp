// roc 2007-08 00593ac0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593ac0
//
// 00593ac0  64a100000000         mov eax, dword ptr fs:[0]
// 00593ac6  6aff                 push -1
// 00593ac8  68ce717500           push 0x7571ce
// 00593acd  50                   push eax
// 00593ace  b801000000           mov eax, 1
// 00593ad3  64892500000000       mov dword ptr fs:[0], esp
// 00593ada  84059c4d8c00         test byte ptr [0x8c4d9c], al
// 00593ae0  7530                 jne 0x593b12
// 00593ae2  09059c4d8c00         or dword ptr [0x8c4d9c], eax
// 00593ae8  6aff                 push -1
// 00593aea  68dce28a00           push 0x8ae2dc
// 00593aef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593af7  e8448ef9ff           call 0x52c940
// 00593afc  83c408               add esp, 8
// 00593aff  a3984d8c00           mov dword ptr [0x8c4d98], eax
// 00593b04  8b0c24               mov ecx, dword ptr [esp]
// 00593b07  64890d00000000       mov dword ptr fs:[0], ecx
// 00593b0e  83c40c               add esp, 0xc
// 00593b11  c3                   ret 
// 00593b12  8b0c24               mov ecx, dword ptr [esp]
// 00593b15  a1984d8c00           mov eax, dword ptr [0x8c4d98]
// 00593b1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593b21  83c40c               add esp, 0xc
// 00593b24  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
