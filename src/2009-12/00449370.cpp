// roc 2009-12 00449370  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00449370
//
// 00449370  64a100000000         mov eax, dword ptr fs:[0]
// 00449376  6aff                 push -1
// 00449378  68aeab9200           push 0x92abae
// 0044937d  50                   push eax
// 0044937e  b801000000           mov eax, 1
// 00449383  64892500000000       mov dword ptr fs:[0], esp
// 0044938a  84055ca9b700         test byte ptr [0xb7a95c], al
// 00449390  7525                 jne 0x4493b7
// 00449392  09055ca9b700         or dword ptr [0xb7a95c], eax
// 00449398  b970a8b700           mov ecx, 0xb7a870
// 0044939d  c744240800000000     mov dword ptr [esp + 8], 0
// 004493a5  e8e6f1ffff           call 0x448590
// 004493aa  68f0e59700           push 0x97e5f0
// 004493af  e875b53a00           call 0x7f4929
// 004493b4  83c404               add esp, 4
// 004493b7  8b0c24               mov ecx, dword ptr [esp]
// 004493ba  b870a8b700           mov eax, 0xb7a870
// 004493bf  64890d00000000       mov dword ptr fs:[0], ecx
// 004493c6  83c40c               add esp, 0xc
// 004493c9  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
