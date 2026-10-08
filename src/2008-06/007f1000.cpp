// roc 2008-06 007f1000  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1000
//
// 007f1000  56                   push esi
// 007f1001  6a05                 push 5
// 007f1003  33c9                 xor ecx, ecx
// 007f1005  51                   push ecx
// 007f1006  b8b0444900           mov eax, 0x4944b0
// 007f100b  50                   push eax
// 007f100c  33f6                 xor esi, esi
// 007f100e  56                   push esi
// 007f100f  ba90655b00           mov edx, 0x5b6590
// 007f1014  52                   push edx
// 007f1015  6890248200           push 0x822490
// 007f101a  6884248200           push 0x822484
// 007f101f  b970fe9600           mov ecx, 0x96fe70
// 007f1024  e8a703caff           call 0x4913d0
// 007f1029  6820b17f00           push 0x7fb120
// 007f102e  e87c07ebff           call 0x6a17af
// 007f1033  83c404               add esp, 4
// 007f1036  5e                   pop esi
// 007f1037  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_Character@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
