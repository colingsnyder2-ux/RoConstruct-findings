// roc 2012-06 0053c850  unit: RBX::Network::VPlayer::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0053c850
//
// 0053c850  6aff                 push -1
// 0053c852  68d8bfaa00           push 0xaabfd8
// 0053c857  64a100000000         mov eax, dword ptr fs:[0]
// 0053c85d  50                   push eax
// 0053c85e  64892500000000       mov dword ptr fs:[0], esp
// 0053c865  51                   push ecx
// 0053c866  56                   push esi
// 0053c867  8bf1                 mov esi, ecx
// 0053c869  89742404             mov dword ptr [esp + 4], esi
// 0053c86d  8d4e04               lea ecx, [esi + 4]
// 0053c870  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053c878  e833bff8ff           call 0x4c87b0
// 0053c87d  8bce                 mov ecx, esi
// 0053c87f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0053c887  e824bff8ff           call 0x4c87b0
// 0053c88c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053c890  5e                   pop esi
// 0053c891  64890d00000000       mov dword ptr fs:[0], ecx
// 0053c898  83c410               add esp, 0x10
// 0053c89b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
