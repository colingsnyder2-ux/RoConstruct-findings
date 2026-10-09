// roc 2008-06 004ab0f0  unit: RBX::Network::Replicator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab0f0
//
// 004ab0f0  64a100000000         mov eax, dword ptr fs:[0]
// 004ab0f6  6aff                 push -1
// 004ab0f8  682e817c00           push 0x7c812e
// 004ab0fd  50                   push eax
// 004ab0fe  b801000000           mov eax, 1
// 004ab103  64892500000000       mov dword ptr fs:[0], esp
// 004ab10a  84051c149700         test byte ptr [0x97141c], al
// 004ab110  7530                 jne 0x4ab142
// 004ab112  09051c149700         or dword ptr [0x97141c], eax
// 004ab118  6aff                 push -1
// 004ab11a  682c449500           push 0x95442c
// 004ab11f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ab127  e8648e0a00           call 0x553f90
// 004ab12c  83c408               add esp, 8
// 004ab12f  a318149700           mov dword ptr [0x971418], eax
// 004ab134  8b0c24               mov ecx, dword ptr [esp]
// 004ab137  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab13e  83c40c               add esp, 0xc
// 004ab141  c3                   ret 
// 004ab142  8b0c24               mov ecx, dword ptr [esp]
// 004ab145  a118149700           mov eax, dword ptr [0x971418]
// 004ab14a  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab151  83c40c               add esp, 0xc
// 004ab154  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
