// roc 2007-08 005f3ab0  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3ab0
//
// 005f3ab0  64a100000000         mov eax, dword ptr fs:[0]
// 005f3ab6  6aff                 push -1
// 005f3ab8  681eb77500           push 0x75b71e
// 005f3abd  50                   push eax
// 005f3abe  b801000000           mov eax, 1
// 005f3ac3  64892500000000       mov dword ptr fs:[0], esp
// 005f3aca  8405807c8c00         test byte ptr [0x8c7c80], al
// 005f3ad0  7530                 jne 0x5f3b02
// 005f3ad2  0905807c8c00         or dword ptr [0x8c7c80], eax
// 005f3ad8  68f0058b00           push 0x8b05f0
// 005f3add  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005f3ae5  e8a64be2ff           call 0x418690
// 005f3aea  50                   push eax
// 005f3aeb  b9f87b8c00           mov ecx, 0x8c7bf8
// 005f3af0  e80bd1f7ff           call 0x570c00
// 005f3af5  6820c57700           push 0x77c520
// 005f3afa  e824d20300           call 0x630d23
// 005f3aff  83c404               add esp, 4
// 005f3b02  8b0c24               mov ecx, dword ptr [esp]
// 005f3b05  b8f87b8c00           mov eax, 0x8c7bf8
// 005f3b0a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3b11  83c40c               add esp, 0xc
// 005f3b14  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
