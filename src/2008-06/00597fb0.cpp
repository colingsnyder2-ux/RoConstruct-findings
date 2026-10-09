// roc 2008-06 00597fb0  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597fb0
//
// 00597fb0  64a100000000         mov eax, dword ptr fs:[0]
// 00597fb6  6aff                 push -1
// 00597fb8  684e247d00           push 0x7d244e
// 00597fbd  50                   push eax
// 00597fbe  b801000000           mov eax, 1
// 00597fc3  64892500000000       mov dword ptr fs:[0], esp
// 00597fca  8405605d9700         test byte ptr [0x975d60], al
// 00597fd0  7530                 jne 0x598002
// 00597fd2  0905605d9700         or dword ptr [0x975d60], eax
// 00597fd8  6870068400           push 0x840670
// 00597fdd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00597fe5  e8962de7ff           call 0x40ad80
// 00597fea  50                   push eax
// 00597feb  b9a05c9700           mov ecx, 0x975ca0
// 00597ff0  e8fb88fdff           call 0x5708f0
// 00597ff5  68a0db7f00           push 0x7fdba0
// 00597ffa  e8b0971000           call 0x6a17af
// 00597fff  83c404               add esp, 4
// 00598002  8b0c24               mov ecx, dword ptr [esp]
// 00598005  b8a05c9700           mov eax, 0x975ca0
// 0059800a  64890d00000000       mov dword ptr fs:[0], ecx
// 00598011  83c40c               add esp, 0xc
// 00598014  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
