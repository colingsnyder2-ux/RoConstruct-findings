// roc 2012-06 004a1090  unit: CScriptDoc  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a1090
//
// 004a1090  6aff                 push -1
// 004a1092  686a21aa00           push 0xaa216a
// 004a1097  64a100000000         mov eax, dword ptr fs:[0]
// 004a109d  50                   push eax
// 004a109e  64892500000000       mov dword ptr fs:[0], esp
// 004a10a5  51                   push ecx
// 004a10a6  681c010000           push 0x11c
// 004a10ab  e86a104e00           call 0x98211a
// 004a10b0  83c404               add esp, 4
// 004a10b3  890424               mov dword ptr [esp], eax
// 004a10b6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004a10be  85c0                 test eax, eax
// 004a10c0  7416                 je 0x4a10d8
// 004a10c2  8bc8                 mov ecx, eax
// 004a10c4  e857ffffff           call 0x4a1020
// 004a10c9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a10cd  64890d00000000       mov dword ptr fs:[0], ecx
// 004a10d4  83c410               add esp, 0x10
// 004a10d7  c3                   ret 
// 004a10d8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a10dc  33c0                 xor eax, eax
// 004a10de  64890d00000000       mov dword ptr fs:[0], ecx
// 004a10e5  83c410               add esp, 0x10
// 004a10e8  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??$OP_NEW@VFileListTransfer@RakNet@@@RakNet@@YAPAVFileListTransfer@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
