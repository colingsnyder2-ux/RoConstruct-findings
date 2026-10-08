// roc 2007-08 00593900  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593900
//
// 00593900  64a100000000         mov eax, dword ptr fs:[0]
// 00593906  6aff                 push -1
// 00593908  684e717500           push 0x75714e
// 0059390d  50                   push eax
// 0059390e  b801000000           mov eax, 1
// 00593913  64892500000000       mov dword ptr fs:[0], esp
// 0059391a  84057c4d8c00         test byte ptr [0x8c4d7c], al
// 00593920  7530                 jne 0x593952
// 00593922  09057c4d8c00         or dword ptr [0x8c4d7c], eax
// 00593928  6aff                 push -1
// 0059392a  68ac418b00           push 0x8b41ac
// 0059392f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593937  e80490f9ff           call 0x52c940
// 0059393c  83c408               add esp, 8
// 0059393f  a3784d8c00           mov dword ptr [0x8c4d78], eax
// 00593944  8b0c24               mov ecx, dword ptr [esp]
// 00593947  64890d00000000       mov dword ptr fs:[0], ecx
// 0059394e  83c40c               add esp, 0xc
// 00593951  c3                   ret 
// 00593952  8b0c24               mov ecx, dword ptr [esp]
// 00593955  a1784d8c00           mov eax, dword ptr [0x8c4d78]
// 0059395a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593961  83c40c               add esp, 0xc
// 00593964  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
