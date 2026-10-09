// roc 2007-03 005e1c20  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1c20
//
// 005e1c20  64a100000000         mov eax, dword ptr fs:[0]
// 005e1c26  6aff                 push -1
// 005e1c28  687ebd7500           push 0x75bd7e
// 005e1c2d  50                   push eax
// 005e1c2e  b801000000           mov eax, 1
// 005e1c33  64892500000000       mov dword ptr fs:[0], esp
// 005e1c3a  840578098c00         test byte ptr [0x8c0978], al
// 005e1c40  7530                 jne 0x5e1c72
// 005e1c42  090578098c00         or dword ptr [0x8c0978], eax
// 005e1c48  6868aa8a00           push 0x8aaa68
// 005e1c4d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e1c55  e8067fe3ff           call 0x419b60
// 005e1c5a  50                   push eax
// 005e1c5b  b9f0088c00           mov ecx, 0x8c08f0
// 005e1c60  e87bf1f8ff           call 0x570de0
// 005e1c65  68c0ba7700           push 0x77bac0
// 005e1c6a  e844d50300           call 0x61f1b3
// 005e1c6f  83c404               add esp, 4
// 005e1c72  8b0c24               mov ecx, dword ptr [esp]
// 005e1c75  b8f0088c00           mov eax, 0x8c08f0
// 005e1c7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1c81  83c40c               add esp, 0xc
// 005e1c84  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
