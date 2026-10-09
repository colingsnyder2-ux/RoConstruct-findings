// roc 2007-03 005e1c90  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1c90
//
// 005e1c90  64a100000000         mov eax, dword ptr fs:[0]
// 005e1c96  6aff                 push -1
// 005e1c98  689ebd7500           push 0x75bd9e
// 005e1c9d  50                   push eax
// 005e1c9e  b801000000           mov eax, 1
// 005e1ca3  64892500000000       mov dword ptr fs:[0], esp
// 005e1caa  8405080a8c00         test byte ptr [0x8c0a08], al
// 005e1cb0  7530                 jne 0x5e1ce2
// 005e1cb2  0905080a8c00         or dword ptr [0x8c0a08], eax
// 005e1cb8  6874aa8a00           push 0x8aaa74
// 005e1cbd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e1cc5  e8967ee3ff           call 0x419b60
// 005e1cca  50                   push eax
// 005e1ccb  b980098c00           mov ecx, 0x8c0980
// 005e1cd0  e80bf1f8ff           call 0x570de0
// 005e1cd5  68b0ba7700           push 0x77bab0
// 005e1cda  e8d4d40300           call 0x61f1b3
// 005e1cdf  83c404               add esp, 4
// 005e1ce2  8b0c24               mov ecx, dword ptr [esp]
// 005e1ce5  b880098c00           mov eax, 0x8c0980
// 005e1cea  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1cf1  83c40c               add esp, 0xc
// 005e1cf4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
