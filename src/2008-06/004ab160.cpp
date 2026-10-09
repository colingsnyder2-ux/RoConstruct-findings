// roc 2008-06 004ab160  unit: RBX::Network::Replicator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab160
//
// 004ab160  64a100000000         mov eax, dword ptr fs:[0]
// 004ab166  6aff                 push -1
// 004ab168  684e817c00           push 0x7c814e
// 004ab16d  50                   push eax
// 004ab16e  b801000000           mov eax, 1
// 004ab173  64892500000000       mov dword ptr fs:[0], esp
// 004ab17a  840524149700         test byte ptr [0x971424], al
// 004ab180  7530                 jne 0x4ab1b2
// 004ab182  090524149700         or dword ptr [0x971424], eax
// 004ab188  6aff                 push -1
// 004ab18a  6840e08300           push 0x83e040
// 004ab18f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ab197  e8f48d0a00           call 0x553f90
// 004ab19c  83c408               add esp, 8
// 004ab19f  a320149700           mov dword ptr [0x971420], eax
// 004ab1a4  8b0c24               mov ecx, dword ptr [esp]
// 004ab1a7  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab1ae  83c40c               add esp, 0xc
// 004ab1b1  c3                   ret 
// 004ab1b2  8b0c24               mov ecx, dword ptr [esp]
// 004ab1b5  a120149700           mov eax, dword ptr [0x971420]
// 004ab1ba  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab1c1  83c40c               add esp, 0xc
// 004ab1c4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
