// roc 2008-06 005c35e0  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c35e0
//
// 005c35e0  64a100000000         mov eax, dword ptr fs:[0]
// 005c35e6  6aff                 push -1
// 005c35e8  683e477d00           push 0x7d473e
// 005c35ed  50                   push eax
// 005c35ee  b801000000           mov eax, 1
// 005c35f3  64892500000000       mov dword ptr fs:[0], esp
// 005c35fa  8405508e9700         test byte ptr [0x978e50], al
// 005c3600  7530                 jne 0x5c3632
// 005c3602  0905508e9700         or dword ptr [0x978e50], eax
// 005c3608  6860e08300           push 0x83e060
// 005c360d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c3615  e8b6d2ffff           call 0x5c08d0
// 005c361a  50                   push eax
// 005c361b  b9908d9700           mov ecx, 0x978d90
// 005c3620  e8cbd2faff           call 0x5708f0
// 005c3625  68a0e77f00           push 0x7fe7a0
// 005c362a  e880e10d00           call 0x6a17af
// 005c362f  83c404               add esp, 4
// 005c3632  8b0c24               mov ecx, dword ptr [esp]
// 005c3635  b8908d9700           mov eax, 0x978d90
// 005c363a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3641  83c40c               add esp, 0xc
// 005c3644  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
