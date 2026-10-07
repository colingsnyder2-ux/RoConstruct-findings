// roc 2011-06 00744ee0  unit: RBX::Network::VPlayer::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00744ee0
//
// 00744ee0  6aff                 push -1
// 00744ee2  68388e9f00           push 0x9f8e38
// 00744ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00744eed  50                   push eax
// 00744eee  64892500000000       mov dword ptr fs:[0], esp
// 00744ef5  51                   push ecx
// 00744ef6  56                   push esi
// 00744ef7  8bf1                 mov esi, ecx
// 00744ef9  89742404             mov dword ptr [esp + 4], esi
// 00744efd  8d4e04               lea ecx, [esi + 4]
// 00744f00  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00744f08  e8337fd7ff           call 0x4bce40
// 00744f0d  8bce                 mov ecx, esi
// 00744f0f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00744f17  e814e5ffff           call 0x743430
// 00744f1c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00744f20  5e                   pop esi
// 00744f21  64890d00000000       mov dword ptr fs:[0], ecx
// 00744f28  83c410               add esp, 0x10
// 00744f2b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
