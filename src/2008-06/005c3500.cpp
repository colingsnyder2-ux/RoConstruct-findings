// roc 2008-06 005c3500  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3500
//
// 005c3500  64a100000000         mov eax, dword ptr fs:[0]
// 005c3506  6aff                 push -1
// 005c3508  68fe467d00           push 0x7d46fe
// 005c350d  50                   push eax
// 005c350e  b801000000           mov eax, 1
// 005c3513  64892500000000       mov dword ptr fs:[0], esp
// 005c351a  8405c08c9700         test byte ptr [0x978cc0], al
// 005c3520  7530                 jne 0x5c3552
// 005c3522  0905c08c9700         or dword ptr [0x978cc0], eax
// 005c3528  6850e08300           push 0x83e050
// 005c352d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c3535  e896d3ffff           call 0x5c08d0
// 005c353a  50                   push eax
// 005c353b  b9008c9700           mov ecx, 0x978c00
// 005c3540  e8abd3faff           call 0x5708f0
// 005c3545  68c0e77f00           push 0x7fe7c0
// 005c354a  e860e20d00           call 0x6a17af
// 005c354f  83c404               add esp, 4
// 005c3552  8b0c24               mov ecx, dword ptr [esp]
// 005c3555  b8008c9700           mov eax, 0x978c00
// 005c355a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3561  83c40c               add esp, 0xc
// 005c3564  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
