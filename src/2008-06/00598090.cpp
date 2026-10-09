// roc 2008-06 00598090  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598090
//
// 00598090  64a100000000         mov eax, dword ptr fs:[0]
// 00598096  6aff                 push -1
// 00598098  688e247d00           push 0x7d248e
// 0059809d  50                   push eax
// 0059809e  b801000000           mov eax, 1
// 005980a3  64892500000000       mov dword ptr fs:[0], esp
// 005980aa  8405f05e9700         test byte ptr [0x975ef0], al
// 005980b0  7530                 jne 0x5980e2
// 005980b2  0905f05e9700         or dword ptr [0x975ef0], eax
// 005980b8  68709c9400           push 0x949c70
// 005980bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005980c5  e856ffffff           call 0x598020
// 005980ca  50                   push eax
// 005980cb  b9305e9700           mov ecx, 0x975e30
// 005980d0  e81b88fdff           call 0x5708f0
// 005980d5  6880db7f00           push 0x7fdb80
// 005980da  e8d0961000           call 0x6a17af
// 005980df  83c404               add esp, 4
// 005980e2  8b0c24               mov ecx, dword ptr [esp]
// 005980e5  b8305e9700           mov eax, 0x975e30
// 005980ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005980f1  83c40c               add esp, 0xc
// 005980f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
