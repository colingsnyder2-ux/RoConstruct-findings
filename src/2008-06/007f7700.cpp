// roc 2008-06 007f7700  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7700
//
// 007f7700  53                   push ebx
// 007f7701  55                   push ebp
// 007f7702  56                   push esi
// 007f7703  57                   push edi
// 007f7704  6a01                 push 1
// 007f7706  83ec0c               sub esp, 0xc
// 007f7709  8bc4                 mov eax, esp
// 007f770b  b950fc5f00           mov ecx, 0x5ffc50
// 007f7710  8908                 mov dword ptr [eax], ecx
// 007f7712  33d2                 xor edx, edx
// 007f7714  895004               mov dword ptr [eax + 4], edx
// 007f7717  83ec0c               sub esp, 0xc
// 007f771a  33f6                 xor esi, esi
// 007f771c  897008               mov dword ptr [eax + 8], esi
// 007f771f  8bc4                 mov eax, esp
// 007f7721  bf30d55f00           mov edi, 0x5fd530
// 007f7726  8938                 mov dword ptr [eax], edi
// 007f7728  68ac298300           push 0x8329ac
// 007f772d  33db                 xor ebx, ebx
// 007f772f  33ed                 xor ebp, ebp
// 007f7731  895804               mov dword ptr [eax + 4], ebx
// 007f7734  68401e8400           push 0x841e40
// 007f7739  b9b8b69700           mov ecx, 0x97b6b8
// 007f773e  896808               mov dword ptr [eax + 8], ebp
// 007f7741  e8ea71e0ff           call 0x5fe930
// 007f7746  6880ff7f00           push 0x7fff80
// 007f774b  e85fa0eaff           call 0x6a17af
// 007f7750  83c404               add esp, 4
// 007f7753  5f                   pop edi
// 007f7754  5e                   pop esi
// 007f7755  5d                   pop ebp
// 007f7756  5b                   pop ebx
// 007f7757  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripForward@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
