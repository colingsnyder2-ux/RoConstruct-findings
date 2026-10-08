// roc 2007-08 00572d10  unit: RBX::VTexture::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572d10
//
// 00572d10  64a100000000         mov eax, dword ptr fs:[0]
// 00572d16  6aff                 push -1
// 00572d18  686e517500           push 0x75516e
// 00572d1d  50                   push eax
// 00572d1e  b801000000           mov eax, 1
// 00572d23  64892500000000       mov dword ptr fs:[0], esp
// 00572d2a  8405e0258c00         test byte ptr [0x8c25e0], al
// 00572d30  7530                 jne 0x572d62
// 00572d32  0905e0258c00         or dword ptr [0x8c25e0], eax
// 00572d38  68588b7b00           push 0x7b8b58
// 00572d3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00572d45  e84659eaff           call 0x418690
// 00572d4a  50                   push eax
// 00572d4b  b958258c00           mov ecx, 0x8c2558
// 00572d50  e8abdeffff           call 0x570c00
// 00572d55  6860a07700           push 0x77a060
// 00572d5a  e8c4df0b00           call 0x630d23
// 00572d5f  83c404               add esp, 4
// 00572d62  8b0c24               mov ecx, dword ptr [esp]
// 00572d65  b858258c00           mov eax, 0x8c2558
// 00572d6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00572d71  83c40c               add esp, 0xc
// 00572d74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
