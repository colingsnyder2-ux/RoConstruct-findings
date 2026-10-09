// roc 2008-06 00585090  unit: RBX::ModelInstance  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585090
//
// 00585090  64a100000000         mov eax, dword ptr fs:[0]
// 00585096  6aff                 push -1
// 00585098  680e127d00           push 0x7d120e
// 0058509d  50                   push eax
// 0058509e  b801000000           mov eax, 1
// 005850a3  64892500000000       mov dword ptr fs:[0], esp
// 005850aa  840560569700         test byte ptr [0x975660], al
// 005850b0  7530                 jne 0x5850e2
// 005850b2  090560569700         or dword ptr [0x975660], eax
// 005850b8  6860288400           push 0x842860
// 005850bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005850c5  e8b65ce8ff           call 0x40ad80
// 005850ca  50                   push eax
// 005850cb  b9a0559700           mov ecx, 0x9755a0
// 005850d0  e81bb8feff           call 0x5708f0
// 005850d5  68c0d77f00           push 0x7fd7c0
// 005850da  e8d0c61100           call 0x6a17af
// 005850df  83c404               add esp, 4
// 005850e2  8b0c24               mov ecx, dword ptr [esp]
// 005850e5  b8a0559700           mov eax, 0x9755a0
// 005850ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005850f1  83c40c               add esp, 0xc
// 005850f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
