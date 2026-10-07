// roc 2011-06 004c36c0  unit: RBX::ObjectValue  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c36c0
//
// 004c36c0  6aff                 push -1
// 004c36c2  68c88e9d00           push 0x9d8ec8
// 004c36c7  64a100000000         mov eax, dword ptr fs:[0]
// 004c36cd  50                   push eax
// 004c36ce  64892500000000       mov dword ptr fs:[0], esp
// 004c36d5  51                   push ecx
// 004c36d6  56                   push esi
// 004c36d7  8bf1                 mov esi, ecx
// 004c36d9  89742404             mov dword ptr [esp + 4], esi
// 004c36dd  8d4e04               lea ecx, [esi + 4]
// 004c36e0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c36e8  e85397ffff           call 0x4bce40
// 004c36ed  8bce                 mov ecx, esi
// 004c36ef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c36f7  e8749effff           call 0x4bd570
// 004c36fc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c3700  5e                   pop esi
// 004c3701  64890d00000000       mov dword ptr fs:[0], ecx
// 004c3708  83c410               add esp, 0x10
// 004c370b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
