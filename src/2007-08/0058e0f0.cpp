// roc 2007-08 0058e0f0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e0f0
//
// 0058e0f0  64a100000000         mov eax, dword ptr fs:[0]
// 0058e0f6  6aff                 push -1
// 0058e0f8  683e687500           push 0x75683e
// 0058e0fd  50                   push eax
// 0058e0fe  b801000000           mov eax, 1
// 0058e103  64892500000000       mov dword ptr fs:[0], esp
// 0058e10a  8405e03b8c00         test byte ptr [0x8c3be0], al
// 0058e110  7530                 jne 0x58e142
// 0058e112  0905e03b8c00         or dword ptr [0x8c3be0], eax
// 0058e118  6878dc7b00           push 0x7bdc78
// 0058e11d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e125  e866a5e8ff           call 0x418690
// 0058e12a  50                   push eax
// 0058e12b  b9583b8c00           mov ecx, 0x8c3b58
// 0058e130  e8cb2afeff           call 0x570c00
// 0058e135  6880a97700           push 0x77a980
// 0058e13a  e8e42b0a00           call 0x630d23
// 0058e13f  83c404               add esp, 4
// 0058e142  8b0c24               mov ecx, dword ptr [esp]
// 0058e145  b8583b8c00           mov eax, 0x8c3b58
// 0058e14a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e151  83c40c               add esp, 0xc
// 0058e154  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
