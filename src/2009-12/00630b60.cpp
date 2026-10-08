// roc 2009-12 00630b60  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00630b60
//
// 00630b60  64a100000000         mov eax, dword ptr fs:[0]
// 00630b66  6aff                 push -1
// 00630b68  684efe9300           push 0x93fe4e
// 00630b6d  50                   push eax
// 00630b6e  b801000000           mov eax, 1
// 00630b73  64892500000000       mov dword ptr fs:[0], esp
// 00630b7a  8405e446b800         test byte ptr [0xb846e4], al
// 00630b80  7525                 jne 0x630ba7
// 00630b82  0905e446b800         or dword ptr [0xb846e4], eax
// 00630b88  b9f845b800           mov ecx, 0xb845f8
// 00630b8d  c744240800000000     mov dword ptr [esp + 8], 0
// 00630b95  e8d6f1ffff           call 0x62fd70
// 00630b9a  6880169800           push 0x981680
// 00630b9f  e8853d1c00           call 0x7f4929
// 00630ba4  83c404               add esp, 4
// 00630ba7  8b0c24               mov ecx, dword ptr [esp]
// 00630baa  b8f845b800           mov eax, 0xb845f8
// 00630baf  64890d00000000       mov dword ptr fs:[0], ecx
// 00630bb6  83c40c               add esp, 0xc
// 00630bb9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
