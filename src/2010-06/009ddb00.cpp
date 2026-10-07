// roc 2010-06 009ddb00  unit: seg_009d0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddb00
//
// 009ddb00  833d3c7bc00000       cmp dword ptr [0xc07b3c], 0
// 009ddb07  760c                 jbe 0x9ddb15
// 009ddb09  a1347bc000           mov eax, dword ptr [0xc07b34]
// 009ddb0e  50                   push eax
// 009ddb0f  e832a1dcff           call 0x7a7c46
// 009ddb14  59                   pop ecx
// 009ddb15  c3                   ret 
// library rbx2016-raknet/RakString.cpp (function ??__F?freeList@RakString@RakNet@@2V?$List@PAUSharedString@RakString@RakNet@@@DataStructures@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
