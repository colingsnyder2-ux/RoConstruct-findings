// roc 2012-06 00807fb0  unit: RBX::VInsertService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00807fb0
//
// 00807fb0  6aff                 push -1
// 00807fb2  68d8aeac00           push 0xacaed8
// 00807fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00807fbd  50                   push eax
// 00807fbe  64892500000000       mov dword ptr fs:[0], esp
// 00807fc5  51                   push ecx
// 00807fc6  56                   push esi
// 00807fc7  8bf1                 mov esi, ecx
// 00807fc9  89742404             mov dword ptr [esp + 4], esi
// 00807fcd  8d4e04               lea ecx, [esi + 4]
// 00807fd0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00807fd8  e8d307ccff           call 0x4c87b0
// 00807fdd  8bce                 mov ecx, esi
// 00807fdf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00807fe7  e894d1ffff           call 0x805180
// 00807fec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00807ff0  5e                   pop esi
// 00807ff1  64890d00000000       mov dword ptr fs:[0], ecx
// 00807ff8  83c410               add esp, 0x10
// 00807ffb  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
