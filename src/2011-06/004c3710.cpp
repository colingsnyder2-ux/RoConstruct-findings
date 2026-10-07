// roc 2011-06 004c3710  unit: RBX::ObjectValue  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c3710
//
// 004c3710  6aff                 push -1
// 004c3712  68e88e9d00           push 0x9d8ee8
// 004c3717  64a100000000         mov eax, dword ptr fs:[0]
// 004c371d  50                   push eax
// 004c371e  64892500000000       mov dword ptr fs:[0], esp
// 004c3725  51                   push ecx
// 004c3726  56                   push esi
// 004c3727  8bf1                 mov esi, ecx
// 004c3729  89742404             mov dword ptr [esp + 4], esi
// 004c372d  8d4e04               lea ecx, [esi + 4]
// 004c3730  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c3738  e80397ffff           call 0x4bce40
// 004c373d  8bce                 mov ecx, esi
// 004c373f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c3747  e8949fffff           call 0x4bd6e0
// 004c374c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c3750  5e                   pop esi
// 004c3751  64890d00000000       mov dword ptr fs:[0], ecx
// 004c3758  83c410               add esp, 0x10
// 004c375b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
