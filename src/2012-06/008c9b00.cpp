// roc 2012-06 008c9b00  unit: RBX::VInstance::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c9b00
//
// 008c9b00  6aff                 push -1
// 008c9b02  683857ad00           push 0xad5738
// 008c9b07  64a100000000         mov eax, dword ptr fs:[0]
// 008c9b0d  50                   push eax
// 008c9b0e  64892500000000       mov dword ptr fs:[0], esp
// 008c9b15  51                   push ecx
// 008c9b16  56                   push esi
// 008c9b17  8bf1                 mov esi, ecx
// 008c9b19  89742404             mov dword ptr [esp + 4], esi
// 008c9b1d  8d4e04               lea ecx, [esi + 4]
// 008c9b20  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008c9b28  e883ecbfff           call 0x4c87b0
// 008c9b2d  8bce                 mov ecx, esi
// 008c9b2f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008c9b37  e824a4dbff           call 0x683f60
// 008c9b3c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c9b40  5e                   pop esi
// 008c9b41  64890d00000000       mov dword ptr fs:[0], ecx
// 008c9b48  83c410               add esp, 0x10
// 008c9b4b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
