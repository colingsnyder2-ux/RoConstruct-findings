// roc 2007-08 00590d60  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590d60
//
// 00590d60  64a100000000         mov eax, dword ptr fs:[0]
// 00590d66  6aff                 push -1
// 00590d68  681e6c7500           push 0x756c1e
// 00590d6d  50                   push eax
// 00590d6e  b801000000           mov eax, 1
// 00590d73  64892500000000       mov dword ptr fs:[0], esp
// 00590d7a  840590468c00         test byte ptr [0x8c4690], al
// 00590d80  7530                 jne 0x590db2
// 00590d82  090590468c00         or dword ptr [0x8c4690], eax
// 00590d88  6860ae7b00           push 0x7bae60
// 00590d8d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00590d95  e806d9ffff           call 0x58e6a0
// 00590d9a  50                   push eax
// 00590d9b  b908468c00           mov ecx, 0x8c4608
// 00590da0  e85bfefdff           call 0x570c00
// 00590da5  68a0aa7700           push 0x77aaa0
// 00590daa  e874ff0900           call 0x630d23
// 00590daf  83c404               add esp, 4
// 00590db2  8b0c24               mov ecx, dword ptr [esp]
// 00590db5  b808468c00           mov eax, 0x8c4608
// 00590dba  64890d00000000       mov dword ptr fs:[0], ecx
// 00590dc1  83c40c               add esp, 0xc
// 00590dc4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
