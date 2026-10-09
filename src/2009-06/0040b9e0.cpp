// roc 2009-06 0040b9e0  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040b9e0
//
// 0040b9e0  64a100000000         mov eax, dword ptr fs:[0]
// 0040b9e6  6aff                 push -1
// 0040b9e8  689ed28400           push 0x84d29e
// 0040b9ed  50                   push eax
// 0040b9ee  b801000000           mov eax, 1
// 0040b9f3  64892500000000       mov dword ptr fs:[0], esp
// 0040b9fa  840518a0a300         test byte ptr [0xa3a018], al
// 0040ba00  7530                 jne 0x40ba32
// 0040ba02  090518a0a300         or dword ptr [0xa3a018], eax
// 0040ba08  6868279e00           push 0x9e2768
// 0040ba0d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040ba15  e856f5ffff           call 0x40af70
// 0040ba1a  50                   push eax
// 0040ba1b  b9589fa300           mov ecx, 0xa39f58
// 0040ba20  e8bbdd1e00           call 0x5f97e0
// 0040ba25  68f03b8900           push 0x893bf0
// 0040ba2a  e8cce03000           call 0x719afb
// 0040ba2f  83c404               add esp, 4
// 0040ba32  8b0c24               mov ecx, dword ptr [esp]
// 0040ba35  b8589fa300           mov eax, 0xa39f58
// 0040ba3a  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ba41  83c40c               add esp, 0xc
// 0040ba44  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
