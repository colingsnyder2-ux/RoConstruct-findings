// roc 2007-03 00597a00  unit: seg_00590000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00597a00
//
// 00597a00  64a100000000         mov eax, dword ptr fs:[0]
// 00597a06  6aff                 push -1
// 00597a08  68fe827500           push 0x7582fe
// 00597a0d  50                   push eax
// 00597a0e  b801000000           mov eax, 1
// 00597a13  64892500000000       mov dword ptr fs:[0], esp
// 00597a1a  840510e88b00         test byte ptr [0x8be810], al
// 00597a20  7530                 jne 0x597a52
// 00597a22  090510e88b00         or dword ptr [0x8be810], eax
// 00597a28  68b82b8a00           push 0x8a2bb8
// 00597a2d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00597a35  e82621e8ff           call 0x419b60
// 00597a3a  50                   push eax
// 00597a3b  b988e78b00           mov ecx, 0x8be788
// 00597a40  e89b93fdff           call 0x570de0
// 00597a45  68d0a97700           push 0x77a9d0
// 00597a4a  e864770800           call 0x61f1b3
// 00597a4f  83c404               add esp, 4
// 00597a52  8b0c24               mov ecx, dword ptr [esp]
// 00597a55  b888e78b00           mov eax, 0x8be788
// 00597a5a  64890d00000000       mov dword ptr fs:[0], ecx
// 00597a61  83c40c               add esp, 0xc
// 00597a64  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
