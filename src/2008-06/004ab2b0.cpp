// roc 2008-06 004ab2b0  unit: RBX::Network::Replicator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab2b0
//
// 004ab2b0  64a100000000         mov eax, dword ptr fs:[0]
// 004ab2b6  6aff                 push -1
// 004ab2b8  68ae817c00           push 0x7c81ae
// 004ab2bd  50                   push eax
// 004ab2be  b801000000           mov eax, 1
// 004ab2c3  64892500000000       mov dword ptr fs:[0], esp
// 004ab2ca  84053c149700         test byte ptr [0x97143c], al
// 004ab2d0  7530                 jne 0x4ab302
// 004ab2d2  09053c149700         or dword ptr [0x97143c], eax
// 004ab2d8  6aff                 push -1
// 004ab2da  6858e08300           push 0x83e058
// 004ab2df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ab2e7  e8a48c0a00           call 0x553f90
// 004ab2ec  83c408               add esp, 8
// 004ab2ef  a338149700           mov dword ptr [0x971438], eax
// 004ab2f4  8b0c24               mov ecx, dword ptr [esp]
// 004ab2f7  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab2fe  83c40c               add esp, 0xc
// 004ab301  c3                   ret 
// 004ab302  8b0c24               mov ecx, dword ptr [esp]
// 004ab305  a138149700           mov eax, dword ptr [0x971438]
// 004ab30a  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab311  83c40c               add esp, 0xc
// 004ab314  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
