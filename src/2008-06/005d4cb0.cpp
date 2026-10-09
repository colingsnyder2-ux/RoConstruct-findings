// roc 2008-06 005d4cb0  unit: RBX::VClothing::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d4cb0
//
// 005d4cb0  64a100000000         mov eax, dword ptr fs:[0]
// 005d4cb6  6aff                 push -1
// 005d4cb8  68ee597d00           push 0x7d59ee
// 005d4cbd  50                   push eax
// 005d4cbe  b801000000           mov eax, 1
// 005d4cc3  64892500000000       mov dword ptr fs:[0], esp
// 005d4cca  8405a09f9700         test byte ptr [0x979fa0], al
// 005d4cd0  7530                 jne 0x5d4d02
// 005d4cd2  0905a09f9700         or dword ptr [0x979fa0], eax
// 005d4cd8  68bcc18300           push 0x83c1bc
// 005d4cdd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d4ce5  e89660e3ff           call 0x40ad80
// 005d4cea  50                   push eax
// 005d4ceb  b9e09e9700           mov ecx, 0x979ee0
// 005d4cf0  e8fbbbf9ff           call 0x5708f0
// 005d4cf5  6800f27f00           push 0x7ff200
// 005d4cfa  e8b0ca0c00           call 0x6a17af
// 005d4cff  83c404               add esp, 4
// 005d4d02  8b0c24               mov ecx, dword ptr [esp]
// 005d4d05  b8e09e9700           mov eax, 0x979ee0
// 005d4d0a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4d11  83c40c               add esp, 0xc
// 005d4d14  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
