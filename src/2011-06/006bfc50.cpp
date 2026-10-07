// roc 2011-06 006bfc50  unit: RBX::VInsertService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006bfc50
//
// 006bfc50  6aff                 push -1
// 006bfc52  68681f9f00           push 0x9f1f68
// 006bfc57  64a100000000         mov eax, dword ptr fs:[0]
// 006bfc5d  50                   push eax
// 006bfc5e  64892500000000       mov dword ptr fs:[0], esp
// 006bfc65  51                   push ecx
// 006bfc66  56                   push esi
// 006bfc67  8bf1                 mov esi, ecx
// 006bfc69  89742404             mov dword ptr [esp + 4], esi
// 006bfc6d  8d4e04               lea ecx, [esi + 4]
// 006bfc70  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006bfc78  e8c3d1dfff           call 0x4bce40
// 006bfc7d  8bce                 mov ecx, esi
// 006bfc7f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006bfc87  e854d1ffff           call 0x6bcde0
// 006bfc8c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006bfc90  5e                   pop esi
// 006bfc91  64890d00000000       mov dword ptr fs:[0], ecx
// 006bfc98  83c410               add esp, 0x10
// 006bfc9b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
