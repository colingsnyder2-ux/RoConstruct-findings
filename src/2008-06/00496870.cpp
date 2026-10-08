// roc 2008-06 00496870  unit: RBX::Network::Players::Plugin  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496870
//
// 00496870  64a100000000         mov eax, dword ptr fs:[0]
// 00496876  6aff                 push -1
// 00496878  68de6b7c00           push 0x7c6bde
// 0049687d  50                   push eax
// 0049687e  b801000000           mov eax, 1
// 00496883  64892500000000       mov dword ptr fs:[0], esp
// 0049688a  840584029700         test byte ptr [0x970284], al
// 00496890  753e                 jne 0x4968d0
// 00496892  090584029700         or dword ptr [0x970284], eax
// 00496898  6850148200           push 0x821450
// 0049689d  68404d9300           push 0x934d40
// 004968a2  6834168200           push 0x821634
// 004968a7  b974029700           mov ecx, 0x970274
// 004968ac  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004968b4  e8e72effff           call 0x4897a0
// 004968b9  68b0b77f00           push 0x7fb7b0
// 004968be  c705740297004c148200 mov dword ptr [0x970274], 0x82144c
// 004968c8  e8e2ae2000           call 0x6a17af
// 004968cd  83c404               add esp, 4
// 004968d0  8b0c24               mov ecx, dword ptr [esp]
// 004968d3  b874029700           mov eax, 0x970274
// 004968d8  64890d00000000       mov dword ptr fs:[0], ecx
// 004968df  83c40c               add esp, 0xc
// 004968e2  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
