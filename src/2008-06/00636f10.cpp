// roc 2008-06 00636f10  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636f10
//
// 00636f10  64a100000000         mov eax, dword ptr fs:[0]
// 00636f16  6aff                 push -1
// 00636f18  686ea17d00           push 0x7da16e
// 00636f1d  50                   push eax
// 00636f1e  b801000000           mov eax, 1
// 00636f23  64892500000000       mov dword ptr fs:[0], esp
// 00636f2a  840530d09700         test byte ptr [0x97d030], al
// 00636f30  7530                 jne 0x636f62
// 00636f32  090530d09700         or dword ptr [0x97d030], eax
// 00636f38  6818da9500           push 0x95da18
// 00636f3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00636f45  e8363eddff           call 0x40ad80
// 00636f4a  50                   push eax
// 00636f4b  b970cf9700           mov ecx, 0x97cf70
// 00636f50  e89b99f3ff           call 0x5708f0
// 00636f55  68c00b8000           push 0x800bc0
// 00636f5a  e850a80600           call 0x6a17af
// 00636f5f  83c404               add esp, 4
// 00636f62  8b0c24               mov ecx, dword ptr [esp]
// 00636f65  b870cf9700           mov eax, 0x97cf70
// 00636f6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00636f71  83c40c               add esp, 0xc
// 00636f74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
