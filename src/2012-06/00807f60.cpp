// roc 2012-06 00807f60  unit: RBX::VInsertService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00807f60
//
// 00807f60  6aff                 push -1
// 00807f62  68b8aeac00           push 0xacaeb8
// 00807f67  64a100000000         mov eax, dword ptr fs:[0]
// 00807f6d  50                   push eax
// 00807f6e  64892500000000       mov dword ptr fs:[0], esp
// 00807f75  51                   push ecx
// 00807f76  56                   push esi
// 00807f77  8bf1                 mov esi, ecx
// 00807f79  89742404             mov dword ptr [esp + 4], esi
// 00807f7d  8d4e04               lea ecx, [esi + 4]
// 00807f80  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00807f88  e82308ccff           call 0x4c87b0
// 00807f8d  8bce                 mov ecx, esi
// 00807f8f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00807f97  e854d1ffff           call 0x8050f0
// 00807f9c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00807fa0  5e                   pop esi
// 00807fa1  64890d00000000       mov dword ptr fs:[0], ecx
// 00807fa8  83c410               add esp, 0x10
// 00807fab  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
