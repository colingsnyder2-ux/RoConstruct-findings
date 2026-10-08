// roc 2007-08 00590f20  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590f20
//
// 00590f20  64a100000000         mov eax, dword ptr fs:[0]
// 00590f26  6aff                 push -1
// 00590f28  683e6c7500           push 0x756c3e
// 00590f2d  50                   push eax
// 00590f2e  b801000000           mov eax, 1
// 00590f33  64892500000000       mov dword ptr fs:[0], esp
// 00590f3a  840520478c00         test byte ptr [0x8c4720], al
// 00590f40  7530                 jne 0x590f72
// 00590f42  090520478c00         or dword ptr [0x8c4720], eax
// 00590f48  686c5e7b00           push 0x7b5e6c
// 00590f4d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00590f55  e896fdffff           call 0x590cf0
// 00590f5a  50                   push eax
// 00590f5b  b998468c00           mov ecx, 0x8c4698
// 00590f60  e89bfcfdff           call 0x570c00
// 00590f65  6830aa7700           push 0x77aa30
// 00590f6a  e8b4fd0900           call 0x630d23
// 00590f6f  83c404               add esp, 4
// 00590f72  8b0c24               mov ecx, dword ptr [esp]
// 00590f75  b898468c00           mov eax, 0x8c4698
// 00590f7a  64890d00000000       mov dword ptr fs:[0], ecx
// 00590f81  83c40c               add esp, 0xc
// 00590f84  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
