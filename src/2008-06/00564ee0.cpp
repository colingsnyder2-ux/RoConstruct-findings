// roc 2008-06 00564ee0  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00564ee0
//
// 00564ee0  64a100000000         mov eax, dword ptr fs:[0]
// 00564ee6  6aff                 push -1
// 00564ee8  683ef37c00           push 0x7cf33e
// 00564eed  50                   push eax
// 00564eee  b801000000           mov eax, 1
// 00564ef3  64892500000000       mov dword ptr fs:[0], esp
// 00564efa  8405d8419700         test byte ptr [0x9741d8], al
// 00564f00  7530                 jne 0x564f32
// 00564f02  0905d8419700         or dword ptr [0x9741d8], eax
// 00564f08  68b8df8200           push 0x82dfb8
// 00564f0d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00564f15  e8665eeaff           call 0x40ad80
// 00564f1a  50                   push eax
// 00564f1b  b918419700           mov ecx, 0x974118
// 00564f20  e8cbb90000           call 0x5708f0
// 00564f25  6890cf7f00           push 0x7fcf90
// 00564f2a  e880c81300           call 0x6a17af
// 00564f2f  83c404               add esp, 4
// 00564f32  8b0c24               mov ecx, dword ptr [esp]
// 00564f35  b818419700           mov eax, 0x974118
// 00564f3a  64890d00000000       mov dword ptr fs:[0], ecx
// 00564f41  83c40c               add esp, 0xc
// 00564f44  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
