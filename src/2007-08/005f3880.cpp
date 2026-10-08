// roc 2007-08 005f3880  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3880
//
// 005f3880  64a100000000         mov eax, dword ptr fs:[0]
// 005f3886  6aff                 push -1
// 005f3888  687eb67500           push 0x75b67e
// 005f388d  50                   push eax
// 005f388e  b801000000           mov eax, 1
// 005f3893  64892500000000       mov dword ptr fs:[0], esp
// 005f389a  8405b0798c00         test byte ptr [0x8c79b0], al
// 005f38a0  7530                 jne 0x5f38d2
// 005f38a2  0905b0798c00         or dword ptr [0x8c79b0], eax
// 005f38a8  68b0058b00           push 0x8b05b0
// 005f38ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005f38b5  e8d64de2ff           call 0x418690
// 005f38ba  50                   push eax
// 005f38bb  b928798c00           mov ecx, 0x8c7928
// 005f38c0  e83bd3f7ff           call 0x570c00
// 005f38c5  6870c57700           push 0x77c570
// 005f38ca  e854d40300           call 0x630d23
// 005f38cf  83c404               add esp, 4
// 005f38d2  8b0c24               mov ecx, dword ptr [esp]
// 005f38d5  b828798c00           mov eax, 0x8c7928
// 005f38da  64890d00000000       mov dword ptr fs:[0], ecx
// 005f38e1  83c40c               add esp, 0xc
// 005f38e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
