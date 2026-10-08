// roc 2007-08 00590c80  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590c80
//
// 00590c80  64a100000000         mov eax, dword ptr fs:[0]
// 00590c86  6aff                 push -1
// 00590c88  68de6b7500           push 0x756bde
// 00590c8d  50                   push eax
// 00590c8e  b801000000           mov eax, 1
// 00590c93  64892500000000       mov dword ptr fs:[0], esp
// 00590c9a  840570458c00         test byte ptr [0x8c4570], al
// 00590ca0  7530                 jne 0x590cd2
// 00590ca2  090570458c00         or dword ptr [0x8c4570], eax
// 00590ca8  6828bf7b00           push 0x7bbf28
// 00590cad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00590cb5  e876d9ffff           call 0x58e630
// 00590cba  50                   push eax
// 00590cbb  b9e8448c00           mov ecx, 0x8c44e8
// 00590cc0  e83bfffdff           call 0x570c00
// 00590cc5  68b0a97700           push 0x77a9b0
// 00590cca  e854000a00           call 0x630d23
// 00590ccf  83c404               add esp, 4
// 00590cd2  8b0c24               mov ecx, dword ptr [esp]
// 00590cd5  b8e8448c00           mov eax, 0x8c44e8
// 00590cda  64890d00000000       mov dword ptr fs:[0], ecx
// 00590ce1  83c40c               add esp, 0xc
// 00590ce4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
