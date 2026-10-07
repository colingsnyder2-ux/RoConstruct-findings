// roc 2011-06 004c3800  unit: RBX::ObjectValue  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c3800
//
// 004c3800  6aff                 push -1
// 004c3802  68488f9d00           push 0x9d8f48
// 004c3807  64a100000000         mov eax, dword ptr fs:[0]
// 004c380d  50                   push eax
// 004c380e  64892500000000       mov dword ptr fs:[0], esp
// 004c3815  51                   push ecx
// 004c3816  56                   push esi
// 004c3817  8bf1                 mov esi, ecx
// 004c3819  89742404             mov dword ptr [esp + 4], esi
// 004c381d  8d4e04               lea ecx, [esi + 4]
// 004c3820  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c3828  e81396ffff           call 0x4bce40
// 004c382d  8bce                 mov ecx, esi
// 004c382f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c3837  e814a0ffff           call 0x4bd850
// 004c383c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c3840  5e                   pop esi
// 004c3841  64890d00000000       mov dword ptr fs:[0], ecx
// 004c3848  83c410               add esp, 0x10
// 004c384b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
