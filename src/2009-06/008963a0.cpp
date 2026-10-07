// roc 2009-06 008963a0  unit: seg_00890000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008963a0
//
// 008963a0  833d3c06a40000       cmp dword ptr [0xa4063c], 0
// 008963a7  760c                 jbe 0x8963b5
// 008963a9  a13406a400           mov eax, dword ptr [0xa40634]
// 008963ae  50                   push eax
// 008963af  e82a29e8ff           call 0x718cde
// 008963b4  59                   pop ecx
// 008963b5  c3                   ret 
// library rbx2016-raknet/RakString.cpp (function ??__F?freeList@RakString@RakNet@@2V?$List@PAUSharedString@RakString@RakNet@@@DataStructures@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
