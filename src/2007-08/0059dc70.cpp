// roc 2007-08 0059dc70  unit: RBX::HopperBin::W4BinType::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059dc70
//
// 0059dc70  64a100000000         mov eax, dword ptr fs:[0]
// 0059dc76  6aff                 push -1
// 0059dc78  689e7a7500           push 0x757a9e
// 0059dc7d  50                   push eax
// 0059dc7e  b801000000           mov eax, 1
// 0059dc83  64892500000000       mov dword ptr fs:[0], esp
// 0059dc8a  8405d0518c00         test byte ptr [0x8c51d0], al
// 0059dc90  7530                 jne 0x59dcc2
// 0059dc92  0905d0518c00         or dword ptr [0x8c51d0], eax
// 0059dc98  68d0197b00           push 0x7b19d0
// 0059dc9d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0059dca5  e8f609ffff           call 0x58e6a0
// 0059dcaa  50                   push eax
// 0059dcab  b948518c00           mov ecx, 0x8c5148
// 0059dcb0  e84b2ffdff           call 0x570c00
// 0059dcb5  6830b07700           push 0x77b030
// 0059dcba  e864300900           call 0x630d23
// 0059dcbf  83c404               add esp, 4
// 0059dcc2  8b0c24               mov ecx, dword ptr [esp]
// 0059dcc5  b848518c00           mov eax, 0x8c5148
// 0059dcca  64890d00000000       mov dword ptr fs:[0], ecx
// 0059dcd1  83c40c               add esp, 0xc
// 0059dcd4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
