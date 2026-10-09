// roc 2008-06 005c08d0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c08d0
//
// 005c08d0  64a100000000         mov eax, dword ptr fs:[0]
// 005c08d6  6aff                 push -1
// 005c08d8  680e457d00           push 0x7d450e
// 005c08dd  50                   push eax
// 005c08de  b801000000           mov eax, 1
// 005c08e3  64892500000000       mov dword ptr fs:[0], esp
// 005c08ea  8405d0879700         test byte ptr [0x9787d0], al
// 005c08f0  7530                 jne 0x5c0922
// 005c08f2  0905d0879700         or dword ptr [0x9787d0], eax
// 005c08f8  6830e08300           push 0x83e030
// 005c08fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0905  e876a4e4ff           call 0x40ad80
// 005c090a  50                   push eax
// 005c090b  b910879700           mov ecx, 0x978710
// 005c0910  e8dbfffaff           call 0x5708f0
// 005c0915  6880e87f00           push 0x7fe880
// 005c091a  e8900e0e00           call 0x6a17af
// 005c091f  83c404               add esp, 4
// 005c0922  8b0c24               mov ecx, dword ptr [esp]
// 005c0925  b810879700           mov eax, 0x978710
// 005c092a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0931  83c40c               add esp, 0xc
// 005c0934  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
