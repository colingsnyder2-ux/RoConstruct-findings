// roc 2007-08 005f38f0  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f38f0
//
// 005f38f0  64a100000000         mov eax, dword ptr fs:[0]
// 005f38f6  6aff                 push -1
// 005f38f8  689eb67500           push 0x75b69e
// 005f38fd  50                   push eax
// 005f38fe  b801000000           mov eax, 1
// 005f3903  64892500000000       mov dword ptr fs:[0], esp
// 005f390a  8405407a8c00         test byte ptr [0x8c7a40], al
// 005f3910  7530                 jne 0x5f3942
// 005f3912  0905407a8c00         or dword ptr [0x8c7a40], eax
// 005f3918  68bc058b00           push 0x8b05bc
// 005f391d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005f3925  e8664de2ff           call 0x418690
// 005f392a  50                   push eax
// 005f392b  b9b8798c00           mov ecx, 0x8c79b8
// 005f3930  e8cbd2f7ff           call 0x570c00
// 005f3935  6860c57700           push 0x77c560
// 005f393a  e8e4d30300           call 0x630d23
// 005f393f  83c404               add esp, 4
// 005f3942  8b0c24               mov ecx, dword ptr [esp]
// 005f3945  b8b8798c00           mov eax, 0x8c79b8
// 005f394a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3951  83c40c               add esp, 0xc
// 005f3954  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
