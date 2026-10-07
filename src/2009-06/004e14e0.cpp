// roc 2009-06 004e14e0  unit: RBX::Network::IdSerializer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e14e0
//
// 004e14e0  6aff                 push -1
// 004e14e2  687b9c8600           push 0x869c7b
// 004e14e7  64a100000000         mov eax, dword ptr fs:[0]
// 004e14ed  50                   push eax
// 004e14ee  64892500000000       mov dword ptr fs:[0], esp
// 004e14f5  51                   push ecx
// 004e14f6  6a18                 push 0x18
// 004e14f8  e83b752300           call 0x718a38
// 004e14fd  83c404               add esp, 4
// 004e1500  890424               mov dword ptr [esp], eax
// 004e1503  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004e150b  85c0                 test eax, eax
// 004e150d  7416                 je 0x4e1525
// 004e150f  8bc8                 mov ecx, eax
// 004e1511  e8aafeffff           call 0x4e13c0
// 004e1516  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e151a  64890d00000000       mov dword ptr fs:[0], ecx
// 004e1521  83c410               add esp, 0x10
// 004e1524  c3                   ret 
// 004e1525  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e1529  33c0                 xor eax, eax
// 004e152b  64890d00000000       mov dword ptr fs:[0], ecx
// 004e1532  83c410               add esp, 0x10
// 004e1535  c3                   ret 
// library rbx2016-raknet/RakString.cpp (function ??$OP_NEW@VSimpleMutex@RakNet@@@RakNet@@YAPAVSimpleMutex@0@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
