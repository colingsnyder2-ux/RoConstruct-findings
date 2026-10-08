// roc 2009-12 00630af0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00630af0
//
// 00630af0  64a100000000         mov eax, dword ptr fs:[0]
// 00630af6  6aff                 push -1
// 00630af8  682efe9300           push 0x93fe2e
// 00630afd  50                   push eax
// 00630afe  b801000000           mov eax, 1
// 00630b03  64892500000000       mov dword ptr fs:[0], esp
// 00630b0a  8405f445b800         test byte ptr [0xb845f4], al
// 00630b10  7525                 jne 0x630b37
// 00630b12  0905f445b800         or dword ptr [0xb845f4], eax
// 00630b18  b90845b800           mov ecx, 0xb84508
// 00630b1d  c744240800000000     mov dword ptr [esp + 8], 0
// 00630b25  e8c6f0ffff           call 0x62fbf0
// 00630b2a  6890169800           push 0x981690
// 00630b2f  e8f53d1c00           call 0x7f4929
// 00630b34  83c404               add esp, 4
// 00630b37  8b0c24               mov ecx, dword ptr [esp]
// 00630b3a  b80845b800           mov eax, 0xb84508
// 00630b3f  64890d00000000       mov dword ptr fs:[0], ecx
// 00630b46  83c40c               add esp, 0xc
// 00630b49  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
