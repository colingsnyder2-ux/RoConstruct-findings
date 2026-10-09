// roc 2009-06 0040b770  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040b770
//
// 0040b770  64a100000000         mov eax, dword ptr fs:[0]
// 0040b776  6aff                 push -1
// 0040b778  684ed28400           push 0x84d24e
// 0040b77d  50                   push eax
// 0040b77e  b801000000           mov eax, 1
// 0040b783  64892500000000       mov dword ptr fs:[0], esp
// 0040b78a  8405509fa300         test byte ptr [0xa39f50], al
// 0040b790  7530                 jne 0x40b7c2
// 0040b792  0905509fa300         or dword ptr [0xa39f50], eax
// 0040b798  684c279e00           push 0x9e274c
// 0040b79d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040b7a5  e846edffff           call 0x40a4f0
// 0040b7aa  50                   push eax
// 0040b7ab  b9909ea300           mov ecx, 0xa39e90
// 0040b7b0  e82be01e00           call 0x5f97e0
// 0040b7b5  68003c8900           push 0x893c00
// 0040b7ba  e83ce33000           call 0x719afb
// 0040b7bf  83c404               add esp, 4
// 0040b7c2  8b0c24               mov ecx, dword ptr [esp]
// 0040b7c5  b8909ea300           mov eax, 0xa39e90
// 0040b7ca  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b7d1  83c40c               add esp, 0xc
// 0040b7d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
