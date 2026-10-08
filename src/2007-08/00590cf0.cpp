// roc 2007-08 00590cf0  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590cf0
//
// 00590cf0  64a100000000         mov eax, dword ptr fs:[0]
// 00590cf6  6aff                 push -1
// 00590cf8  68fe6b7500           push 0x756bfe
// 00590cfd  50                   push eax
// 00590cfe  b801000000           mov eax, 1
// 00590d03  64892500000000       mov dword ptr fs:[0], esp
// 00590d0a  840500468c00         test byte ptr [0x8c4600], al
// 00590d10  7530                 jne 0x590d42
// 00590d12  090500468c00         or dword ptr [0x8c4600], eax
// 00590d18  68605e7b00           push 0x7b5e60
// 00590d1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00590d25  e8e6d9ffff           call 0x58e710
// 00590d2a  50                   push eax
// 00590d2b  b978458c00           mov ecx, 0x8c4578
// 00590d30  e8cbfefdff           call 0x570c00
// 00590d35  68c0aa7700           push 0x77aac0
// 00590d3a  e8e4ff0900           call 0x630d23
// 00590d3f  83c404               add esp, 4
// 00590d42  8b0c24               mov ecx, dword ptr [esp]
// 00590d45  b878458c00           mov eax, 0x8c4578
// 00590d4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00590d51  83c40c               add esp, 0xc
// 00590d54  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
