// roc 2011-06 0048e3c0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048e3c0
//
// 0048e3c0  6aff                 push -1
// 0048e3c2  68aa639d00           push 0x9d63aa
// 0048e3c7  64a100000000         mov eax, dword ptr fs:[0]
// 0048e3cd  50                   push eax
// 0048e3ce  64892500000000       mov dword ptr fs:[0], esp
// 0048e3d5  51                   push ecx
// 0048e3d6  681c010000           push 0x11c
// 0048e3db  e87ebc3700           call 0x80a05e
// 0048e3e0  83c404               add esp, 4
// 0048e3e3  890424               mov dword ptr [esp], eax
// 0048e3e6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0048e3ee  85c0                 test eax, eax
// 0048e3f0  7416                 je 0x48e408
// 0048e3f2  8bc8                 mov ecx, eax
// 0048e3f4  e857ffffff           call 0x48e350
// 0048e3f9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048e3fd  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e404  83c410               add esp, 0x10
// 0048e407  c3                   ret 
// 0048e408  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048e40c  33c0                 xor eax, eax
// 0048e40e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e415  83c410               add esp, 0x10
// 0048e418  c3                   ret 
// library rbx2016-raknet/FileListTransfer.cpp (function ??$OP_NEW@VFileListTransfer@RakNet@@@RakNet@@YAPAVFileListTransfer@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
