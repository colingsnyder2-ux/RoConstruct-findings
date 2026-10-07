// roc 2011-06 00744f30  unit: RBX::Network::VPlayer::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00744f30
//
// 00744f30  6aff                 push -1
// 00744f32  68588e9f00           push 0x9f8e58
// 00744f37  64a100000000         mov eax, dword ptr fs:[0]
// 00744f3d  50                   push eax
// 00744f3e  64892500000000       mov dword ptr fs:[0], esp
// 00744f45  51                   push ecx
// 00744f46  56                   push esi
// 00744f47  8bf1                 mov esi, ecx
// 00744f49  89742404             mov dword ptr [esp + 4], esi
// 00744f4d  8d4e04               lea ecx, [esi + 4]
// 00744f50  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00744f58  e8e37ed7ff           call 0x4bce40
// 00744f5d  8bce                 mov ecx, esi
// 00744f5f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00744f67  e834e6ffff           call 0x7435a0
// 00744f6c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00744f70  5e                   pop esi
// 00744f71  64890d00000000       mov dword ptr fs:[0], ecx
// 00744f78  83c410               add esp, 0x10
// 00744f7b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
