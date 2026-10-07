// roc 2012-06 008d6260  unit: RBX::VHandles::?$EventReplicator  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008d6260
//
// 008d6260  6aff                 push -1
// 008d6262  68485fad00           push 0xad5f48
// 008d6267  64a100000000         mov eax, dword ptr fs:[0]
// 008d626d  50                   push eax
// 008d626e  64892500000000       mov dword ptr fs:[0], esp
// 008d6275  51                   push ecx
// 008d6276  56                   push esi
// 008d6277  8bf1                 mov esi, ecx
// 008d6279  89742404             mov dword ptr [esp + 4], esi
// 008d627d  8d4e04               lea ecx, [esi + 4]
// 008d6280  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008d6288  e82325bfff           call 0x4c87b0
// 008d628d  8bce                 mov ecx, esi
// 008d628f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008d6297  e8f4e4ffff           call 0x8d4790
// 008d629c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d62a0  5e                   pop esi
// 008d62a1  64890d00000000       mov dword ptr fs:[0], ecx
// 008d62a8  83c410               add esp, 0x10
// 008d62ab  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
