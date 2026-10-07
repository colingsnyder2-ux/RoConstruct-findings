// roc 2008-06 00519050  unit: G3D::_internal::DialogTemplate  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519050
//
// 00519050  8b442408             mov eax, dword ptr [esp + 8]
// 00519054  2d10010000           sub eax, 0x110
// 00519059  7430                 je 0x51908b
// 0051905b  83e801               sub eax, 1
// 0051905e  0f85a0000000         jne 0x519104
// 00519064  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 00519069  2dd0070000           sub eax, 0x7d0
// 0051906e  83f809               cmp eax, 9
// 00519071  0f878d000000         ja 0x519104
// 00519077  50                   push eax
// 00519078  8b442408             mov eax, dword ptr [esp + 8]
// 0051907c  50                   push eax
// 0051907d  ff15a02c8000         call dword ptr [0x802ca0]
// 00519083  b801000000           mov eax, 1
// 00519088  c21000               ret 0x10
// 0051908b  53                   push ebx
// 0051908c  8b1da42c8000         mov ebx, dword ptr [0x802ca4]
// 00519092  55                   push ebp
// 00519093  56                   push esi
// 00519094  8b742410             mov esi, dword ptr [esp + 0x10]
// 00519098  57                   push edi
// 00519099  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0051909d  8b0f                 mov ecx, dword ptr [edi]
// 0051909f  51                   push ecx
// 005190a0  68e8030000           push 0x3e8
// 005190a5  56                   push esi
// 005190a6  ffd3                 call ebx
// 005190a8  8b2dec2c8000         mov ebp, dword ptr [0x802cec]
// 005190ae  50                   push eax
// 005190af  ffd5                 call ebp
// 005190b1  68d0070000           push 0x7d0
// 005190b6  56                   push esi
// 005190b7  ffd3                 call ebx
// 005190b9  50                   push eax
// 005190ba  ff15242e8000         call dword ptr [0x802e24]
// 005190c0  8b5704               mov edx, dword ptr [edi + 4]
// 005190c3  52                   push edx
// 005190c4  56                   push esi
// 005190c5  ffd5                 call ebp
// 005190c7  68a08b8200           push 0x828ba0
// 005190cc  6a31                 push 0x31
// 005190ce  6a02                 push 2
// 005190d0  6a00                 push 0
// 005190d2  6a00                 push 0
// 005190d4  6a00                 push 0
// 005190d6  6a00                 push 0
// 005190d8  6a00                 push 0
// 005190da  6a00                 push 0
// 005190dc  6890010000           push 0x190
// 005190e1  6a00                 push 0
// 005190e3  6a00                 push 0
// 005190e5  6a00                 push 0
// 005190e7  6a10                 push 0x10
// 005190e9  ff1520218000         call dword ptr [0x802120]
// 005190ef  6a01                 push 1
// 005190f1  50                   push eax
// 005190f2  6a30                 push 0x30
// 005190f4  68e8030000           push 0x3e8
// 005190f9  56                   push esi
// 005190fa  ff15a82c8000         call dword ptr [0x802ca8]
// 00519100  5f                   pop edi
// 00519101  5e                   pop esi
// 00519102  5d                   pop ebp
// 00519103  5b                   pop ebx
// 00519104  33c0                 xor eax, eax
// 00519106  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?PromptDlgProc@_internal@G3D@@YGHPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
