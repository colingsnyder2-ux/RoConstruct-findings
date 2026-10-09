// roc 2007-03 0058a280  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058a280
//
// 0058a280  64a100000000         mov eax, dword ptr fs:[0]
// 0058a286  6aff                 push -1
// 0058a288  682e787500           push 0x75782e
// 0058a28d  50                   push eax
// 0058a28e  b801000000           mov eax, 1
// 0058a293  64892500000000       mov dword ptr fs:[0], esp
// 0058a29a  8405c8e48b00         test byte ptr [0x8be4c8], al
// 0058a2a0  7530                 jne 0x58a2d2
// 0058a2a2  0905c8e48b00         or dword ptr [0x8be4c8], eax
// 0058a2a8  68385d7b00           push 0x7b5d38
// 0058a2ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058a2b5  e8c6e6ffff           call 0x588980
// 0058a2ba  50                   push eax
// 0058a2bb  b940e48b00           mov ecx, 0x8be440
// 0058a2c0  e81b6bfeff           call 0x570de0
// 0058a2c5  68f0a47700           push 0x77a4f0
// 0058a2ca  e8e44e0900           call 0x61f1b3
// 0058a2cf  83c404               add esp, 4
// 0058a2d2  8b0c24               mov ecx, dword ptr [esp]
// 0058a2d5  b840e48b00           mov eax, 0x8be440
// 0058a2da  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a2e1  83c40c               add esp, 0xc
// 0058a2e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
