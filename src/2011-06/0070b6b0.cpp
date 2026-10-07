// roc 2011-06 0070b6b0  unit: RBX::VArcHandles::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070b6b0
//
// 0070b6b0  6aff                 push -1
// 0070b6b2  68f85f9f00           push 0x9f5ff8
// 0070b6b7  64a100000000         mov eax, dword ptr fs:[0]
// 0070b6bd  50                   push eax
// 0070b6be  64892500000000       mov dword ptr fs:[0], esp
// 0070b6c5  51                   push ecx
// 0070b6c6  56                   push esi
// 0070b6c7  8bf1                 mov esi, ecx
// 0070b6c9  89742404             mov dword ptr [esp + 4], esi
// 0070b6cd  8d4e04               lea ecx, [esi + 4]
// 0070b6d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0070b6d8  e86317dbff           call 0x4bce40
// 0070b6dd  8bce                 mov ecx, esi
// 0070b6df  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0070b6e7  e884dbffff           call 0x709270
// 0070b6ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070b6f0  5e                   pop esi
// 0070b6f1  64890d00000000       mov dword ptr fs:[0], ecx
// 0070b6f8  83c410               add esp, 0x10
// 0070b6fb  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
