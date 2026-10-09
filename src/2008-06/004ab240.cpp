// roc 2008-06 004ab240  unit: RBX::Network::Replicator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab240
//
// 004ab240  64a100000000         mov eax, dword ptr fs:[0]
// 004ab246  6aff                 push -1
// 004ab248  688e817c00           push 0x7c818e
// 004ab24d  50                   push eax
// 004ab24e  b801000000           mov eax, 1
// 004ab253  64892500000000       mov dword ptr fs:[0], esp
// 004ab25a  840534149700         test byte ptr [0x971434], al
// 004ab260  7530                 jne 0x4ab292
// 004ab262  090534149700         or dword ptr [0x971434], eax
// 004ab268  6aff                 push -1
// 004ab26a  6850e08300           push 0x83e050
// 004ab26f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ab277  e8148d0a00           call 0x553f90
// 004ab27c  83c408               add esp, 8
// 004ab27f  a330149700           mov dword ptr [0x971430], eax
// 004ab284  8b0c24               mov ecx, dword ptr [esp]
// 004ab287  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab28e  83c40c               add esp, 0xc
// 004ab291  c3                   ret 
// 004ab292  8b0c24               mov ecx, dword ptr [esp]
// 004ab295  a130149700           mov eax, dword ptr [0x971430]
// 004ab29a  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab2a1  83c40c               add esp, 0xc
// 004ab2a4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
