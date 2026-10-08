// roc 2007-08 0058e550  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e550
//
// 0058e550  64a100000000         mov eax, dword ptr fs:[0]
// 0058e556  6aff                 push -1
// 0058e558  687e697500           push 0x75697e
// 0058e55d  50                   push eax
// 0058e55e  b801000000           mov eax, 1
// 0058e563  64892500000000       mov dword ptr fs:[0], esp
// 0058e56a  840580418c00         test byte ptr [0x8c4180], al
// 0058e570  7530                 jne 0x58e5a2
// 0058e572  090580418c00         or dword ptr [0x8c4180], eax
// 0058e578  6810357b00           push 0x7b3510
// 0058e57d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e585  e806a1e8ff           call 0x418690
// 0058e58a  50                   push eax
// 0058e58b  b9f8408c00           mov ecx, 0x8c40f8
// 0058e590  e86b26feff           call 0x570c00
// 0058e595  68d0a87700           push 0x77a8d0
// 0058e59a  e884270a00           call 0x630d23
// 0058e59f  83c404               add esp, 4
// 0058e5a2  8b0c24               mov ecx, dword ptr [esp]
// 0058e5a5  b8f8408c00           mov eax, 0x8c40f8
// 0058e5aa  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e5b1  83c40c               add esp, 0xc
// 0058e5b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
