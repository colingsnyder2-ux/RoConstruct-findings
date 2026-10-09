// roc 2009-06 0040b510  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040b510
//
// 0040b510  64a100000000         mov eax, dword ptr fs:[0]
// 0040b516  6aff                 push -1
// 0040b518  68fed18400           push 0x84d1fe
// 0040b51d  50                   push eax
// 0040b51e  b801000000           mov eax, 1
// 0040b523  64892500000000       mov dword ptr fs:[0], esp
// 0040b52a  8405889ea300         test byte ptr [0xa39e88], al
// 0040b530  7530                 jne 0x40b562
// 0040b532  0905889ea300         or dword ptr [0xa39e88], eax
// 0040b538  6830279e00           push 0x9e2730
// 0040b53d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040b545  e8a6efffff           call 0x40a4f0
// 0040b54a  50                   push eax
// 0040b54b  b9c89da300           mov ecx, 0xa39dc8
// 0040b550  e88be21e00           call 0x5f97e0
// 0040b555  68103c8900           push 0x893c10
// 0040b55a  e89ce53000           call 0x719afb
// 0040b55f  83c404               add esp, 4
// 0040b562  8b0c24               mov ecx, dword ptr [esp]
// 0040b565  b8c89da300           mov eax, 0xa39dc8
// 0040b56a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b571  83c40c               add esp, 0xc
// 0040b574  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
