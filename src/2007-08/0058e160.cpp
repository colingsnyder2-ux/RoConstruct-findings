// roc 2007-08 0058e160  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e160
//
// 0058e160  64a100000000         mov eax, dword ptr fs:[0]
// 0058e166  6aff                 push -1
// 0058e168  685e687500           push 0x75685e
// 0058e16d  50                   push eax
// 0058e16e  b801000000           mov eax, 1
// 0058e173  64892500000000       mov dword ptr fs:[0], esp
// 0058e17a  8405703c8c00         test byte ptr [0x8c3c70], al
// 0058e180  7530                 jne 0x58e1b2
// 0058e182  0905703c8c00         or dword ptr [0x8c3c70], eax
// 0058e188  68e0307b00           push 0x7b30e0
// 0058e18d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e195  e8f6a4e8ff           call 0x418690
// 0058e19a  50                   push eax
// 0058e19b  b9e83b8c00           mov ecx, 0x8c3be8
// 0058e1a0  e85b2afeff           call 0x570c00
// 0058e1a5  6870a97700           push 0x77a970
// 0058e1aa  e8742b0a00           call 0x630d23
// 0058e1af  83c404               add esp, 4
// 0058e1b2  8b0c24               mov ecx, dword ptr [esp]
// 0058e1b5  b8e83b8c00           mov eax, 0x8c3be8
// 0058e1ba  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e1c1  83c40c               add esp, 0xc
// 0058e1c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
