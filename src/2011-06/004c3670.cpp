// roc 2011-06 004c3670  unit: RBX::ObjectValue  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c3670
//
// 004c3670  6aff                 push -1
// 004c3672  68a88e9d00           push 0x9d8ea8
// 004c3677  64a100000000         mov eax, dword ptr fs:[0]
// 004c367d  50                   push eax
// 004c367e  64892500000000       mov dword ptr fs:[0], esp
// 004c3685  51                   push ecx
// 004c3686  56                   push esi
// 004c3687  8bf1                 mov esi, ecx
// 004c3689  89742404             mov dword ptr [esp + 4], esi
// 004c368d  8d4e04               lea ecx, [esi + 4]
// 004c3690  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c3698  e8a397ffff           call 0x4bce40
// 004c369d  8bce                 mov ecx, esi
// 004c369f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c36a7  e8549dffff           call 0x4bd400
// 004c36ac  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c36b0  5e                   pop esi
// 004c36b1  64890d00000000       mov dword ptr fs:[0], ecx
// 004c36b8  83c410               add esp, 0x10
// 004c36bb  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
