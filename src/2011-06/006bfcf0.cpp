// roc 2011-06 006bfcf0  unit: RBX::VInsertService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006bfcf0
//
// 006bfcf0  6aff                 push -1
// 006bfcf2  68a81f9f00           push 0x9f1fa8
// 006bfcf7  64a100000000         mov eax, dword ptr fs:[0]
// 006bfcfd  50                   push eax
// 006bfcfe  64892500000000       mov dword ptr fs:[0], esp
// 006bfd05  51                   push ecx
// 006bfd06  56                   push esi
// 006bfd07  8bf1                 mov esi, ecx
// 006bfd09  89742404             mov dword ptr [esp + 4], esi
// 006bfd0d  8d4e04               lea ecx, [esi + 4]
// 006bfd10  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006bfd18  e823d1dfff           call 0x4bce40
// 006bfd1d  8bce                 mov ecx, esi
// 006bfd1f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006bfd27  e824d2ffff           call 0x6bcf50
// 006bfd2c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006bfd30  5e                   pop esi
// 006bfd31  64890d00000000       mov dword ptr fs:[0], ecx
// 006bfd38  83c410               add esp, 0x10
// 006bfd3b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
