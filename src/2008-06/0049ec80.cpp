// roc 2008-06 0049ec80  unit: RBX::VNetworkSettings::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ec80
//
// 0049ec80  64a100000000         mov eax, dword ptr fs:[0]
// 0049ec86  6aff                 push -1
// 0049ec88  68ce767c00           push 0x7c76ce
// 0049ec8d  50                   push eax
// 0049ec8e  b801000000           mov eax, 1
// 0049ec93  64892500000000       mov dword ptr fs:[0], esp
// 0049ec9a  8405800b9700         test byte ptr [0x970b80], al
// 0049eca0  7530                 jne 0x49ecd2
// 0049eca2  0905800b9700         or dword ptr [0x970b80], eax
// 0049eca8  68c03e8200           push 0x823ec0
// 0049ecad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0049ecb5  e8c6c0f6ff           call 0x40ad80
// 0049ecba  50                   push eax
// 0049ecbb  b9c00a9700           mov ecx, 0x970ac0
// 0049ecc0  e82b1c0d00           call 0x5708f0
// 0049ecc5  6830ba7f00           push 0x7fba30
// 0049ecca  e8e02a2000           call 0x6a17af
// 0049eccf  83c404               add esp, 4
// 0049ecd2  8b0c24               mov ecx, dword ptr [esp]
// 0049ecd5  b8c00a9700           mov eax, 0x970ac0
// 0049ecda  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ece1  83c40c               add esp, 0xc
// 0049ece4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
