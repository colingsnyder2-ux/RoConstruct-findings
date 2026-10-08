// roc 2009-12 00630c40  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00630c40
//
// 00630c40  64a100000000         mov eax, dword ptr fs:[0]
// 00630c46  6aff                 push -1
// 00630c48  688efe9300           push 0x93fe8e
// 00630c4d  50                   push eax
// 00630c4e  b801000000           mov eax, 1
// 00630c53  64892500000000       mov dword ptr fs:[0], esp
// 00630c5a  8405c448b800         test byte ptr [0xb848c4], al
// 00630c60  7525                 jne 0x630c87
// 00630c62  0905c448b800         or dword ptr [0xb848c4], eax
// 00630c68  b9d847b800           mov ecx, 0xb847d8
// 00630c6d  c744240800000000     mov dword ptr [esp + 8], 0
// 00630c75  e8e6f9ffff           call 0x630660
// 00630c7a  6860169800           push 0x981660
// 00630c7f  e8a53c1c00           call 0x7f4929
// 00630c84  83c404               add esp, 4
// 00630c87  8b0c24               mov ecx, dword ptr [esp]
// 00630c8a  b8d847b800           mov eax, 0xb847d8
// 00630c8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00630c96  83c40c               add esp, 0xc
// 00630c99  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
