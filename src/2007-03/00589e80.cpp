// roc 2007-03 00589e80  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00589e80
//
// 00589e80  64a100000000         mov eax, dword ptr fs:[0]
// 00589e86  6aff                 push -1
// 00589e88  682e777500           push 0x75772e
// 00589e8d  50                   push eax
// 00589e8e  b801000000           mov eax, 1
// 00589e93  64892500000000       mov dword ptr fs:[0], esp
// 00589e9a  8405d8e08b00         test byte ptr [0x8be0d8], al
// 00589ea0  7530                 jne 0x589ed2
// 00589ea2  0905d8e08b00         or dword ptr [0x8be0d8], eax
// 00589ea8  68b8aa8a00           push 0x8aaab8
// 00589ead  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00589eb5  e8a6fce8ff           call 0x419b60
// 00589eba  50                   push eax
// 00589ebb  b950e08b00           mov ecx, 0x8be050
// 00589ec0  e81b6ffeff           call 0x570de0
// 00589ec5  6840a67700           push 0x77a640
// 00589eca  e8e4520900           call 0x61f1b3
// 00589ecf  83c404               add esp, 4
// 00589ed2  8b0c24               mov ecx, dword ptr [esp]
// 00589ed5  b850e08b00           mov eax, 0x8be050
// 00589eda  64890d00000000       mov dword ptr fs:[0], ecx
// 00589ee1  83c40c               add esp, 0xc
// 00589ee4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
