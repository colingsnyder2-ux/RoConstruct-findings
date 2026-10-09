// roc 2008-06 00636c90  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636c90
//
// 00636c90  64a100000000         mov eax, dword ptr fs:[0]
// 00636c96  6aff                 push -1
// 00636c98  680ea17d00           push 0x7da10e
// 00636c9d  50                   push eax
// 00636c9e  b801000000           mov eax, 1
// 00636ca3  64892500000000       mov dword ptr fs:[0], esp
// 00636caa  8405a0ce9700         test byte ptr [0x97cea0], al
// 00636cb0  7530                 jne 0x636ce2
// 00636cb2  0905a0ce9700         or dword ptr [0x97cea0], eax
// 00636cb8  68fcd99500           push 0x95d9fc
// 00636cbd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00636cc5  e8b640ddff           call 0x40ad80
// 00636cca  50                   push eax
// 00636ccb  b9e0cd9700           mov ecx, 0x97cde0
// 00636cd0  e81b9cf3ff           call 0x5708f0
// 00636cd5  68e00b8000           push 0x800be0
// 00636cda  e8d0aa0600           call 0x6a17af
// 00636cdf  83c404               add esp, 4
// 00636ce2  8b0c24               mov ecx, dword ptr [esp]
// 00636ce5  b8e0cd9700           mov eax, 0x97cde0
// 00636cea  64890d00000000       mov dword ptr fs:[0], ecx
// 00636cf1  83c40c               add esp, 0xc
// 00636cf4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
