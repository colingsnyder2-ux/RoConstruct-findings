// roc 2011-06 004c37b0  unit: RBX::ObjectValue  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c37b0
//
// 004c37b0  6aff                 push -1
// 004c37b2  68288f9d00           push 0x9d8f28
// 004c37b7  64a100000000         mov eax, dword ptr fs:[0]
// 004c37bd  50                   push eax
// 004c37be  64892500000000       mov dword ptr fs:[0], esp
// 004c37c5  51                   push ecx
// 004c37c6  56                   push esi
// 004c37c7  8bf1                 mov esi, ecx
// 004c37c9  89742404             mov dword ptr [esp + 4], esi
// 004c37cd  8d4e04               lea ecx, [esi + 4]
// 004c37d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c37d8  e86396ffff           call 0x4bce40
// 004c37dd  8bce                 mov ecx, esi
// 004c37df  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c37e7  e8c497ffff           call 0x4bcfb0
// 004c37ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c37f0  5e                   pop esi
// 004c37f1  64890d00000000       mov dword ptr fs:[0], ecx
// 004c37f8  83c410               add esp, 0x10
// 004c37fb  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
