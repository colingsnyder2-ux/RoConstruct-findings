// roc 2011-06 0050cd30  unit: RBX::Network::ServerReplicator  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050cd30
//
// 0050cd30  6aff                 push -1
// 0050cd32  683b939f00           push 0x9f933b
// 0050cd37  64a100000000         mov eax, dword ptr fs:[0]
// 0050cd3d  50                   push eax
// 0050cd3e  64892500000000       mov dword ptr fs:[0], esp
// 0050cd45  51                   push ecx
// 0050cd46  6a18                 push 0x18
// 0050cd48  e811d32f00           call 0x80a05e
// 0050cd4d  83c404               add esp, 4
// 0050cd50  890424               mov dword ptr [esp], eax
// 0050cd53  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0050cd5b  85c0                 test eax, eax
// 0050cd5d  7416                 je 0x50cd75
// 0050cd5f  8bc8                 mov ecx, eax
// 0050cd61  e89afeffff           call 0x50cc00
// 0050cd66  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050cd6a  64890d00000000       mov dword ptr fs:[0], ecx
// 0050cd71  83c410               add esp, 0x10
// 0050cd74  c3                   ret 
// 0050cd75  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050cd79  33c0                 xor eax, eax
// 0050cd7b  64890d00000000       mov dword ptr fs:[0], ecx
// 0050cd82  83c410               add esp, 0x10
// 0050cd85  c3                   ret 
// library rbx2016-raknet/RakString.cpp (function ??$OP_NEW@VSimpleMutex@RakNet@@@RakNet@@YAPAVSimpleMutex@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
