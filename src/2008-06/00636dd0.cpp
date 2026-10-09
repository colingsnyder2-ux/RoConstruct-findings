// roc 2008-06 00636dd0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636dd0
//
// 00636dd0  64a100000000         mov eax, dword ptr fs:[0]
// 00636dd6  6aff                 push -1
// 00636dd8  684ea17d00           push 0x7da14e
// 00636ddd  50                   push eax
// 00636dde  b801000000           mov eax, 1
// 00636de3  64892500000000       mov dword ptr fs:[0], esp
// 00636dea  840568cf9700         test byte ptr [0x97cf68], al
// 00636df0  7530                 jne 0x636e22
// 00636df2  090568cf9700         or dword ptr [0x97cf68], eax
// 00636df8  6808da9500           push 0x95da08
// 00636dfd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00636e05  e8763fddff           call 0x40ad80
// 00636e0a  50                   push eax
// 00636e0b  b9a8ce9700           mov ecx, 0x97cea8
// 00636e10  e8db9af3ff           call 0x5708f0
// 00636e15  68d00b8000           push 0x800bd0
// 00636e1a  e890a90600           call 0x6a17af
// 00636e1f  83c404               add esp, 4
// 00636e22  8b0c24               mov ecx, dword ptr [esp]
// 00636e25  b8a8ce9700           mov eax, 0x97cea8
// 00636e2a  64890d00000000       mov dword ptr fs:[0], ecx
// 00636e31  83c40c               add esp, 0xc
// 00636e34  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
