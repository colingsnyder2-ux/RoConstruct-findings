// roc 2012-06 008da1b0  unit: RBX::VArcHandles::?$EventReplicator  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008da1b0
//
// 008da1b0  6aff                 push -1
// 008da1b2  68a861ad00           push 0xad61a8
// 008da1b7  64a100000000         mov eax, dword ptr fs:[0]
// 008da1bd  50                   push eax
// 008da1be  64892500000000       mov dword ptr fs:[0], esp
// 008da1c5  51                   push ecx
// 008da1c6  56                   push esi
// 008da1c7  8bf1                 mov esi, ecx
// 008da1c9  89742404             mov dword ptr [esp + 4], esi
// 008da1cd  8d4e04               lea ecx, [esi + 4]
// 008da1d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008da1d8  e8d3e5beff           call 0x4c87b0
// 008da1dd  8bce                 mov ecx, esi
// 008da1df  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008da1e7  e874e3ffff           call 0x8d8560
// 008da1ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008da1f0  5e                   pop esi
// 008da1f1  64890d00000000       mov dword ptr fs:[0], ecx
// 008da1f8  83c410               add esp, 0x10
// 008da1fb  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
