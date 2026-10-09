// roc 2008-06 005c0940  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0940
//
// 005c0940  64a100000000         mov eax, dword ptr fs:[0]
// 005c0946  6aff                 push -1
// 005c0948  682e457d00           push 0x7d452e
// 005c094d  50                   push eax
// 005c094e  b801000000           mov eax, 1
// 005c0953  64892500000000       mov dword ptr fs:[0], esp
// 005c095a  840598889700         test byte ptr [0x978898], al
// 005c0960  7530                 jne 0x5c0992
// 005c0962  090598889700         or dword ptr [0x978898], eax
// 005c0968  6898298400           push 0x842998
// 005c096d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0975  e806a4e4ff           call 0x40ad80
// 005c097a  50                   push eax
// 005c097b  b9d8879700           mov ecx, 0x9787d8
// 005c0980  e86bfffaff           call 0x5708f0
// 005c0985  6870e87f00           push 0x7fe870
// 005c098a  e8200e0e00           call 0x6a17af
// 005c098f  83c404               add esp, 4
// 005c0992  8b0c24               mov ecx, dword ptr [esp]
// 005c0995  b8d8879700           mov eax, 0x9787d8
// 005c099a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c09a1  83c40c               add esp, 0xc
// 005c09a4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
