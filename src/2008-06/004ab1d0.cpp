// roc 2008-06 004ab1d0  unit: RBX::Network::Replicator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab1d0
//
// 004ab1d0  64a100000000         mov eax, dword ptr fs:[0]
// 004ab1d6  6aff                 push -1
// 004ab1d8  686e817c00           push 0x7c816e
// 004ab1dd  50                   push eax
// 004ab1de  b801000000           mov eax, 1
// 004ab1e3  64892500000000       mov dword ptr fs:[0], esp
// 004ab1ea  84052c149700         test byte ptr [0x97142c], al
// 004ab1f0  7530                 jne 0x4ab222
// 004ab1f2  09052c149700         or dword ptr [0x97142c], eax
// 004ab1f8  6aff                 push -1
// 004ab1fa  6848e08300           push 0x83e048
// 004ab1ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ab207  e8848d0a00           call 0x553f90
// 004ab20c  83c408               add esp, 8
// 004ab20f  a328149700           mov dword ptr [0x971428], eax
// 004ab214  8b0c24               mov ecx, dword ptr [esp]
// 004ab217  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab21e  83c40c               add esp, 0xc
// 004ab221  c3                   ret 
// 004ab222  8b0c24               mov ecx, dword ptr [esp]
// 004ab225  a128149700           mov eax, dword ptr [0x971428]
// 004ab22a  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab231  83c40c               add esp, 0xc
// 004ab234  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
