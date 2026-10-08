// roc 2007-08 00591230  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591230
//
// 00591230  64a100000000         mov eax, dword ptr fs:[0]
// 00591236  6aff                 push -1
// 00591238  681e6d7500           push 0x756d1e
// 0059123d  50                   push eax
// 0059123e  b801000000           mov eax, 1
// 00591243  64892500000000       mov dword ptr fs:[0], esp
// 0059124a  8405104b8c00         test byte ptr [0x8c4b10], al
// 00591250  7530                 jne 0x591282
// 00591252  0905104b8c00         or dword ptr [0x8c4b10], eax
// 00591258  68d0d27b00           push 0x7bd2d0
// 0059125d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00591265  e8f6faffff           call 0x590d60
// 0059126a  50                   push eax
// 0059126b  b9884a8c00           mov ecx, 0x8c4a88
// 00591270  e88bf9fdff           call 0x570c00
// 00591275  68a0a97700           push 0x77a9a0
// 0059127a  e8a4fa0900           call 0x630d23
// 0059127f  83c404               add esp, 4
// 00591282  8b0c24               mov ecx, dword ptr [esp]
// 00591285  b8884a8c00           mov eax, 0x8c4a88
// 0059128a  64890d00000000       mov dword ptr fs:[0], ecx
// 00591291  83c40c               add esp, 0xc
// 00591294  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
