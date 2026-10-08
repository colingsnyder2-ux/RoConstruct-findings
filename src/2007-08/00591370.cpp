// roc 2007-08 00591370  unit: RBX::VObjectValue::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591370
//
// 00591370  64a100000000         mov eax, dword ptr fs:[0]
// 00591376  6aff                 push -1
// 00591378  685e6d7500           push 0x756d5e
// 0059137d  50                   push eax
// 0059137e  b801000000           mov eax, 1
// 00591383  64892500000000       mov dword ptr fs:[0], esp
// 0059138a  8405304c8c00         test byte ptr [0x8c4c30], al
// 00591390  7530                 jne 0x5913c2
// 00591392  0905304c8c00         or dword ptr [0x8c4c30], eax
// 00591398  68883e8b00           push 0x8b3e88
// 0059139d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005913a5  e8565dfeff           call 0x577100
// 005913aa  50                   push eax
// 005913ab  b9a84b8c00           mov ecx, 0x8c4ba8
// 005913b0  e84bf8fdff           call 0x570c00
// 005913b5  68e0a87700           push 0x77a8e0
// 005913ba  e864f90900           call 0x630d23
// 005913bf  83c404               add esp, 4
// 005913c2  8b0c24               mov ecx, dword ptr [esp]
// 005913c5  b8a84b8c00           mov eax, 0x8c4ba8
// 005913ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005913d1  83c40c               add esp, 0xc
// 005913d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
