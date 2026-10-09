// roc 2007-03 005e1bb0  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1bb0
//
// 005e1bb0  64a100000000         mov eax, dword ptr fs:[0]
// 005e1bb6  6aff                 push -1
// 005e1bb8  685ebd7500           push 0x75bd5e
// 005e1bbd  50                   push eax
// 005e1bbe  b801000000           mov eax, 1
// 005e1bc3  64892500000000       mov dword ptr fs:[0], esp
// 005e1bca  8405e8088c00         test byte ptr [0x8c08e8], al
// 005e1bd0  7530                 jne 0x5e1c02
// 005e1bd2  0905e8088c00         or dword ptr [0x8c08e8], eax
// 005e1bd8  685caa8a00           push 0x8aaa5c
// 005e1bdd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e1be5  e8767fe3ff           call 0x419b60
// 005e1bea  50                   push eax
// 005e1beb  b960088c00           mov ecx, 0x8c0860
// 005e1bf0  e8ebf1f8ff           call 0x570de0
// 005e1bf5  68d0ba7700           push 0x77bad0
// 005e1bfa  e8b4d50300           call 0x61f1b3
// 005e1bff  83c404               add esp, 4
// 005e1c02  8b0c24               mov ecx, dword ptr [esp]
// 005e1c05  b860088c00           mov eax, 0x8c0860
// 005e1c0a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1c11  83c40c               add esp, 0xc
// 005e1c14  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
