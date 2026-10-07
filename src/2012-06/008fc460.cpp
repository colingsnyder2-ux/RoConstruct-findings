// roc 2012-06 008fc460  unit: RBX::VAnimationTrackState::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008fc460
//
// 008fc460  6aff                 push -1
// 008fc462  68b875ad00           push 0xad75b8
// 008fc467  64a100000000         mov eax, dword ptr fs:[0]
// 008fc46d  50                   push eax
// 008fc46e  64892500000000       mov dword ptr fs:[0], esp
// 008fc475  51                   push ecx
// 008fc476  56                   push esi
// 008fc477  8bf1                 mov esi, ecx
// 008fc479  89742404             mov dword ptr [esp + 4], esi
// 008fc47d  8d4e04               lea ecx, [esi + 4]
// 008fc480  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008fc488  e823c3bcff           call 0x4c87b0
// 008fc48d  8bce                 mov ecx, esi
// 008fc48f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008fc497  e894eeffff           call 0x8fb330
// 008fc49c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008fc4a0  5e                   pop esi
// 008fc4a1  64890d00000000       mov dword ptr fs:[0], ecx
// 008fc4a8  83c410               add esp, 0x10
// 008fc4ab  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
