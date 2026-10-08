// roc 2008-06 007f8b60  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8b60
//
// 007f8b60  56                   push esi
// 007f8b61  6a05                 push 5
// 007f8b63  33c9                 xor ecx, ecx
// 007f8b65  51                   push ecx
// 007f8b66  b8a0c36300           mov eax, 0x63c3a0
// 007f8b6b  50                   push eax
// 007f8b6c  33f6                 xor esi, esi
// 007f8b6e  56                   push esi
// 007f8b6f  ba30b36300           mov edx, 0x63b330
// 007f8b74  52                   push edx
// 007f8b75  6890248200           push 0x822490
// 007f8b7a  68689b8400           push 0x849b68
// 007f8b7f  b9fcd49700           mov ecx, 0x97d4fc
// 007f8b84  e87731e4ff           call 0x63bd00
// 007f8b89  6860108000           push 0x801060
// 007f8b8e  e81c8ceaff           call 0x6a17af
// 007f8b93  83c404               add esp, 4
// 007f8b96  5e                   pop esi
// 007f8b97  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??__Eprop_MaxItems@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
