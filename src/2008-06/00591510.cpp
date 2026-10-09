// roc 2008-06 00591510  unit: RBX::RootInstance  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00591510
//
// 00591510  64a100000000         mov eax, dword ptr fs:[0]
// 00591516  6aff                 push -1
// 00591518  685e1c7d00           push 0x7d1c5e
// 0059151d  50                   push eax
// 0059151e  b801000000           mov eax, 1
// 00591523  64892500000000       mov dword ptr fs:[0], esp
// 0059152a  8405485c9700         test byte ptr [0x975c48], al
// 00591530  7530                 jne 0x591562
// 00591532  0905485c9700         or dword ptr [0x975c48], eax
// 00591538  68e4959400           push 0x9495e4
// 0059153d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00591545  e8b63bffff           call 0x585100
// 0059154a  50                   push eax
// 0059154b  b9885b9700           mov ecx, 0x975b88
// 00591550  e89bf3fdff           call 0x5708f0
// 00591555  6860da7f00           push 0x7fda60
// 0059155a  e850021100           call 0x6a17af
// 0059155f  83c404               add esp, 4
// 00591562  8b0c24               mov ecx, dword ptr [esp]
// 00591565  b8885b9700           mov eax, 0x975b88
// 0059156a  64890d00000000       mov dword ptr fs:[0], ecx
// 00591571  83c40c               add esp, 0xc
// 00591574  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
