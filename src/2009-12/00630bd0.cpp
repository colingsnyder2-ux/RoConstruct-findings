// roc 2009-12 00630bd0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00630bd0
//
// 00630bd0  64a100000000         mov eax, dword ptr fs:[0]
// 00630bd6  6aff                 push -1
// 00630bd8  686efe9300           push 0x93fe6e
// 00630bdd  50                   push eax
// 00630bde  b801000000           mov eax, 1
// 00630be3  64892500000000       mov dword ptr fs:[0], esp
// 00630bea  8405d447b800         test byte ptr [0xb847d4], al
// 00630bf0  7525                 jne 0x630c17
// 00630bf2  0905d447b800         or dword ptr [0xb847d4], eax
// 00630bf8  b9e846b800           mov ecx, 0xb846e8
// 00630bfd  c744240800000000     mov dword ptr [esp + 8], 0
// 00630c05  e8e6f2ffff           call 0x62fef0
// 00630c0a  6870169800           push 0x981670
// 00630c0f  e8153d1c00           call 0x7f4929
// 00630c14  83c404               add esp, 4
// 00630c17  8b0c24               mov ecx, dword ptr [esp]
// 00630c1a  b8e846b800           mov eax, 0xb846e8
// 00630c1f  64890d00000000       mov dword ptr fs:[0], ecx
// 00630c26  83c40c               add esp, 0xc
// 00630c29  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
