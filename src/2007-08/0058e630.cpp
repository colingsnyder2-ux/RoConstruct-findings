// roc 2007-08 0058e630  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e630
//
// 0058e630  64a100000000         mov eax, dword ptr fs:[0]
// 0058e636  6aff                 push -1
// 0058e638  68be697500           push 0x7569be
// 0058e63d  50                   push eax
// 0058e63e  b801000000           mov eax, 1
// 0058e643  64892500000000       mov dword ptr fs:[0], esp
// 0058e64a  8405a0428c00         test byte ptr [0x8c42a0], al
// 0058e650  7530                 jne 0x58e682
// 0058e652  0905a0428c00         or dword ptr [0x8c42a0], eax
// 0058e658  6820bf7b00           push 0x7bbf20
// 0058e65d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e665  e826a0e8ff           call 0x418690
// 0058e66a  50                   push eax
// 0058e66b  b918428c00           mov ecx, 0x8c4218
// 0058e670  e88b25feff           call 0x570c00
// 0058e675  68b0aa7700           push 0x77aab0
// 0058e67a  e8a4260a00           call 0x630d23
// 0058e67f  83c404               add esp, 4
// 0058e682  8b0c24               mov ecx, dword ptr [esp]
// 0058e685  b818428c00           mov eax, 0x8c4218
// 0058e68a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e691  83c40c               add esp, 0xc
// 0058e694  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
