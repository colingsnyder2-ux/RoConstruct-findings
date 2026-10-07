// roc 2012-06 006a0b10  unit: RBX::VFriendService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a0b10
//
// 006a0b10  6aff                 push -1
// 006a0b12  681873ab00           push 0xab7318
// 006a0b17  64a100000000         mov eax, dword ptr fs:[0]
// 006a0b1d  50                   push eax
// 006a0b1e  64892500000000       mov dword ptr fs:[0], esp
// 006a0b25  51                   push ecx
// 006a0b26  56                   push esi
// 006a0b27  8bf1                 mov esi, ecx
// 006a0b29  89742404             mov dword ptr [esp + 4], esi
// 006a0b2d  8d4e04               lea ecx, [esi + 4]
// 006a0b30  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006a0b38  e8737ce2ff           call 0x4c87b0
// 006a0b3d  8bce                 mov ecx, esi
// 006a0b3f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006a0b47  e804f5ffff           call 0x6a0050
// 006a0b4c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a0b50  5e                   pop esi
// 006a0b51  64890d00000000       mov dword ptr fs:[0], ecx
// 006a0b58  83c410               add esp, 0x10
// 006a0b5b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
