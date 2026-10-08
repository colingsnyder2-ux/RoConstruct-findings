// roc 2007-08 00577100  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577100
//
// 00577100  64a100000000         mov eax, dword ptr fs:[0]
// 00577106  6aff                 push -1
// 00577108  68de537500           push 0x7553de
// 0057710d  50                   push eax
// 0057710e  b801000000           mov eax, 1
// 00577113  64892500000000       mov dword ptr fs:[0], esp
// 0057711a  8405602c8c00         test byte ptr [0x8c2c60], al
// 00577120  7530                 jne 0x577152
// 00577122  0905602c8c00         or dword ptr [0x8c2c60], eax
// 00577128  6820048a00           push 0x8a0420
// 0057712d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00577135  e8f6a4fbff           call 0x531630
// 0057713a  50                   push eax
// 0057713b  b9d82b8c00           mov ecx, 0x8c2bd8
// 00577140  e8bb9affff           call 0x570c00
// 00577145  6850a37700           push 0x77a350
// 0057714a  e8d49b0b00           call 0x630d23
// 0057714f  83c404               add esp, 4
// 00577152  8b0c24               mov ecx, dword ptr [esp]
// 00577155  b8d82b8c00           mov eax, 0x8c2bd8
// 0057715a  64890d00000000       mov dword ptr fs:[0], ecx
// 00577161  83c40c               add esp, 0xc
// 00577164  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
