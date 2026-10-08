// roc 2007-08 00590c10  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590c10
//
// 00590c10  64a100000000         mov eax, dword ptr fs:[0]
// 00590c16  6aff                 push -1
// 00590c18  68be6b7500           push 0x756bbe
// 00590c1d  50                   push eax
// 00590c1e  b801000000           mov eax, 1
// 00590c23  64892500000000       mov dword ptr fs:[0], esp
// 00590c2a  8405e0448c00         test byte ptr [0x8c44e0], al
// 00590c30  7530                 jne 0x590c62
// 00590c32  0905e0448c00         or dword ptr [0x8c44e0], eax
// 00590c38  6830bf7b00           push 0x7bbf30
// 00590c3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00590c45  e8e6d9ffff           call 0x58e630
// 00590c4a  50                   push eax
// 00590c4b  b958448c00           mov ecx, 0x8c4458
// 00590c50  e8abfffdff           call 0x570c00
// 00590c55  68c0a97700           push 0x77a9c0
// 00590c5a  e8c4000a00           call 0x630d23
// 00590c5f  83c404               add esp, 4
// 00590c62  8b0c24               mov ecx, dword ptr [esp]
// 00590c65  b858448c00           mov eax, 0x8c4458
// 00590c6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00590c71  83c40c               add esp, 0xc
// 00590c74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
