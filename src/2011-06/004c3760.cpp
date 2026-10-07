// roc 2011-06 004c3760  unit: RBX::ObjectValue  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c3760
//
// 004c3760  6aff                 push -1
// 004c3762  68088f9d00           push 0x9d8f08
// 004c3767  64a100000000         mov eax, dword ptr fs:[0]
// 004c376d  50                   push eax
// 004c376e  64892500000000       mov dword ptr fs:[0], esp
// 004c3775  51                   push ecx
// 004c3776  56                   push esi
// 004c3777  8bf1                 mov esi, ecx
// 004c3779  89742404             mov dword ptr [esp + 4], esi
// 004c377d  8d4e04               lea ecx, [esi + 4]
// 004c3780  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c3788  e8b396ffff           call 0x4bce40
// 004c378d  8bce                 mov ecx, esi
// 004c378f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c3797  e88499ffff           call 0x4bd120
// 004c379c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c37a0  5e                   pop esi
// 004c37a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004c37a8  83c410               add esp, 0x10
// 004c37ab  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
