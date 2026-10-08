// roc 2007-08 00772440  unit: seg_00770000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772440
//
// 00772440  53                   push ebx
// 00772441  55                   push ebp
// 00772442  56                   push esi
// 00772443  57                   push edi
// 00772444  6a04                 push 4
// 00772446  83ec0c               sub esp, 0xc
// 00772449  8bc4                 mov eax, esp
// 0077244b  b9e0845700           mov ecx, 0x5784e0
// 00772450  8908                 mov dword ptr [eax], ecx
// 00772452  33d2                 xor edx, edx
// 00772454  895004               mov dword ptr [eax + 4], edx
// 00772457  83ec0c               sub esp, 0xc
// 0077245a  33f6                 xor esi, esi
// 0077245c  897008               mov dword ptr [eax + 8], esi
// 0077245f  8bc4                 mov eax, esp
// 00772461  bff0375700           mov edi, 0x5737f0
// 00772466  8938                 mov dword ptr [eax], edi
// 00772468  33db                 xor ebx, ebx
// 0077246a  895804               mov dword ptr [eax + 4], ebx
// 0077246d  33ed                 xor ebp, ebp
// 0077246f  896808               mov dword ptr [eax + 8], ebp
// 00772472  a128048a00           mov eax, dword ptr [0x8a0428]
// 00772477  50                   push eax
// 00772478  683cac7a00           push 0x7aac3c
// 0077247d  b9982a8c00           mov ecx, 0x8c2a98
// 00772482  e8f953e0ff           call 0x577880
// 00772487  6890a17700           push 0x77a190
// 0077248c  e892e8ebff           call 0x630d23
// 00772491  83c404               add esp, 4
// 00772494  5f                   pop edi
// 00772495  5e                   pop esi
// 00772496  5d                   pop ebp
// 00772497  5b                   pop ebx
// 00772498  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_formFactor@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
