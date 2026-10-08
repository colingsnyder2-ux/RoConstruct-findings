// roc 2009-12 004494c0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004494c0
//
// 004494c0  64a100000000         mov eax, dword ptr fs:[0]
// 004494c6  6aff                 push -1
// 004494c8  680eac9200           push 0x92ac0e
// 004494cd  50                   push eax
// 004494ce  b801000000           mov eax, 1
// 004494d3  64892500000000       mov dword ptr fs:[0], esp
// 004494da  84052cacb700         test byte ptr [0xb7ac2c], al
// 004494e0  7525                 jne 0x449507
// 004494e2  09052cacb700         or dword ptr [0xb7ac2c], eax
// 004494e8  b940abb700           mov ecx, 0xb7ab40
// 004494ed  c744240800000000     mov dword ptr [esp + 8], 0
// 004494f5  e816f5ffff           call 0x448a10
// 004494fa  68c0e59700           push 0x97e5c0
// 004494ff  e825b43a00           call 0x7f4929
// 00449504  83c404               add esp, 4
// 00449507  8b0c24               mov ecx, dword ptr [esp]
// 0044950a  b840abb700           mov eax, 0xb7ab40
// 0044950f  64890d00000000       mov dword ptr fs:[0], ecx
// 00449516  83c40c               add esp, 0xc
// 00449519  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ?singleton@ContentProvider@RBX@@SAAAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
