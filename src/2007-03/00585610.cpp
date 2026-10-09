// roc 2007-03 00585610  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00585610
//
// 00585610  64a100000000         mov eax, dword ptr fs:[0]
// 00585616  6aff                 push -1
// 00585618  684e707500           push 0x75704e
// 0058561d  50                   push eax
// 0058561e  b801000000           mov eax, 1
// 00585623  64892500000000       mov dword ptr fs:[0], esp
// 0058562a  8405e0d68b00         test byte ptr [0x8bd6e0], al
// 00585630  7530                 jne 0x585662
// 00585632  0905e0d68b00         or dword ptr [0x8bd6e0], eax
// 00585638  68e0098a00           push 0x8a09e0
// 0058563d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00585645  e81645e9ff           call 0x419b60
// 0058564a  50                   push eax
// 0058564b  b958d68b00           mov ecx, 0x8bd658
// 00585650  e88bb7feff           call 0x570de0
// 00585655  68a0a47700           push 0x77a4a0
// 0058565a  e8549b0900           call 0x61f1b3
// 0058565f  83c404               add esp, 4
// 00585662  8b0c24               mov ecx, dword ptr [esp]
// 00585665  b858d68b00           mov eax, 0x8bd658
// 0058566a  64890d00000000       mov dword ptr fs:[0], ecx
// 00585671  83c40c               add esp, 0xc
// 00585674  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
