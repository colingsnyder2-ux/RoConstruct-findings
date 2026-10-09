// roc 2008-06 005d2760  unit: RBX::SpawnerService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2760
//
// 005d2760  64a100000000         mov eax, dword ptr fs:[0]
// 005d2766  6aff                 push -1
// 005d2768  687e587d00           push 0x7d587e
// 005d276d  50                   push eax
// 005d276e  b801000000           mov eax, 1
// 005d2773  64892500000000       mov dword ptr fs:[0], esp
// 005d277a  8405689e9700         test byte ptr [0x979e68], al
// 005d2780  7530                 jne 0x5d27b2
// 005d2782  0905689e9700         or dword ptr [0x979e68], eax
// 005d2788  68cc259500           push 0x9525cc
// 005d278d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d2795  e856a0fcff           call 0x59c7f0
// 005d279a  50                   push eax
// 005d279b  b9a89d9700           mov ecx, 0x979da8
// 005d27a0  e84be1f9ff           call 0x5708f0
// 005d27a5  6870f07f00           push 0x7ff070
// 005d27aa  e800f00c00           call 0x6a17af
// 005d27af  83c404               add esp, 4
// 005d27b2  8b0c24               mov ecx, dword ptr [esp]
// 005d27b5  b8a89d9700           mov eax, 0x979da8
// 005d27ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005d27c1  83c40c               add esp, 0xc
// 005d27c4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
