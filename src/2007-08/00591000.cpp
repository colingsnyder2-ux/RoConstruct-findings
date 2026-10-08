// roc 2007-08 00591000  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591000
//
// 00591000  64a100000000         mov eax, dword ptr fs:[0]
// 00591006  6aff                 push -1
// 00591008  687e6c7500           push 0x756c7e
// 0059100d  50                   push eax
// 0059100e  b801000000           mov eax, 1
// 00591013  64892500000000       mov dword ptr fs:[0], esp
// 0059101a  840540488c00         test byte ptr [0x8c4840], al
// 00591020  7530                 jne 0x591052
// 00591022  090540488c00         or dword ptr [0x8c4840], eax
// 00591028  687c5e7b00           push 0x7b5e7c
// 0059102d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00591035  e8b6fcffff           call 0x590cf0
// 0059103a  50                   push eax
// 0059103b  b9b8478c00           mov ecx, 0x8c47b8
// 00591040  e8bbfbfdff           call 0x570c00
// 00591045  6810aa7700           push 0x77aa10
// 0059104a  e8d4fc0900           call 0x630d23
// 0059104f  83c404               add esp, 4
// 00591052  8b0c24               mov ecx, dword ptr [esp]
// 00591055  b8b8478c00           mov eax, 0x8c47b8
// 0059105a  64890d00000000       mov dword ptr fs:[0], ecx
// 00591061  83c40c               add esp, 0xc
// 00591064  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
