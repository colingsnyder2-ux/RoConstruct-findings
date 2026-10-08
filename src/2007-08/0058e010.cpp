// roc 2007-08 0058e010  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e010
//
// 0058e010  64a100000000         mov eax, dword ptr fs:[0]
// 0058e016  6aff                 push -1
// 0058e018  68fe677500           push 0x7567fe
// 0058e01d  50                   push eax
// 0058e01e  b801000000           mov eax, 1
// 0058e023  64892500000000       mov dword ptr fs:[0], esp
// 0058e02a  8405c03a8c00         test byte ptr [0x8c3ac0], al
// 0058e030  7530                 jne 0x58e062
// 0058e032  0905c03a8c00         or dword ptr [0x8c3ac0], eax
// 0058e038  68e83d7b00           push 0x7b3de8
// 0058e03d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e045  e846a6e8ff           call 0x418690
// 0058e04a  50                   push eax
// 0058e04b  b9383a8c00           mov ecx, 0x8c3a38
// 0058e050  e8ab2bfeff           call 0x570c00
// 0058e055  6850aa7700           push 0x77aa50
// 0058e05a  e8c42c0a00           call 0x630d23
// 0058e05f  83c404               add esp, 4
// 0058e062  8b0c24               mov ecx, dword ptr [esp]
// 0058e065  b8383a8c00           mov eax, 0x8c3a38
// 0058e06a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e071  83c40c               add esp, 0xc
// 0058e074  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
