// roc 2012-06 00b149e0  unit: seg_00b10000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b149e0
//
// 00b149e0  833da45be20000       cmp dword ptr [0xe25ba4], 0
// 00b149e7  760c                 jbe 0xb149f5
// 00b149e9  a19c5be200           mov eax, dword ptr [0xe25b9c]
// 00b149ee  50                   push eax
// 00b149ef  e8c6d9e6ff           call 0x9823ba
// 00b149f4  59                   pop ecx
// 00b149f5  c3                   ret 
// library rbx2016-raknet/RakString.cpp (function ??__F?freeList@RakString@RakNet@@2V?$List@PAUSharedString@RakString@RakNet@@@DataStructures@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
