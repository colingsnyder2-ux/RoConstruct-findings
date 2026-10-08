// roc 2007-08 005911c0  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005911c0
//
// 005911c0  64a100000000         mov eax, dword ptr fs:[0]
// 005911c6  6aff                 push -1
// 005911c8  68fe6c7500           push 0x756cfe
// 005911cd  50                   push eax
// 005911ce  b801000000           mov eax, 1
// 005911d3  64892500000000       mov dword ptr fs:[0], esp
// 005911da  8405804a8c00         test byte ptr [0x8c4a80], al
// 005911e0  7530                 jne 0x591212
// 005911e2  0905804a8c00         or dword ptr [0x8c4a80], eax
// 005911e8  689c5e7b00           push 0x7b5e9c
// 005911ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005911f5  e8f6faffff           call 0x590cf0
// 005911fa  50                   push eax
// 005911fb  b9f8498c00           mov ecx, 0x8c49f8
// 00591200  e8fbf9fdff           call 0x570c00
// 00591205  68d0a97700           push 0x77a9d0
// 0059120a  e814fb0900           call 0x630d23
// 0059120f  83c404               add esp, 4
// 00591212  8b0c24               mov ecx, dword ptr [esp]
// 00591215  b8f8498c00           mov eax, 0x8c49f8
// 0059121a  64890d00000000       mov dword ptr fs:[0], ecx
// 00591221  83c40c               add esp, 0xc
// 00591224  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
