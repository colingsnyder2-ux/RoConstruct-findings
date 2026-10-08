// roc 2008-06 007f1040  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1040
//
// 007f1040  56                   push esi
// 007f1041  6a05                 push 5
// 007f1043  33c9                 xor ecx, ecx
// 007f1045  51                   push ecx
// 007f1046  b8005d4900           mov eax, 0x495d00
// 007f104b  50                   push eax
// 007f104c  33f6                 xor esi, esi
// 007f104e  56                   push esi
// 007f104f  ba70994800           mov edx, 0x489970
// 007f1054  52                   push edx
// 007f1055  6890248200           push 0x822490
// 007f105a  6898248200           push 0x822498
// 007f105f  b990fe9600           mov ecx, 0x96fe90
// 007f1064  e88708caff           call 0x4918f0
// 007f1069  6840b27f00           push 0x7fb240
// 007f106e  e83c07ebff           call 0x6a17af
// 007f1073  83c404               add esp, 4
// 007f1076  5e                   pop esi
// 007f1077  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_characterAppearance@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
