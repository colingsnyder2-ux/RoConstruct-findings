// roc 2011-06 005ad9e0  unit: RBX::VFriendService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ad9e0
//
// 005ad9e0  6aff                 push -1
// 005ad9e2  68f8189e00           push 0x9e18f8
// 005ad9e7  64a100000000         mov eax, dword ptr fs:[0]
// 005ad9ed  50                   push eax
// 005ad9ee  64892500000000       mov dword ptr fs:[0], esp
// 005ad9f5  51                   push ecx
// 005ad9f6  56                   push esi
// 005ad9f7  8bf1                 mov esi, ecx
// 005ad9f9  89742404             mov dword ptr [esp + 4], esi
// 005ad9fd  8d4e04               lea ecx, [esi + 4]
// 005ada00  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ada08  e833f4f0ff           call 0x4bce40
// 005ada0d  8bce                 mov ecx, esi
// 005ada0f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ada17  e814edffff           call 0x5ac730
// 005ada1c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ada20  5e                   pop esi
// 005ada21  64890d00000000       mov dword ptr fs:[0], ecx
// 005ada28  83c410               add esp, 0x10
// 005ada2b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
