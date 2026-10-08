// roc 2007-08 0076f100  unit: seg_00760000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f100
//
// 0076f100  6a01                 push 1
// 0076f102  33c9                 xor ecx, ecx
// 0076f104  68d8bd7900           push 0x79bdd8
// 0076f109  51                   push ecx
// 0076f10a  b8b02a4900           mov eax, 0x492ab0
// 0076f10f  50                   push eax
// 0076f110  b948e18b00           mov ecx, 0x8be148
// 0076f115  e84672d2ff           call 0x496360
// 0076f11a  6860857700           push 0x778560
// 0076f11f  e8ff1becff           call 0x630d23
// 0076f124  59                   pop ecx
// 0076f125  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_GetPlayers@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
