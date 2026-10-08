// roc 2007-08 0076efa0  unit: seg_00760000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076efa0
//
// 0076efa0  6a01                 push 1
// 0076efa2  33c9                 xor ecx, ecx
// 0076efa4  51                   push ecx
// 0076efa5  51                   push ecx
// 0076efa6  b840234900           mov eax, 0x492340
// 0076efab  50                   push eax
// 0076efac  6898b67900           push 0x79b698
// 0076efb1  688cbd7900           push 0x79bd8c
// 0076efb6  b928e18b00           mov ecx, 0x8be128
// 0076efbb  e8f063d2ff           call 0x4953b0
// 0076efc0  6830857700           push 0x778530
// 0076efc5  e8591decff           call 0x630d23
// 0076efca  59                   pop ecx
// 0076efcb  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__EpropPlayerCount@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
