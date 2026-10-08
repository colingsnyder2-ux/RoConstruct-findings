// roc 2007-08 0058e1d0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e1d0
//
// 0058e1d0  64a100000000         mov eax, dword ptr fs:[0]
// 0058e1d6  6aff                 push -1
// 0058e1d8  687e687500           push 0x75687e
// 0058e1dd  50                   push eax
// 0058e1de  b801000000           mov eax, 1
// 0058e1e3  64892500000000       mov dword ptr fs:[0], esp
// 0058e1ea  8405003d8c00         test byte ptr [0x8c3d00], al
// 0058e1f0  7530                 jne 0x58e222
// 0058e1f2  0905003d8c00         or dword ptr [0x8c3d00], eax
// 0058e1f8  6840a67b00           push 0x7ba640
// 0058e1fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e205  e886a4e8ff           call 0x418690
// 0058e20a  50                   push eax
// 0058e20b  b9783c8c00           mov ecx, 0x8c3c78
// 0058e210  e8eb29feff           call 0x570c00
// 0058e215  6860a97700           push 0x77a960
// 0058e21a  e8042b0a00           call 0x630d23
// 0058e21f  83c404               add esp, 4
// 0058e222  8b0c24               mov ecx, dword ptr [esp]
// 0058e225  b8783c8c00           mov eax, 0x8c3c78
// 0058e22a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e231  83c40c               add esp, 0xc
// 0058e234  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
