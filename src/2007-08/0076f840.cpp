// roc 2007-08 0076f840  unit: seg_00760000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f840
//
// 0076f840  33c9                 xor ecx, ecx
// 0076f842  51                   push ecx
// 0076f843  6804e17900           push 0x79e104
// 0076f848  51                   push ecx
// 0076f849  b870924a00           mov eax, 0x4a9270
// 0076f84e  50                   push eax
// 0076f84f  b978eb8b00           mov ecx, 0x8beb78
// 0076f854  e8471cd4ff           call 0x4b14a0
// 0076f859  6880897700           push 0x778980
// 0076f85e  e8c014ecff           call 0x630d23
// 0076f863  59                   pop ecx
// 0076f864  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??__Eprop_RemotePlayer@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
