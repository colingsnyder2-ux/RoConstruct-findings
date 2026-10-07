// roc 2011-06 004c3850  unit: RBX::ObjectValue  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c3850
//
// 004c3850  6aff                 push -1
// 004c3852  68688f9d00           push 0x9d8f68
// 004c3857  64a100000000         mov eax, dword ptr fs:[0]
// 004c385d  50                   push eax
// 004c385e  64892500000000       mov dword ptr fs:[0], esp
// 004c3865  51                   push ecx
// 004c3866  56                   push esi
// 004c3867  8bf1                 mov esi, ecx
// 004c3869  89742404             mov dword ptr [esp + 4], esi
// 004c386d  8d4e04               lea ecx, [esi + 4]
// 004c3870  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c3878  e8c395ffff           call 0x4bce40
// 004c387d  8bce                 mov ecx, esi
// 004c387f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c3887  e834a1ffff           call 0x4bd9c0
// 004c388c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c3890  5e                   pop esi
// 004c3891  64890d00000000       mov dword ptr fs:[0], ecx
// 004c3898  83c410               add esp, 0x10
// 004c389b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
