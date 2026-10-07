// roc 2012-06 008fc4b0  unit: RBX::VAnimationTrackState::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008fc4b0
//
// 008fc4b0  6aff                 push -1
// 008fc4b2  68d875ad00           push 0xad75d8
// 008fc4b7  64a100000000         mov eax, dword ptr fs:[0]
// 008fc4bd  50                   push eax
// 008fc4be  64892500000000       mov dword ptr fs:[0], esp
// 008fc4c5  51                   push ecx
// 008fc4c6  56                   push esi
// 008fc4c7  8bf1                 mov esi, ecx
// 008fc4c9  89742404             mov dword ptr [esp + 4], esi
// 008fc4cd  8d4e04               lea ecx, [esi + 4]
// 008fc4d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008fc4d8  e8d3c2bcff           call 0x4c87b0
// 008fc4dd  8bce                 mov ecx, esi
// 008fc4df  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008fc4e7  e8d4eeffff           call 0x8fb3c0
// 008fc4ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008fc4f0  5e                   pop esi
// 008fc4f1  64890d00000000       mov dword ptr fs:[0], ecx
// 008fc4f8  83c410               add esp, 0x10
// 008fc4fb  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
