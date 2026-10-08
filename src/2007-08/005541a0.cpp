// roc 2007-08 005541a0  unit: RBX::VTeam::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005541a0
//
// 005541a0  64a100000000         mov eax, dword ptr fs:[0]
// 005541a6  6aff                 push -1
// 005541a8  684e2f7500           push 0x752f4e
// 005541ad  50                   push eax
// 005541ae  b801000000           mov eax, 1
// 005541b3  64892500000000       mov dword ptr fs:[0], esp
// 005541ba  8405f01c8c00         test byte ptr [0x8c1cf0], al
// 005541c0  7530                 jne 0x5541f2
// 005541c2  0905f01c8c00         or dword ptr [0x8c1cf0], eax
// 005541c8  68087f7a00           push 0x7a7f08
// 005541cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005541d5  e8b644ecff           call 0x418690
// 005541da  50                   push eax
// 005541db  b9681c8c00           mov ecx, 0x8c1c68
// 005541e0  e81bca0100           call 0x570c00
// 005541e5  68209b7700           push 0x779b20
// 005541ea  e834cb0d00           call 0x630d23
// 005541ef  83c404               add esp, 4
// 005541f2  8b0c24               mov ecx, dword ptr [esp]
// 005541f5  b8681c8c00           mov eax, 0x8c1c68
// 005541fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00554201  83c40c               add esp, 0xc
// 00554204  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
