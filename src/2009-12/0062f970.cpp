// roc 2009-12 0062f970  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062f970
//
// 0062f970  64a100000000         mov eax, dword ptr fs:[0]
// 0062f976  6aff                 push -1
// 0062f978  684efd9300           push 0x93fd4e
// 0062f97d  50                   push eax
// 0062f97e  b801000000           mov eax, 1
// 0062f983  64892500000000       mov dword ptr fs:[0], esp
// 0062f98a  84050c44b800         test byte ptr [0xb8440c], al
// 0062f990  7525                 jne 0x62f9b7
// 0062f992  09050c44b800         or dword ptr [0xb8440c], eax
// 0062f998  b92043b800           mov ecx, 0xb84320
// 0062f99d  c744240800000000     mov dword ptr [esp + 8], 0
// 0062f9a5  e8c6d30800           call 0x6bcd70
// 0062f9aa  68b0169800           push 0x9816b0
// 0062f9af  e8754f1c00           call 0x7f4929
// 0062f9b4  83c404               add esp, 4
// 0062f9b7  8b0c24               mov ecx, dword ptr [esp]
// 0062f9ba  b82043b800           mov eax, 0xb84320
// 0062f9bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0062f9c6  83c40c               add esp, 0xc
// 0062f9c9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
