// roc 2011-06 00a34170  unit: seg_00a30000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34170
//
// 00a34170  833de089cb0000       cmp dword ptr [0xcb89e0], 0
// 00a34177  760c                 jbe 0xa34185
// 00a34179  a1d889cb00           mov eax, dword ptr [0xcb89d8]
// 00a3417e  50                   push eax
// 00a3417f  e88061ddff           call 0x80a304
// 00a34184  59                   pop ecx
// 00a34185  c3                   ret 
// library rbx2016-raknet/RakString.cpp (function ??__F?freeList@RakString@RakNet@@2V?$List@PAUSharedString@RakString@RakNet@@@DataStructures@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
