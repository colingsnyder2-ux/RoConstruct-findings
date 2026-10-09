// roc 2008-06 005b19c0  unit: RBX::VHat::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b19c0
//
// 005b19c0  64a100000000         mov eax, dword ptr fs:[0]
// 005b19c6  6aff                 push -1
// 005b19c8  687e377d00           push 0x7d377e
// 005b19cd  50                   push eax
// 005b19ce  b801000000           mov eax, 1
// 005b19d3  64892500000000       mov dword ptr fs:[0], esp
// 005b19da  8405e06e9700         test byte ptr [0x976ee0], al
// 005b19e0  7530                 jne 0x5b1a12
// 005b19e2  0905e06e9700         or dword ptr [0x976ee0], eax
// 005b19e8  68084a8300           push 0x834a08
// 005b19ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b19f5  e856ffffff           call 0x5b1950
// 005b19fa  50                   push eax
// 005b19fb  b9206e9700           mov ecx, 0x976e20
// 005b1a00  e8ebeefbff           call 0x5708f0
// 005b1a05  68a0e27f00           push 0x7fe2a0
// 005b1a0a  e8a0fd0e00           call 0x6a17af
// 005b1a0f  83c404               add esp, 4
// 005b1a12  8b0c24               mov ecx, dword ptr [esp]
// 005b1a15  b8206e9700           mov eax, 0x976e20
// 005b1a1a  64890d00000000       mov dword ptr fs:[0], ecx
// 005b1a21  83c40c               add esp, 0xc
// 005b1a24  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
