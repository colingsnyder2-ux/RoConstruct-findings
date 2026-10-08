// roc 2008-06 007f17f0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f17f0
//
// 007f17f0  56                   push esi
// 007f17f1  6a05                 push 5
// 007f17f3  33c9                 xor ecx, ecx
// 007f17f5  51                   push ecx
// 007f17f6  b850d44900           mov eax, 0x49d450
// 007f17fb  50                   push eax
// 007f17fc  33f6                 xor esi, esi
// 007f17fe  56                   push esi
// 007f17ff  ba505e4900           mov edx, 0x495e50
// 007f1804  52                   push edx
// 007f1805  6890248200           push 0x822490
// 007f180a  687c2b8200           push 0x822b7c
// 007f180f  b99c029700           mov ecx, 0x97029c
// 007f1814  e89791caff           call 0x49a9b0
// 007f1819  68e0b77f00           push 0x7fb7e0
// 007f181e  e88cffeaff           call 0x6a17af
// 007f1823  83c404               add esp, 4
// 007f1826  5e                   pop esi
// 007f1827  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__EpropPlayerMaxCount@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
