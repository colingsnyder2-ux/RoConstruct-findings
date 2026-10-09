// roc 2009-06 0040b250  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040b250
//
// 0040b250  64a100000000         mov eax, dword ptr fs:[0]
// 0040b256  6aff                 push -1
// 0040b258  68aed18400           push 0x84d1ae
// 0040b25d  50                   push eax
// 0040b25e  b801000000           mov eax, 1
// 0040b263  64892500000000       mov dword ptr fs:[0], esp
// 0040b26a  8405c09da300         test byte ptr [0xa39dc0], al
// 0040b270  7530                 jne 0x40b2a2
// 0040b272  0905c09da300         or dword ptr [0xa39dc0], eax
// 0040b278  6810279e00           push 0x9e2710
// 0040b27d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040b285  e866f2ffff           call 0x40a4f0
// 0040b28a  50                   push eax
// 0040b28b  b9009da300           mov ecx, 0xa39d00
// 0040b290  e84be51e00           call 0x5f97e0
// 0040b295  68203c8900           push 0x893c20
// 0040b29a  e85ce83000           call 0x719afb
// 0040b29f  83c404               add esp, 4
// 0040b2a2  8b0c24               mov ecx, dword ptr [esp]
// 0040b2a5  b8009da300           mov eax, 0xa39d00
// 0040b2aa  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b2b1  83c40c               add esp, 0xc
// 0040b2b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
