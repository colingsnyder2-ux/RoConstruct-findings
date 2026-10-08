// roc 2008-06 0048a910  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048a910
//
// 0048a910  64a100000000         mov eax, dword ptr fs:[0]
// 0048a916  6aff                 push -1
// 0048a918  689e607c00           push 0x7c609e
// 0048a91d  50                   push eax
// 0048a91e  b801000000           mov eax, 1
// 0048a923  64892500000000       mov dword ptr fs:[0], esp
// 0048a92a  8405a8fb9600         test byte ptr [0x96fba8], al
// 0048a930  753e                 jne 0x48a970
// 0048a932  0905a8fb9600         or dword ptr [0x96fba8], eax
// 0048a938  6850148200           push 0x821450
// 0048a93d  68404d9300           push 0x934d40
// 0048a942  6834168200           push 0x821634
// 0048a947  b998fb9600           mov ecx, 0x96fb98
// 0048a94c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0048a954  e847eeffff           call 0x4897a0
// 0048a959  6810b17f00           push 0x7fb110
// 0048a95e  c70598fb96004c148200 mov dword ptr [0x96fb98], 0x82144c
// 0048a968  e8426e2100           call 0x6a17af
// 0048a96d  83c404               add esp, 4
// 0048a970  8b0c24               mov ecx, dword ptr [esp]
// 0048a973  b898fb9600           mov eax, 0x96fb98
// 0048a978  64890d00000000       mov dword ptr fs:[0], ecx
// 0048a97f  83c40c               add esp, 0xc
// 0048a982  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
