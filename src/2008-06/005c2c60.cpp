// roc 2008-06 005c2c60  unit: RBX::VObjectValue::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2c60
//
// 005c2c60  64a100000000         mov eax, dword ptr fs:[0]
// 005c2c66  6aff                 push -1
// 005c2c68  686e467d00           push 0x7d466e
// 005c2c6d  50                   push eax
// 005c2c6e  b801000000           mov eax, 1
// 005c2c73  64892500000000       mov dword ptr fs:[0], esp
// 005c2c7a  8405608a9700         test byte ptr [0x978a60], al
// 005c2c80  7530                 jne 0x5c2cb2
// 005c2c82  0905608a9700         or dword ptr [0x978a60], eax
// 005c2c88  6840da9500           push 0x95da40
// 005c2c8d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c2c95  e8e680e4ff           call 0x40ad80
// 005c2c9a  50                   push eax
// 005c2c9b  b9a0899700           mov ecx, 0x9789a0
// 005c2ca0  e84bdcfaff           call 0x5708f0
// 005c2ca5  6890e87f00           push 0x7fe890
// 005c2caa  e800eb0d00           call 0x6a17af
// 005c2caf  83c404               add esp, 4
// 005c2cb2  8b0c24               mov ecx, dword ptr [esp]
// 005c2cb5  b8a0899700           mov eax, 0x9789a0
// 005c2cba  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2cc1  83c40c               add esp, 0xc
// 005c2cc4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
