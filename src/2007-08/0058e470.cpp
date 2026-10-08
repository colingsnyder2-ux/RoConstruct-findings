// roc 2007-08 0058e470  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e470
//
// 0058e470  64a100000000         mov eax, dword ptr fs:[0]
// 0058e476  6aff                 push -1
// 0058e478  683e697500           push 0x75693e
// 0058e47d  50                   push eax
// 0058e47e  b801000000           mov eax, 1
// 0058e483  64892500000000       mov dword ptr fs:[0], esp
// 0058e48a  840560408c00         test byte ptr [0x8c4060], al
// 0058e490  7530                 jne 0x58e4c2
// 0058e492  090560408c00         or dword ptr [0x8c4060], eax
// 0058e498  68e03a8b00           push 0x8b3ae0
// 0058e49d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e4a5  e8e6a1e8ff           call 0x418690
// 0058e4aa  50                   push eax
// 0058e4ab  b9d83f8c00           mov ecx, 0x8c3fd8
// 0058e4b0  e84b27feff           call 0x570c00
// 0058e4b5  6800a97700           push 0x77a900
// 0058e4ba  e864280a00           call 0x630d23
// 0058e4bf  83c404               add esp, 4
// 0058e4c2  8b0c24               mov ecx, dword ptr [esp]
// 0058e4c5  b8d83f8c00           mov eax, 0x8c3fd8
// 0058e4ca  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e4d1  83c40c               add esp, 0xc
// 0058e4d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
