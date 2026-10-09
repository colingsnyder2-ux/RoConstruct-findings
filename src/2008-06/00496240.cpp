// roc 2008-06 00496240  unit: RBX::Network::Players  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496240
//
// 00496240  64a100000000         mov eax, dword ptr fs:[0]
// 00496246  6aff                 push -1
// 00496248  68de6a7c00           push 0x7c6ade
// 0049624d  50                   push eax
// 0049624e  b801000000           mov eax, 1
// 00496253  64892500000000       mov dword ptr fs:[0], esp
// 0049625a  840568029700         test byte ptr [0x970268], al
// 00496260  7530                 jne 0x496292
// 00496262  090568029700         or dword ptr [0x970268], eax
// 00496268  6aff                 push -1
// 0049626a  6824979300           push 0x939724
// 0049626f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00496277  e814dd0b00           call 0x553f90
// 0049627c  83c408               add esp, 8
// 0049627f  a364029700           mov dword ptr [0x970264], eax
// 00496284  8b0c24               mov ecx, dword ptr [esp]
// 00496287  64890d00000000       mov dword ptr fs:[0], ecx
// 0049628e  83c40c               add esp, 0xc
// 00496291  c3                   ret 
// 00496292  8b0c24               mov ecx, dword ptr [esp]
// 00496295  a164029700           mov eax, dword ptr [0x970264]
// 0049629a  64890d00000000       mov dword ptr fs:[0], ecx
// 004962a1  83c40c               add esp, 0xc
// 004962a4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
