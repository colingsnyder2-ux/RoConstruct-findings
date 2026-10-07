// roc 2012-06 0053dad0  unit: RBX::ObjectValue  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0053dad0
//
// 0053dad0  6aff                 push -1
// 0053dad2  68a8c1aa00           push 0xaac1a8
// 0053dad7  64a100000000         mov eax, dword ptr fs:[0]
// 0053dadd  50                   push eax
// 0053dade  64892500000000       mov dword ptr fs:[0], esp
// 0053dae5  51                   push ecx
// 0053dae6  56                   push esi
// 0053dae7  8bf1                 mov esi, ecx
// 0053dae9  89742404             mov dword ptr [esp + 4], esi
// 0053daed  8d4e04               lea ecx, [esi + 4]
// 0053daf0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053daf8  e8b3acf8ff           call 0x4c87b0
// 0053dafd  8bce                 mov ecx, esi
// 0053daff  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0053db07  e8d4bdffff           call 0x5398e0
// 0053db0c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053db10  5e                   pop esi
// 0053db11  64890d00000000       mov dword ptr fs:[0], ecx
// 0053db18  83c410               add esp, 0x10
// 0053db1b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
