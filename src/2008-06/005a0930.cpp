// roc 2008-06 005a0930  unit: RBX::RootInstance  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0930
//
// 005a0930  64a100000000         mov eax, dword ptr fs:[0]
// 005a0936  6aff                 push -1
// 005a0938  681e297d00           push 0x7d291e
// 005a093d  50                   push eax
// 005a093e  b801000000           mov eax, 1
// 005a0943  64892500000000       mov dword ptr fs:[0], esp
// 005a094a  8405686a9700         test byte ptr [0x976a68], al
// 005a0950  753e                 jne 0x5a0990
// 005a0952  0905686a9700         or dword ptr [0x976a68], eax
// 005a0958  6850148200           push 0x821450
// 005a095d  68404d9300           push 0x934d40
// 005a0962  6834168200           push 0x821634
// 005a0967  b9586a9700           mov ecx, 0x976a58
// 005a096c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a0974  e8278eeeff           call 0x4897a0
// 005a0979  68a0e07f00           push 0x7fe0a0
// 005a097e  c705586a97004c148200 mov dword ptr [0x976a58], 0x82144c
// 005a0988  e8220e1000           call 0x6a17af
// 005a098d  83c404               add esp, 4
// 005a0990  8b0c24               mov ecx, dword ptr [esp]
// 005a0993  b8586a9700           mov eax, 0x976a58
// 005a0998  64890d00000000       mov dword ptr fs:[0], ecx
// 005a099f  83c40c               add esp, 0xc
// 005a09a2  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$singleton@PAVModelInstance@RBX@@@RefType@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
