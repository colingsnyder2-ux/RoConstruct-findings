// roc 2007-08 005f3960  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3960
//
// 005f3960  64a100000000         mov eax, dword ptr fs:[0]
// 005f3966  6aff                 push -1
// 005f3968  68beb67500           push 0x75b6be
// 005f396d  50                   push eax
// 005f396e  b801000000           mov eax, 1
// 005f3973  64892500000000       mov dword ptr fs:[0], esp
// 005f397a  8405d07a8c00         test byte ptr [0x8c7ad0], al
// 005f3980  7530                 jne 0x5f39b2
// 005f3982  0905d07a8c00         or dword ptr [0x8c7ad0], eax
// 005f3988  68c8058b00           push 0x8b05c8
// 005f398d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005f3995  e8f64ce2ff           call 0x418690
// 005f399a  50                   push eax
// 005f399b  b9487a8c00           mov ecx, 0x8c7a48
// 005f39a0  e85bd2f7ff           call 0x570c00
// 005f39a5  6850c57700           push 0x77c550
// 005f39aa  e874d30300           call 0x630d23
// 005f39af  83c404               add esp, 4
// 005f39b2  8b0c24               mov ecx, dword ptr [esp]
// 005f39b5  b8487a8c00           mov eax, 0x8c7a48
// 005f39ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005f39c1  83c40c               add esp, 0xc
// 005f39c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
