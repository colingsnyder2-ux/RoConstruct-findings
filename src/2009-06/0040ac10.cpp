// roc 2009-06 0040ac10  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040ac10
//
// 0040ac10  64a100000000         mov eax, dword ptr fs:[0]
// 0040ac16  6aff                 push -1
// 0040ac18  68eed08400           push 0x84d0ee
// 0040ac1d  50                   push eax
// 0040ac1e  b801000000           mov eax, 1
// 0040ac23  64892500000000       mov dword ptr fs:[0], esp
// 0040ac2a  8405589ba300         test byte ptr [0xa39b58], al
// 0040ac30  7530                 jne 0x40ac62
// 0040ac32  0905589ba300         or dword ptr [0xa39b58], eax
// 0040ac38  68c4269e00           push 0x9e26c4
// 0040ac3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040ac45  e8a6f8ffff           call 0x40a4f0
// 0040ac4a  50                   push eax
// 0040ac4b  b9989aa300           mov ecx, 0xa39a98
// 0040ac50  e88beb1e00           call 0x5f97e0
// 0040ac55  68303c8900           push 0x893c30
// 0040ac5a  e89cee3000           call 0x719afb
// 0040ac5f  83c404               add esp, 4
// 0040ac62  8b0c24               mov ecx, dword ptr [esp]
// 0040ac65  b8989aa300           mov eax, 0xa39a98
// 0040ac6a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ac71  83c40c               add esp, 0xc
// 0040ac74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
