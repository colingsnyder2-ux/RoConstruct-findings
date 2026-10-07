// roc 2012-06 006a0b60  unit: RBX::VFriendService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a0b60
//
// 006a0b60  6aff                 push -1
// 006a0b62  683873ab00           push 0xab7338
// 006a0b67  64a100000000         mov eax, dword ptr fs:[0]
// 006a0b6d  50                   push eax
// 006a0b6e  64892500000000       mov dword ptr fs:[0], esp
// 006a0b75  51                   push ecx
// 006a0b76  56                   push esi
// 006a0b77  8bf1                 mov esi, ecx
// 006a0b79  89742404             mov dword ptr [esp + 4], esi
// 006a0b7d  8d4e04               lea ecx, [esi + 4]
// 006a0b80  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006a0b88  e8237ce2ff           call 0x4c87b0
// 006a0b8d  8bce                 mov ecx, esi
// 006a0b8f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006a0b97  e844f5ffff           call 0x6a00e0
// 006a0b9c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a0ba0  5e                   pop esi
// 006a0ba1  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0ba8  83c410               add esp, 0x10
// 006a0bab  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
