// roc 2012-06 008d62b0  unit: RBX::VHandles::?$EventReplicator  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008d62b0
//
// 008d62b0  6aff                 push -1
// 008d62b2  68685fad00           push 0xad5f68
// 008d62b7  64a100000000         mov eax, dword ptr fs:[0]
// 008d62bd  50                   push eax
// 008d62be  64892500000000       mov dword ptr fs:[0], esp
// 008d62c5  51                   push ecx
// 008d62c6  56                   push esi
// 008d62c7  8bf1                 mov esi, ecx
// 008d62c9  89742404             mov dword ptr [esp + 4], esi
// 008d62cd  8d4e04               lea ecx, [esi + 4]
// 008d62d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008d62d8  e8d324bfff           call 0x4c87b0
// 008d62dd  8bce                 mov ecx, esi
// 008d62df  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008d62e7  e8f4e5ffff           call 0x8d48e0
// 008d62ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d62f0  5e                   pop esi
// 008d62f1  64890d00000000       mov dword ptr fs:[0], ecx
// 008d62f8  83c410               add esp, 0x10
// 008d62fb  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
