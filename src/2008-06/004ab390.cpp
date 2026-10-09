// roc 2008-06 004ab390  unit: RBX::Network::Replicator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab390
//
// 004ab390  64a100000000         mov eax, dword ptr fs:[0]
// 004ab396  6aff                 push -1
// 004ab398  68ee817c00           push 0x7c81ee
// 004ab39d  50                   push eax
// 004ab39e  b801000000           mov eax, 1
// 004ab3a3  64892500000000       mov dword ptr fs:[0], esp
// 004ab3aa  84054c149700         test byte ptr [0x97144c], al
// 004ab3b0  7530                 jne 0x4ab3e2
// 004ab3b2  09054c149700         or dword ptr [0x97144c], eax
// 004ab3b8  6aff                 push -1
// 004ab3ba  6868e08300           push 0x83e068
// 004ab3bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ab3c7  e8c48b0a00           call 0x553f90
// 004ab3cc  83c408               add esp, 8
// 004ab3cf  a348149700           mov dword ptr [0x971448], eax
// 004ab3d4  8b0c24               mov ecx, dword ptr [esp]
// 004ab3d7  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab3de  83c40c               add esp, 0xc
// 004ab3e1  c3                   ret 
// 004ab3e2  8b0c24               mov ecx, dword ptr [esp]
// 004ab3e5  a148149700           mov eax, dword ptr [0x971448]
// 004ab3ea  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab3f1  83c40c               add esp, 0xc
// 004ab3f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
