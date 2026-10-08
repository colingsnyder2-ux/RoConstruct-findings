// roc 2007-08 0076f160  unit: seg_00760000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f160
//
// 0076f160  33c9                 xor ecx, ecx
// 0076f162  51                   push ecx
// 0076f163  6880797800           push 0x787980
// 0076f168  68f8bd7900           push 0x79bdf8
// 0076f16d  51                   push ecx
// 0076f16e  b880894900           mov eax, 0x498980
// 0076f173  50                   push eax
// 0076f174  b978e28b00           mov ecx, 0x8be278
// 0076f179  e8d26dd2ff           call 0x495f50
// 0076f17e  6870857700           push 0x778570
// 0076f183  e89b1becff           call 0x630d23
// 0076f188  59                   pop ecx
// 0076f189  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_setAbuseReportUrl@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
