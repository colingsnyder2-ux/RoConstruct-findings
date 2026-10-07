// roc 2012-06 008fc500  unit: RBX::VAnimationTrackState::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008fc500
//
// 008fc500  6aff                 push -1
// 008fc502  68f875ad00           push 0xad75f8
// 008fc507  64a100000000         mov eax, dword ptr fs:[0]
// 008fc50d  50                   push eax
// 008fc50e  64892500000000       mov dword ptr fs:[0], esp
// 008fc515  51                   push ecx
// 008fc516  56                   push esi
// 008fc517  8bf1                 mov esi, ecx
// 008fc519  89742404             mov dword ptr [esp + 4], esi
// 008fc51d  8d4e04               lea ecx, [esi + 4]
// 008fc520  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008fc528  e883c2bcff           call 0x4c87b0
// 008fc52d  8bce                 mov ecx, esi
// 008fc52f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008fc537  e814efffff           call 0x8fb450
// 008fc53c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008fc540  5e                   pop esi
// 008fc541  64890d00000000       mov dword ptr fs:[0], ecx
// 008fc548  83c410               add esp, 0x10
// 008fc54b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
