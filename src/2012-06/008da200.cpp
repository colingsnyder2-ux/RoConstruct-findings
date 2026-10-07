// roc 2012-06 008da200  unit: RBX::VArcHandles::?$EventReplicator  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008da200
//
// 008da200  6aff                 push -1
// 008da202  68c861ad00           push 0xad61c8
// 008da207  64a100000000         mov eax, dword ptr fs:[0]
// 008da20d  50                   push eax
// 008da20e  64892500000000       mov dword ptr fs:[0], esp
// 008da215  51                   push ecx
// 008da216  56                   push esi
// 008da217  8bf1                 mov esi, ecx
// 008da219  89742404             mov dword ptr [esp + 4], esi
// 008da21d  8d4e04               lea ecx, [esi + 4]
// 008da220  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008da228  e883e5beff           call 0x4c87b0
// 008da22d  8bce                 mov ecx, esi
// 008da22f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008da237  e884e4ffff           call 0x8d86c0
// 008da23c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008da240  5e                   pop esi
// 008da241  64890d00000000       mov dword ptr fs:[0], ecx
// 008da248  83c410               add esp, 0x10
// 008da24b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
