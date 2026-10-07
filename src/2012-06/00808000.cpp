// roc 2012-06 00808000  unit: RBX::VInsertService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00808000
//
// 00808000  6aff                 push -1
// 00808002  68f8aeac00           push 0xacaef8
// 00808007  64a100000000         mov eax, dword ptr fs:[0]
// 0080800d  50                   push eax
// 0080800e  64892500000000       mov dword ptr fs:[0], esp
// 00808015  51                   push ecx
// 00808016  56                   push esi
// 00808017  8bf1                 mov esi, ecx
// 00808019  89742404             mov dword ptr [esp + 4], esi
// 0080801d  8d4e04               lea ecx, [esi + 4]
// 00808020  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00808028  e88307ccff           call 0x4c87b0
// 0080802d  8bce                 mov ecx, esi
// 0080802f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00808037  e8c419d3ff           call 0x539a00
// 0080803c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00808040  5e                   pop esi
// 00808041  64890d00000000       mov dword ptr fs:[0], ecx
// 00808048  83c410               add esp, 0x10
// 0080804b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
