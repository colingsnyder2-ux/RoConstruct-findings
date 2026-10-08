// roc 2007-08 0058e240  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e240
//
// 0058e240  64a100000000         mov eax, dword ptr fs:[0]
// 0058e246  6aff                 push -1
// 0058e248  689e687500           push 0x75689e
// 0058e24d  50                   push eax
// 0058e24e  b801000000           mov eax, 1
// 0058e253  64892500000000       mov dword ptr fs:[0], esp
// 0058e25a  8405903d8c00         test byte ptr [0x8c3d90], al
// 0058e260  7530                 jne 0x58e292
// 0058e262  0905903d8c00         or dword ptr [0x8c3d90], eax
// 0058e268  6854a67b00           push 0x7ba654
// 0058e26d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e275  e816a4e8ff           call 0x418690
// 0058e27a  50                   push eax
// 0058e27b  b9083d8c00           mov ecx, 0x8c3d08
// 0058e280  e87b29feff           call 0x570c00
// 0058e285  6850a97700           push 0x77a950
// 0058e28a  e8942a0a00           call 0x630d23
// 0058e28f  83c404               add esp, 4
// 0058e292  8b0c24               mov ecx, dword ptr [esp]
// 0058e295  b8083d8c00           mov eax, 0x8c3d08
// 0058e29a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e2a1  83c40c               add esp, 0xc
// 0058e2a4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
