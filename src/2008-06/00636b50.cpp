// roc 2008-06 00636b50  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636b50
//
// 00636b50  64a100000000         mov eax, dword ptr fs:[0]
// 00636b56  6aff                 push -1
// 00636b58  68eea07d00           push 0x7da0ee
// 00636b5d  50                   push eax
// 00636b5e  b801000000           mov eax, 1
// 00636b63  64892500000000       mov dword ptr fs:[0], esp
// 00636b6a  8405d8cd9700         test byte ptr [0x97cdd8], al
// 00636b70  7530                 jne 0x636ba2
// 00636b72  0905d8cd9700         or dword ptr [0x97cdd8], eax
// 00636b78  68f0d99500           push 0x95d9f0
// 00636b7d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00636b85  e8f641ddff           call 0x40ad80
// 00636b8a  50                   push eax
// 00636b8b  b918cd9700           mov ecx, 0x97cd18
// 00636b90  e85b9df3ff           call 0x5708f0
// 00636b95  68f00b8000           push 0x800bf0
// 00636b9a  e810ac0600           call 0x6a17af
// 00636b9f  83c404               add esp, 4
// 00636ba2  8b0c24               mov ecx, dword ptr [esp]
// 00636ba5  b818cd9700           mov eax, 0x97cd18
// 00636baa  64890d00000000       mov dword ptr fs:[0], ecx
// 00636bb1  83c40c               add esp, 0xc
// 00636bb4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
