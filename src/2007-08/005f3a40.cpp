// roc 2007-08 005f3a40  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3a40
//
// 005f3a40  64a100000000         mov eax, dword ptr fs:[0]
// 005f3a46  6aff                 push -1
// 005f3a48  68feb67500           push 0x75b6fe
// 005f3a4d  50                   push eax
// 005f3a4e  b801000000           mov eax, 1
// 005f3a53  64892500000000       mov dword ptr fs:[0], esp
// 005f3a5a  8405f07b8c00         test byte ptr [0x8c7bf0], al
// 005f3a60  7530                 jne 0x5f3a92
// 005f3a62  0905f07b8c00         or dword ptr [0x8c7bf0], eax
// 005f3a68  68e4058b00           push 0x8b05e4
// 005f3a6d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005f3a75  e8164ce2ff           call 0x418690
// 005f3a7a  50                   push eax
// 005f3a7b  b9687b8c00           mov ecx, 0x8c7b68
// 005f3a80  e87bd1f7ff           call 0x570c00
// 005f3a85  6830c57700           push 0x77c530
// 005f3a8a  e894d20300           call 0x630d23
// 005f3a8f  83c404               add esp, 4
// 005f3a92  8b0c24               mov ecx, dword ptr [esp]
// 005f3a95  b8687b8c00           mov eax, 0x8c7b68
// 005f3a9a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3aa1  83c40c               add esp, 0xc
// 005f3aa4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
