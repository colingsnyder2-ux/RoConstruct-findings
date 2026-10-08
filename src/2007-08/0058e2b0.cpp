// roc 2007-08 0058e2b0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e2b0
//
// 0058e2b0  64a100000000         mov eax, dword ptr fs:[0]
// 0058e2b6  6aff                 push -1
// 0058e2b8  68be687500           push 0x7568be
// 0058e2bd  50                   push eax
// 0058e2be  b801000000           mov eax, 1
// 0058e2c3  64892500000000       mov dword ptr fs:[0], esp
// 0058e2ca  8405203e8c00         test byte ptr [0x8c3e20], al
// 0058e2d0  7530                 jne 0x58e302
// 0058e2d2  0905203e8c00         or dword ptr [0x8c3e20], eax
// 0058e2d8  6818048b00           push 0x8b0418
// 0058e2dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e2e5  e8a6a3e8ff           call 0x418690
// 0058e2ea  50                   push eax
// 0058e2eb  b9983d8c00           mov ecx, 0x8c3d98
// 0058e2f0  e80b29feff           call 0x570c00
// 0058e2f5  6840a97700           push 0x77a940
// 0058e2fa  e8242a0a00           call 0x630d23
// 0058e2ff  83c404               add esp, 4
// 0058e302  8b0c24               mov ecx, dword ptr [esp]
// 0058e305  b8983d8c00           mov eax, 0x8c3d98
// 0058e30a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e311  83c40c               add esp, 0xc
// 0058e314  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
