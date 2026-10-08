// roc 2007-08 0058e6a0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e6a0
//
// 0058e6a0  64a100000000         mov eax, dword ptr fs:[0]
// 0058e6a6  6aff                 push -1
// 0058e6a8  68de697500           push 0x7569de
// 0058e6ad  50                   push eax
// 0058e6ae  b801000000           mov eax, 1
// 0058e6b3  64892500000000       mov dword ptr fs:[0], esp
// 0058e6ba  840530438c00         test byte ptr [0x8c4330], al
// 0058e6c0  7530                 jne 0x58e6f2
// 0058e6c2  090530438c00         or dword ptr [0x8c4330], eax
// 0058e6c8  68c0197b00           push 0x7b19c0
// 0058e6cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e6d5  e8b69fe8ff           call 0x418690
// 0058e6da  50                   push eax
// 0058e6db  b9a8428c00           mov ecx, 0x8c42a8
// 0058e6e0  e81b25feff           call 0x570c00
// 0058e6e5  68f0aa7700           push 0x77aaf0
// 0058e6ea  e834260a00           call 0x630d23
// 0058e6ef  83c404               add esp, 4
// 0058e6f2  8b0c24               mov ecx, dword ptr [esp]
// 0058e6f5  b8a8428c00           mov eax, 0x8c42a8
// 0058e6fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e701  83c40c               add esp, 0xc
// 0058e704  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
