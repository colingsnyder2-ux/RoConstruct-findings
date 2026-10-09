// roc 2007-03 005a08c0  unit: seg_005a0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a08c0
//
// 005a08c0  64a100000000         mov eax, dword ptr fs:[0]
// 005a08c6  6aff                 push -1
// 005a08c8  68fe8d7500           push 0x758dfe
// 005a08cd  50                   push eax
// 005a08ce  b801000000           mov eax, 1
// 005a08d3  64892500000000       mov dword ptr fs:[0], esp
// 005a08da  8405f8ec8b00         test byte ptr [0x8becf8], al
// 005a08e0  7530                 jne 0x5a0912
// 005a08e2  0905f8ec8b00         or dword ptr [0x8becf8], eax
// 005a08e8  68983c7b00           push 0x7b3c98
// 005a08ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a08f5  e86692e7ff           call 0x419b60
// 005a08fa  50                   push eax
// 005a08fb  b970ec8b00           mov ecx, 0x8bec70
// 005a0900  e8db04fdff           call 0x570de0
// 005a0905  68c0ab7700           push 0x77abc0
// 005a090a  e8a4e80700           call 0x61f1b3
// 005a090f  83c404               add esp, 4
// 005a0912  8b0c24               mov ecx, dword ptr [esp]
// 005a0915  b870ec8b00           mov eax, 0x8bec70
// 005a091a  64890d00000000       mov dword ptr fs:[0], ecx
// 005a0921  83c40c               add esp, 0xc
// 005a0924  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
