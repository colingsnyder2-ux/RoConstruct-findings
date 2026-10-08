// roc 2007-08 005ed800  unit: RBX::VRocket::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed800
//
// 005ed800  64a100000000         mov eax, dword ptr fs:[0]
// 005ed806  6aff                 push -1
// 005ed808  688eb27500           push 0x75b28e
// 005ed80d  50                   push eax
// 005ed80e  b801000000           mov eax, 1
// 005ed813  64892500000000       mov dword ptr fs:[0], esp
// 005ed81a  8405d8728c00         test byte ptr [0x8c72d8], al
// 005ed820  7530                 jne 0x5ed852
// 005ed822  0905d8728c00         or dword ptr [0x8c72d8], eax
// 005ed828  6800f48a00           push 0x8af400
// 005ed82d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ed835  e856aee2ff           call 0x418690
// 005ed83a  50                   push eax
// 005ed83b  b950728c00           mov ecx, 0x8c7250
// 005ed840  e8bb33f8ff           call 0x570c00
// 005ed845  6820c37700           push 0x77c320
// 005ed84a  e8d4340400           call 0x630d23
// 005ed84f  83c404               add esp, 4
// 005ed852  8b0c24               mov ecx, dword ptr [esp]
// 005ed855  b850728c00           mov eax, 0x8c7250
// 005ed85a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed861  83c40c               add esp, 0xc
// 005ed864  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
