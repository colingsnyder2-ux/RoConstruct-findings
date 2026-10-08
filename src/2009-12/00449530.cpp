// roc 2009-12 00449530  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00449530
//
// 00449530  64a100000000         mov eax, dword ptr fs:[0]
// 00449536  6aff                 push -1
// 00449538  682eac9200           push 0x92ac2e
// 0044953d  50                   push eax
// 0044953e  b801000000           mov eax, 1
// 00449543  64892500000000       mov dword ptr fs:[0], esp
// 0044954a  84051cadb700         test byte ptr [0xb7ad1c], al
// 00449550  7525                 jne 0x449577
// 00449552  09051cadb700         or dword ptr [0xb7ad1c], eax
// 00449558  b930acb700           mov ecx, 0xb7ac30
// 0044955d  c744240800000000     mov dword ptr [esp + 8], 0
// 00449565  e836f6ffff           call 0x448ba0
// 0044956a  68b0e59700           push 0x97e5b0
// 0044956f  e8b5b33a00           call 0x7f4929
// 00449574  83c404               add esp, 4
// 00449577  8b0c24               mov ecx, dword ptr [esp]
// 0044957a  b830acb700           mov eax, 0xb7ac30
// 0044957f  64890d00000000       mov dword ptr fs:[0], ecx
// 00449586  83c40c               add esp, 0xc
// 00449589  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
