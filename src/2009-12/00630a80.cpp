// roc 2009-12 00630a80  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00630a80
//
// 00630a80  64a100000000         mov eax, dword ptr fs:[0]
// 00630a86  6aff                 push -1
// 00630a88  680efe9300           push 0x93fe0e
// 00630a8d  50                   push eax
// 00630a8e  b801000000           mov eax, 1
// 00630a93  64892500000000       mov dword ptr fs:[0], esp
// 00630a9a  84050445b800         test byte ptr [0xb84504], al
// 00630aa0  7525                 jne 0x630ac7
// 00630aa2  09050445b800         or dword ptr [0xb84504], eax
// 00630aa8  b91844b800           mov ecx, 0xb84418
// 00630aad  c744240800000000     mov dword ptr [esp + 8], 0
// 00630ab5  e846efffff           call 0x62fa00
// 00630aba  68a0169800           push 0x9816a0
// 00630abf  e8653e1c00           call 0x7f4929
// 00630ac4  83c404               add esp, 4
// 00630ac7  8b0c24               mov ecx, dword ptr [esp]
// 00630aca  b81844b800           mov eax, 0xb84418
// 00630acf  64890d00000000       mov dword ptr fs:[0], ecx
// 00630ad6  83c40c               add esp, 0xc
// 00630ad9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
