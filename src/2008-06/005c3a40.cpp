// roc 2008-06 005c3a40  unit: RBX::VObjectValue::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3a40
//
// 005c3a40  64a100000000         mov eax, dword ptr fs:[0]
// 005c3a46  6aff                 push -1
// 005c3a48  685e487d00           push 0x7d485e
// 005c3a4d  50                   push eax
// 005c3a4e  b801000000           mov eax, 1
// 005c3a53  64892500000000       mov dword ptr fs:[0], esp
// 005c3a5a  840590949700         test byte ptr [0x979490], al
// 005c3a60  7530                 jne 0x5c3a92
// 005c3a62  090590949700         or dword ptr [0x979490], eax
// 005c3a68  6898159600           push 0x961598
// 005c3a6d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c3a75  e8768dfdff           call 0x59c7f0
// 005c3a7a  50                   push eax
// 005c3a7b  b9d0939700           mov ecx, 0x9793d0
// 005c3a80  e86bcefaff           call 0x5708f0
// 005c3a85  68a0e67f00           push 0x7fe6a0
// 005c3a8a  e820dd0d00           call 0x6a17af
// 005c3a8f  83c404               add esp, 4
// 005c3a92  8b0c24               mov ecx, dword ptr [esp]
// 005c3a95  b8d0939700           mov eax, 0x9793d0
// 005c3a9a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3aa1  83c40c               add esp, 0xc
// 005c3aa4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
