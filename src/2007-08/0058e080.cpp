// roc 2007-08 0058e080  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e080
//
// 0058e080  64a100000000         mov eax, dword ptr fs:[0]
// 0058e086  6aff                 push -1
// 0058e088  681e687500           push 0x75681e
// 0058e08d  50                   push eax
// 0058e08e  b801000000           mov eax, 1
// 0058e093  64892500000000       mov dword ptr fs:[0], esp
// 0058e09a  8405503b8c00         test byte ptr [0x8c3b50], al
// 0058e0a0  7530                 jne 0x58e0d2
// 0058e0a2  0905503b8c00         or dword ptr [0x8c3b50], eax
// 0058e0a8  68f8e68a00           push 0x8ae6f8
// 0058e0ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e0b5  e8d6a5e8ff           call 0x418690
// 0058e0ba  50                   push eax
// 0058e0bb  b9c83a8c00           mov ecx, 0x8c3ac8
// 0058e0c0  e83b2bfeff           call 0x570c00
// 0058e0c5  6840aa7700           push 0x77aa40
// 0058e0ca  e8542c0a00           call 0x630d23
// 0058e0cf  83c404               add esp, 4
// 0058e0d2  8b0c24               mov ecx, dword ptr [esp]
// 0058e0d5  b8c83a8c00           mov eax, 0x8c3ac8
// 0058e0da  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e0e1  83c40c               add esp, 0xc
// 0058e0e4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
