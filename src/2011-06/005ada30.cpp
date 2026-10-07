// roc 2011-06 005ada30  unit: RBX::VFriendService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ada30
//
// 005ada30  6aff                 push -1
// 005ada32  6818199e00           push 0x9e1918
// 005ada37  64a100000000         mov eax, dword ptr fs:[0]
// 005ada3d  50                   push eax
// 005ada3e  64892500000000       mov dword ptr fs:[0], esp
// 005ada45  51                   push ecx
// 005ada46  56                   push esi
// 005ada47  8bf1                 mov esi, ecx
// 005ada49  89742404             mov dword ptr [esp + 4], esi
// 005ada4d  8d4e04               lea ecx, [esi + 4]
// 005ada50  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ada58  e8e3f3f0ff           call 0x4bce40
// 005ada5d  8bce                 mov ecx, esi
// 005ada5f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ada67  e834eeffff           call 0x5ac8a0
// 005ada6c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ada70  5e                   pop esi
// 005ada71  64890d00000000       mov dword ptr fs:[0], ecx
// 005ada78  83c410               add esp, 0x10
// 005ada7b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
