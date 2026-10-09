// roc 2007-03 005e1de0  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1de0
//
// 005e1de0  64a100000000         mov eax, dword ptr fs:[0]
// 005e1de6  6aff                 push -1
// 005e1de8  68febd7500           push 0x75bdfe
// 005e1ded  50                   push eax
// 005e1dee  b801000000           mov eax, 1
// 005e1df3  64892500000000       mov dword ptr fs:[0], esp
// 005e1dfa  8405b80b8c00         test byte ptr [0x8c0bb8], al
// 005e1e00  7530                 jne 0x5e1e32
// 005e1e02  0905b80b8c00         or dword ptr [0x8c0bb8], eax
// 005e1e08  689caa8a00           push 0x8aaa9c
// 005e1e0d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e1e15  e8467de3ff           call 0x419b60
// 005e1e1a  50                   push eax
// 005e1e1b  b9300b8c00           mov ecx, 0x8c0b30
// 005e1e20  e8bbeff8ff           call 0x570de0
// 005e1e25  6880ba7700           push 0x77ba80
// 005e1e2a  e884d30300           call 0x61f1b3
// 005e1e2f  83c404               add esp, 4
// 005e1e32  8b0c24               mov ecx, dword ptr [esp]
// 005e1e35  b8300b8c00           mov eax, 0x8c0b30
// 005e1e3a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1e41  83c40c               add esp, 0xc
// 005e1e44  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
