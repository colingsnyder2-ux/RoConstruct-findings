// roc 2008-06 005c0550  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0550
//
// 005c0550  64a100000000         mov eax, dword ptr fs:[0]
// 005c0556  6aff                 push -1
// 005c0558  680e447d00           push 0x7d440e
// 005c055d  50                   push eax
// 005c055e  b801000000           mov eax, 1
// 005c0563  64892500000000       mov dword ptr fs:[0], esp
// 005c056a  840590819700         test byte ptr [0x978190], al
// 005c0570  7530                 jne 0x5c05a2
// 005c0572  090590819700         or dword ptr [0x978190], eax
// 005c0578  688c108400           push 0x84108c
// 005c057d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0585  e8f6a7e4ff           call 0x40ad80
// 005c058a  50                   push eax
// 005c058b  b9d0809700           mov ecx, 0x9780d0
// 005c0590  e85b03fbff           call 0x5708f0
// 005c0595  68f0e67f00           push 0x7fe6f0
// 005c059a  e810120e00           call 0x6a17af
// 005c059f  83c404               add esp, 4
// 005c05a2  8b0c24               mov ecx, dword ptr [esp]
// 005c05a5  b8d0809700           mov eax, 0x9780d0
// 005c05aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c05b1  83c40c               add esp, 0xc
// 005c05b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
