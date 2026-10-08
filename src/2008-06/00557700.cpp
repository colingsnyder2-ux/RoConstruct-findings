// roc 2008-06 00557700  unit: RBX::VInstance::?$NonFactoryProduct  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557700
//
// 00557700  64a100000000         mov eax, dword ptr fs:[0]
// 00557706  6aff                 push -1
// 00557708  684ee17c00           push 0x7ce14e
// 0055770d  50                   push eax
// 0055770e  b801000000           mov eax, 1
// 00557713  64892500000000       mov dword ptr fs:[0], esp
// 0055771a  8405e03f9700         test byte ptr [0x973fe0], al
// 00557720  753e                 jne 0x557760
// 00557722  0905e03f9700         or dword ptr [0x973fe0], eax
// 00557728  6850148200           push 0x821450
// 0055772d  68404d9300           push 0x934d40
// 00557732  6834168200           push 0x821634
// 00557737  b9d03f9700           mov ecx, 0x973fd0
// 0055773c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00557744  e85720f3ff           call 0x4897a0
// 00557749  6890c87f00           push 0x7fc890
// 0055774e  c705d03f97004c148200 mov dword ptr [0x973fd0], 0x82144c
// 00557758  e852a01400           call 0x6a17af
// 0055775d  83c404               add esp, 4
// 00557760  8b0c24               mov ecx, dword ptr [esp]
// 00557763  b8d03f9700           mov eax, 0x973fd0
// 00557768  64890d00000000       mov dword ptr fs:[0], ecx
// 0055776f  83c40c               add esp, 0xc
// 00557772  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
