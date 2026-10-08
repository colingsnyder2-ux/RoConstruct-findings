// roc 2007-08 0058dfa0  unit: RBX::SoundService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058dfa0
//
// 0058dfa0  64a100000000         mov eax, dword ptr fs:[0]
// 0058dfa6  6aff                 push -1
// 0058dfa8  68de677500           push 0x7567de
// 0058dfad  50                   push eax
// 0058dfae  b801000000           mov eax, 1
// 0058dfb3  64892500000000       mov dword ptr fs:[0], esp
// 0058dfba  8405303a8c00         test byte ptr [0x8c3a30], al
// 0058dfc0  7530                 jne 0x58dff2
// 0058dfc2  0905303a8c00         or dword ptr [0x8c3a30], eax
// 0058dfc8  68d03d7b00           push 0x7b3dd0
// 0058dfcd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058dfd5  e8b6a6e8ff           call 0x418690
// 0058dfda  50                   push eax
// 0058dfdb  b9a8398c00           mov ecx, 0x8c39a8
// 0058dfe0  e81b2cfeff           call 0x570c00
// 0058dfe5  6860aa7700           push 0x77aa60
// 0058dfea  e8342d0a00           call 0x630d23
// 0058dfef  83c404               add esp, 4
// 0058dff2  8b0c24               mov ecx, dword ptr [esp]
// 0058dff5  b8a8398c00           mov eax, 0x8c39a8
// 0058dffa  64890d00000000       mov dword ptr fs:[0], ecx
// 0058e001  83c40c               add esp, 0xc
// 0058e004  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
