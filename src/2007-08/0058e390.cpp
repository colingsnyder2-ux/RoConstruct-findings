// roc 2007-08 0058e390  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e390
//
// 0058e390  64a100000000         mov eax, dword ptr fs:[0]
// 0058e396  6aff                 push -1
// 0058e398  68fe687500           push 0x7568fe
// 0058e39d  50                   push eax
// 0058e39e  b801000000           mov eax, 1
// 0058e3a3  64892500000000       mov dword ptr fs:[0], esp
// 0058e3aa  8405403f8c00         test byte ptr [0x8c3f40], al
// 0058e3b0  7530                 jne 0x58e3e2
// 0058e3b2  0905403f8c00         or dword ptr [0x8c3f40], eax
// 0058e3b8  6848458a00           push 0x8a4548
// 0058e3bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e3c5  e8c6a2e8ff           call 0x418690
// 0058e3ca  50                   push eax
// 0058e3cb  b9b83e8c00           mov ecx, 0x8c3eb8
// 0058e3d0  e82b28feff           call 0x570c00
// 0058e3d5  6820a97700           push 0x77a920
// 0058e3da  e844290a00           call 0x630d23
// 0058e3df  83c404               add esp, 4
// 0058e3e2  8b0c24               mov ecx, dword ptr [esp]
// 0058e3e5  b8b83e8c00           mov eax, 0x8c3eb8
// 0058e3ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e3f1  83c40c               add esp, 0xc
// 0058e3f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
