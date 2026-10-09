// roc 2008-06 005c0630  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0630
//
// 005c0630  64a100000000         mov eax, dword ptr fs:[0]
// 005c0636  6aff                 push -1
// 005c0638  684e447d00           push 0x7d444e
// 005c063d  50                   push eax
// 005c063e  b801000000           mov eax, 1
// 005c0643  64892500000000       mov dword ptr fs:[0], esp
// 005c064a  840520839700         test byte ptr [0x978320], al
// 005c0650  7530                 jne 0x5c0682
// 005c0652  090520839700         or dword ptr [0x978320], eax
// 005c0658  68b4109500           push 0x9510b4
// 005c065d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0665  e816a7e4ff           call 0x40ad80
// 005c066a  50                   push eax
// 005c066b  b960829700           mov ecx, 0x978260
// 005c0670  e87b02fbff           call 0x5708f0
// 005c0675  68d0e67f00           push 0x7fe6d0
// 005c067a  e830110e00           call 0x6a17af
// 005c067f  83c404               add esp, 4
// 005c0682  8b0c24               mov ecx, dword ptr [esp]
// 005c0685  b860829700           mov eax, 0x978260
// 005c068a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0691  83c40c               add esp, 0xc
// 005c0694  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
