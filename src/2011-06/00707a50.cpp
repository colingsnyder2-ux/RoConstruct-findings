// roc 2011-06 00707a50  unit: RBX::VHandles::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00707a50
//
// 00707a50  6aff                 push -1
// 00707a52  68485d9f00           push 0x9f5d48
// 00707a57  64a100000000         mov eax, dword ptr fs:[0]
// 00707a5d  50                   push eax
// 00707a5e  64892500000000       mov dword ptr fs:[0], esp
// 00707a65  51                   push ecx
// 00707a66  56                   push esi
// 00707a67  8bf1                 mov esi, ecx
// 00707a69  89742404             mov dword ptr [esp + 4], esi
// 00707a6d  8d4e04               lea ecx, [esi + 4]
// 00707a70  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00707a78  e8c353dbff           call 0x4bce40
// 00707a7d  8bce                 mov ecx, esi
// 00707a7f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00707a87  e854dcffff           call 0x7056e0
// 00707a8c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00707a90  5e                   pop esi
// 00707a91  64890d00000000       mov dword ptr fs:[0], ecx
// 00707a98  83c410               add esp, 0x10
// 00707a9b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
