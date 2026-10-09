// roc 2008-06 004ab400  unit: RBX::Network::Replicator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab400
//
// 004ab400  64a100000000         mov eax, dword ptr fs:[0]
// 004ab406  6aff                 push -1
// 004ab408  680e827c00           push 0x7c820e
// 004ab40d  50                   push eax
// 004ab40e  b801000000           mov eax, 1
// 004ab413  64892500000000       mov dword ptr fs:[0], esp
// 004ab41a  840554149700         test byte ptr [0x971454], al
// 004ab420  7530                 jne 0x4ab452
// 004ab422  090554149700         or dword ptr [0x971454], eax
// 004ab428  6aff                 push -1
// 004ab42a  6870e08300           push 0x83e070
// 004ab42f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ab437  e8548b0a00           call 0x553f90
// 004ab43c  83c408               add esp, 8
// 004ab43f  a350149700           mov dword ptr [0x971450], eax
// 004ab444  8b0c24               mov ecx, dword ptr [esp]
// 004ab447  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab44e  83c40c               add esp, 0xc
// 004ab451  c3                   ret 
// 004ab452  8b0c24               mov ecx, dword ptr [esp]
// 004ab455  a150149700           mov eax, dword ptr [0x971450]
// 004ab45a  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab461  83c40c               add esp, 0xc
// 004ab464  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
