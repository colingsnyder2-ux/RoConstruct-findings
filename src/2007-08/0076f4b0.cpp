// roc 2007-08 0076f4b0  unit: seg_00760000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f4b0
//
// 0076f4b0  33c9                 xor ecx, ecx
// 0076f4b2  51                   push ecx
// 0076f4b3  6834cc7900           push 0x79cc34
// 0076f4b8  51                   push ecx
// 0076f4b9  b800d64900           mov eax, 0x49d600
// 0076f4be  50                   push eax
// 0076f4bf  b988e68b00           mov ecx, 0x8be688
// 0076f4c4  e8b700d3ff           call 0x49f580
// 0076f4c9  6880877700           push 0x778780
// 0076f4ce  e85018ecff           call 0x630d23
// 0076f4d3  59                   pop ecx
// 0076f4d4  c3                   ret 
// library rbxgs-net/Server.cpp (function ??__Ef_GetClientCount@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
