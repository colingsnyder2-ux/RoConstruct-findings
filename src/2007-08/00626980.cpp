// roc 2007-08 00626980  unit: RBX::Seated  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00626980
//
// 00626980  64a100000000         mov eax, dword ptr fs:[0]
// 00626986  6aff                 push -1
// 00626988  687ed27500           push 0x75d27e
// 0062698d  50                   push eax
// 0062698e  b801000000           mov eax, 1
// 00626993  64892500000000       mov dword ptr fs:[0], esp
// 0062699a  8405d8828c00         test byte ptr [0x8c82d8], al
// 006269a0  7530                 jne 0x6269d2
// 006269a2  0905d8828c00         or dword ptr [0x8c82d8], eax
// 006269a8  6aff                 push -1
// 006269aa  68884a7c00           push 0x7c4a88
// 006269af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006269b7  e8845ff0ff           call 0x52c940
// 006269bc  83c408               add esp, 8
// 006269bf  a3d4828c00           mov dword ptr [0x8c82d4], eax
// 006269c4  8b0c24               mov ecx, dword ptr [esp]
// 006269c7  64890d00000000       mov dword ptr fs:[0], ecx
// 006269ce  83c40c               add esp, 0xc
// 006269d1  c3                   ret 
// 006269d2  8b0c24               mov ecx, dword ptr [esp]
// 006269d5  a1d4828c00           mov eax, dword ptr [0x8c82d4]
// 006269da  64890d00000000       mov dword ptr fs:[0], ecx
// 006269e1  83c40c               add esp, 0xc
// 006269e4  c3                   ret 
// library openrbx-client/App\humanoid\Seated.cpp (function ??$doDeclare@$1?sSeated@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Seated.cpp
