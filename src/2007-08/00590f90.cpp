// roc 2007-08 00590f90  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590f90
//
// 00590f90  64a100000000         mov eax, dword ptr fs:[0]
// 00590f96  6aff                 push -1
// 00590f98  685e6c7500           push 0x756c5e
// 00590f9d  50                   push eax
// 00590f9e  b801000000           mov eax, 1
// 00590fa3  64892500000000       mov dword ptr fs:[0], esp
// 00590faa  8405b0478c00         test byte ptr [0x8c47b0], al
// 00590fb0  7530                 jne 0x590fe2
// 00590fb2  0905b0478c00         or dword ptr [0x8c47b0], eax
// 00590fb8  68745e7b00           push 0x7b5e74
// 00590fbd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00590fc5  e826fdffff           call 0x590cf0
// 00590fca  50                   push eax
// 00590fcb  b928478c00           mov ecx, 0x8c4728
// 00590fd0  e82bfcfdff           call 0x570c00
// 00590fd5  6820aa7700           push 0x77aa20
// 00590fda  e844fd0900           call 0x630d23
// 00590fdf  83c404               add esp, 4
// 00590fe2  8b0c24               mov ecx, dword ptr [esp]
// 00590fe5  b828478c00           mov eax, 0x8c4728
// 00590fea  64890d00000000       mov dword ptr fs:[0], ecx
// 00590ff1  83c40c               add esp, 0xc
// 00590ff4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
