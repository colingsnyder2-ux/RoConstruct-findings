// roc 2007-08 0056d920  unit: RBX::VContentId::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d920
//
// 0056d920  64a100000000         mov eax, dword ptr fs:[0]
// 0056d926  6aff                 push -1
// 0056d928  684e4a7500           push 0x754a4e
// 0056d92d  50                   push eax
// 0056d92e  b801000000           mov eax, 1
// 0056d933  64892500000000       mov dword ptr fs:[0], esp
// 0056d93a  84059c248c00         test byte ptr [0x8c249c], al
// 0056d940  752f                 jne 0x56d971
// 0056d942  09059c248c00         or dword ptr [0x8c249c], eax
// 0056d948  68a8998900           push 0x8999a8
// 0056d94d  68d89f7a00           push 0x7a9fd8
// 0056d952  b98c248c00           mov ecx, 0x8c248c
// 0056d957  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056d95f  e89cecffff           call 0x56c600
// 0056d964  68d09e7700           push 0x779ed0
// 0056d969  e8b5330c00           call 0x630d23
// 0056d96e  83c404               add esp, 4
// 0056d971  8b0c24               mov ecx, dword ptr [esp]
// 0056d974  b88c248c00           mov eax, 0x8c248c
// 0056d979  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d980  83c40c               add esp, 0xc
// 0056d983  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??$singleton@N@Type@Reflection@RBX@@SAABV012@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
