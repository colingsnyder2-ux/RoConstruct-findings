// roc 2008-06 005a3b70  unit: RBX::Workspace  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a3b70
//
// 005a3b70  64a100000000         mov eax, dword ptr fs:[0]
// 005a3b76  6aff                 push -1
// 005a3b78  684e2c7d00           push 0x7d2c4e
// 005a3b7d  50                   push eax
// 005a3b7e  b801000000           mov eax, 1
// 005a3b83  64892500000000       mov dword ptr fs:[0], esp
// 005a3b8a  8405486b9700         test byte ptr [0x976b48], al
// 005a3b90  7530                 jne 0x5a3bc2
// 005a3b92  0905486b9700         or dword ptr [0x976b48], eax
// 005a3b98  6880b69400           push 0x94b680
// 005a3b9d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a3ba5  e866d9feff           call 0x591510
// 005a3baa  50                   push eax
// 005a3bab  b9886a9700           mov ecx, 0x976a88
// 005a3bb0  e83bcdfcff           call 0x5708f0
// 005a3bb5  68d0e07f00           push 0x7fe0d0
// 005a3bba  e8f0db0f00           call 0x6a17af
// 005a3bbf  83c404               add esp, 4
// 005a3bc2  8b0c24               mov ecx, dword ptr [esp]
// 005a3bc5  b8886a9700           mov eax, 0x976a88
// 005a3bca  64890d00000000       mov dword ptr fs:[0], ecx
// 005a3bd1  83c40c               add esp, 0xc
// 005a3bd4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
