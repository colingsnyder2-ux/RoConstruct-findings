// roc 2007-08 00539e50  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539e50
//
// 00539e50  64a100000000         mov eax, dword ptr fs:[0]
// 00539e56  6aff                 push -1
// 00539e58  683e0c7500           push 0x750c3e
// 00539e5d  50                   push eax
// 00539e5e  b801000000           mov eax, 1
// 00539e63  64892500000000       mov dword ptr fs:[0], esp
// 00539e6a  840530128c00         test byte ptr [0x8c1230], al
// 00539e70  7530                 jne 0x539ea2
// 00539e72  090530128c00         or dword ptr [0x8c1230], eax
// 00539e78  68b4988900           push 0x8998b4
// 00539e7d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00539e85  e806e8edff           call 0x418690
// 00539e8a  50                   push eax
// 00539e8b  b9a8118c00           mov ecx, 0x8c11a8
// 00539e90  e86b6d0300           call 0x570c00
// 00539e95  68b0947700           push 0x7794b0
// 00539e9a  e8846e0f00           call 0x630d23
// 00539e9f  83c404               add esp, 4
// 00539ea2  8b0c24               mov ecx, dword ptr [esp]
// 00539ea5  b8a8118c00           mov eax, 0x8c11a8
// 00539eaa  64890d00000000       mov dword ptr fs:[0], ecx
// 00539eb1  83c40c               add esp, 0xc
// 00539eb4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
