// roc 2007-08 006025b0  unit: RBX::Running  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006025b0
//
// 006025b0  64a100000000         mov eax, dword ptr fs:[0]
// 006025b6  6aff                 push -1
// 006025b8  688ec07500           push 0x75c08e
// 006025bd  50                   push eax
// 006025be  b801000000           mov eax, 1
// 006025c3  64892500000000       mov dword ptr fs:[0], esp
// 006025ca  8405d87f8c00         test byte ptr [0x8c7fd8], al
// 006025d0  7530                 jne 0x602602
// 006025d2  0905d87f8c00         or dword ptr [0x8c7fd8], eax
// 006025d8  6aff                 push -1
// 006025da  68482b7c00           push 0x7c2b48
// 006025df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006025e7  e854a3f2ff           call 0x52c940
// 006025ec  83c408               add esp, 8
// 006025ef  a3d47f8c00           mov dword ptr [0x8c7fd4], eax
// 006025f4  8b0c24               mov ecx, dword ptr [esp]
// 006025f7  64890d00000000       mov dword ptr fs:[0], ecx
// 006025fe  83c40c               add esp, 0xc
// 00602601  c3                   ret 
// 00602602  8b0c24               mov ecx, dword ptr [esp]
// 00602605  a1d47f8c00           mov eax, dword ptr [0x8c7fd4]
// 0060260a  64890d00000000       mov dword ptr fs:[0], ecx
// 00602611  83c40c               add esp, 0xc
// 00602614  c3                   ret 
// library openrbx-client/App\humanoid\Running.cpp (function ??$doDeclare@$1?sRunning@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Running.cpp
