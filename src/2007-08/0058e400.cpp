// roc 2007-08 0058e400  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058e400
//
// 0058e400  64a100000000         mov eax, dword ptr fs:[0]
// 0058e406  6aff                 push -1
// 0058e408  681e697500           push 0x75691e
// 0058e40d  50                   push eax
// 0058e40e  b801000000           mov eax, 1
// 0058e413  64892500000000       mov dword ptr fs:[0], esp
// 0058e41a  8405d03f8c00         test byte ptr [0x8c3fd0], al
// 0058e420  7530                 jne 0x58e452
// 0058e422  0905d03f8c00         or dword ptr [0x8c3fd0], eax
// 0058e428  68545d8a00           push 0x8a5d54
// 0058e42d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058e435  e856a2e8ff           call 0x418690
// 0058e43a  50                   push eax
// 0058e43b  b9483f8c00           mov ecx, 0x8c3f48
// 0058e440  e8bb27feff           call 0x570c00
// 0058e445  6810a97700           push 0x77a910
// 0058e44a  e8d4280a00           call 0x630d23
// 0058e44f  83c404               add esp, 4
// 0058e452  8b0c24               mov ecx, dword ptr [esp]
// 0058e455  b8483f8c00           mov eax, 0x8c3f48
// 0058e45a  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e461  83c40c               add esp, 0xc
// 0058e464  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
