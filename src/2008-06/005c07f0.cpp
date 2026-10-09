// roc 2008-06 005c07f0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c07f0
//
// 005c07f0  64a100000000         mov eax, dword ptr fs:[0]
// 005c07f6  6aff                 push -1
// 005c07f8  68ce447d00           push 0x7d44ce
// 005c07fd  50                   push eax
// 005c07fe  b801000000           mov eax, 1
// 005c0803  64892500000000       mov dword ptr fs:[0], esp
// 005c080a  840540869700         test byte ptr [0x978640], al
// 005c0810  7530                 jne 0x5c0842
// 005c0812  090540869700         or dword ptr [0x978640], eax
// 005c0818  6838ba8300           push 0x83ba38
// 005c081d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0825  e856a5e4ff           call 0x40ad80
// 005c082a  50                   push eax
// 005c082b  b980859700           mov ecx, 0x978580
// 005c0830  e8bb00fbff           call 0x5708f0
// 005c0835  6880e67f00           push 0x7fe680
// 005c083a  e8700f0e00           call 0x6a17af
// 005c083f  83c404               add esp, 4
// 005c0842  8b0c24               mov ecx, dword ptr [esp]
// 005c0845  b880859700           mov eax, 0x978580
// 005c084a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0851  83c40c               add esp, 0xc
// 005c0854  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
