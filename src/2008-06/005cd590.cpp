// roc 2008-06 005cd590  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd590
//
// 005cd590  64a100000000         mov eax, dword ptr fs:[0]
// 005cd596  6aff                 push -1
// 005cd598  68fe537d00           push 0x7d53fe
// 005cd59d  50                   push eax
// 005cd59e  b801000000           mov eax, 1
// 005cd5a3  64892500000000       mov dword ptr fs:[0], esp
// 005cd5aa  840578999700         test byte ptr [0x979978], al
// 005cd5b0  7530                 jne 0x5cd5e2
// 005cd5b2  090578999700         or dword ptr [0x979978], eax
// 005cd5b8  68c0139500           push 0x9513c0
// 005cd5bd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005cd5c5  e8b6d7e3ff           call 0x40ad80
// 005cd5ca  50                   push eax
// 005cd5cb  b9b8989700           mov ecx, 0x9798b8
// 005cd5d0  e81b33faff           call 0x5708f0
// 005cd5d5  68b0ee7f00           push 0x7feeb0
// 005cd5da  e8d0410d00           call 0x6a17af
// 005cd5df  83c404               add esp, 4
// 005cd5e2  8b0c24               mov ecx, dword ptr [esp]
// 005cd5e5  b8b8989700           mov eax, 0x9798b8
// 005cd5ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005cd5f1  83c40c               add esp, 0xc
// 005cd5f4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
