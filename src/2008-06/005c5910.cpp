// roc 2008-06 005c5910  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5910
//
// 005c5910  64a100000000         mov eax, dword ptr fs:[0]
// 005c5916  6aff                 push -1
// 005c5918  68be4b7d00           push 0x7d4bbe
// 005c591d  50                   push eax
// 005c591e  b801000000           mov eax, 1
// 005c5923  64892500000000       mov dword ptr fs:[0], esp
// 005c592a  8405c4959700         test byte ptr [0x9795c4], al
// 005c5930  7530                 jne 0x5c5962
// 005c5932  0905c4959700         or dword ptr [0x9795c4], eax
// 005c5938  6aff                 push -1
// 005c593a  6824af9500           push 0x95af24
// 005c593f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5947  e844e6f8ff           call 0x553f90
// 005c594c  83c408               add esp, 8
// 005c594f  a3c0959700           mov dword ptr [0x9795c0], eax
// 005c5954  8b0c24               mov ecx, dword ptr [esp]
// 005c5957  64890d00000000       mov dword ptr fs:[0], ecx
// 005c595e  83c40c               add esp, 0xc
// 005c5961  c3                   ret 
// 005c5962  8b0c24               mov ecx, dword ptr [esp]
// 005c5965  a1c0959700           mov eax, dword ptr [0x9795c0]
// 005c596a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5971  83c40c               add esp, 0xc
// 005c5974  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
