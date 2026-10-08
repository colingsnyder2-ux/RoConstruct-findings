// roc 2007-08 0056c3b0  unit: RBX::VStandardOut::?$Notifier  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c3b0
//
// 0056c3b0  6aff                 push -1
// 0056c3b2  6829487500           push 0x754829
// 0056c3b7  64a100000000         mov eax, dword ptr fs:[0]
// 0056c3bd  50                   push eax
// 0056c3be  64892500000000       mov dword ptr fs:[0], esp
// 0056c3c5  51                   push ecx
// 0056c3c6  c7042400000000       mov dword ptr [esp], 0
// 0056c3cd  f605dc238c0001       test byte ptr [0x8c23dc], 1
// 0056c3d4  754d                 jne 0x56c423
// 0056c3d6  830ddc238c0001       or dword ptr [0x8c23dc], 1
// 0056c3dd  6a28                 push 0x28
// 0056c3df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056c3e7  e80a3b0c00           call 0x62fef6
// 0056c3ec  83c404               add esp, 4
// 0056c3ef  890424               mov dword ptr [esp], eax
// 0056c3f2  85c0                 test eax, eax
// 0056c3f4  c644240c01           mov byte ptr [esp + 0xc], 1
// 0056c3f9  7409                 je 0x56c404
// 0056c3fb  8bc8                 mov ecx, eax
// 0056c3fd  e8befeffff           call 0x56c2c0
// 0056c402  eb02                 jmp 0x56c406
// 0056c404  33c0                 xor eax, eax
// 0056c406  50                   push eax
// 0056c407  b9d4238c00           mov ecx, 0x8c23d4
// 0056c40c  c644241000           mov byte ptr [esp + 0x10], 0
// 0056c411  e8dafbffff           call 0x56bff0
// 0056c416  68d09d7700           push 0x779dd0
// 0056c41b  e803490c00           call 0x630d23
// 0056c420  83c404               add esp, 4
// 0056c423  8b0dd4238c00         mov ecx, dword ptr [0x8c23d4]
// 0056c429  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056c42d  8908                 mov dword ptr [eax], ecx
// 0056c42f  8b15d8238c00         mov edx, dword ptr [0x8c23d8]
// 0056c435  895004               mov dword ptr [eax + 4], edx
// 0056c438  8b0dd8238c00         mov ecx, dword ptr [0x8c23d8]
// 0056c43e  85c9                 test ecx, ecx
// 0056c440  740c                 je 0x56c44e
// 0056c442  83c104               add ecx, 4
// 0056c445  ba01000000           mov edx, 1
// 0056c44a  f00fc111             lock xadd dword ptr [ecx], edx
// 0056c44e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056c452  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c459  83c410               add esp, 0x10
// 0056c45c  c3                   ret 
// library rbxgs/util\standardout.cpp (function ?singleton@StandardOut@RBX@@SA?AV?$shared_ptr@VStandardOut@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
