// roc 2012-06 0053c8a0  unit: RBX::Network::VPlayer::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0053c8a0
//
// 0053c8a0  6aff                 push -1
// 0053c8a2  68f8bfaa00           push 0xaabff8
// 0053c8a7  64a100000000         mov eax, dword ptr fs:[0]
// 0053c8ad  50                   push eax
// 0053c8ae  64892500000000       mov dword ptr fs:[0], esp
// 0053c8b5  51                   push ecx
// 0053c8b6  56                   push esi
// 0053c8b7  8bf1                 mov esi, ecx
// 0053c8b9  89742404             mov dword ptr [esp + 4], esi
// 0053c8bd  8d4e04               lea ecx, [esi + 4]
// 0053c8c0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053c8c8  e8e3bef8ff           call 0x4c87b0
// 0053c8cd  8bce                 mov ecx, esi
// 0053c8cf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0053c8d7  e81440f8ff           call 0x4c08f0
// 0053c8dc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053c8e0  5e                   pop esi
// 0053c8e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0053c8e8  83c410               add esp, 0x10
// 0053c8eb  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
