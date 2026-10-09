// roc 2008-06 005d0420  unit: RBX::HopperBin::W4BinType::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0420
//
// 005d0420  64a100000000         mov eax, dword ptr fs:[0]
// 005d0426  6aff                 push -1
// 005d0428  683e567d00           push 0x7d563e
// 005d042d  50                   push eax
// 005d042e  b801000000           mov eax, 1
// 005d0433  64892500000000       mov dword ptr fs:[0], esp
// 005d043a  8405b09c9700         test byte ptr [0x979cb0], al
// 005d0440  7530                 jne 0x5d0472
// 005d0442  0905b09c9700         or dword ptr [0x979cb0], eax
// 005d0448  6840a78300           push 0x83a740
// 005d044d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d0455  e85605ffff           call 0x5c09b0
// 005d045a  50                   push eax
// 005d045b  b9f09b9700           mov ecx, 0x979bf0
// 005d0460  e88b04faff           call 0x5708f0
// 005d0465  6850ef7f00           push 0x7fef50
// 005d046a  e840130d00           call 0x6a17af
// 005d046f  83c404               add esp, 4
// 005d0472  8b0c24               mov ecx, dword ptr [esp]
// 005d0475  b8f09b9700           mov eax, 0x979bf0
// 005d047a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0481  83c40c               add esp, 0xc
// 005d0484  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
