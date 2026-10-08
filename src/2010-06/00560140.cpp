// from server: 100% by auto
// roc 2010-06 00560140  unit: G3D::_internal::DialogTemplate  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560140
//
// 00560140  8b442408             mov eax, dword ptr [esp + 8]
// 00560144  2d10010000           sub eax, 0x110
// 00560149  7430                 je 0x56017b
// 0056014b  83e801               sub eax, 1
// 0056014e  0f85a0000000         jne 0x5601f4
// 00560154  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 00560159  2dd0070000           sub eax, 0x7d0
// 0056015e  83f809               cmp eax, 9
// 00560161  0f878d000000         ja 0x5601f4
// 00560167  50                   push eax
// 00560168  8b442408             mov eax, dword ptr [esp + 8]
// 0056016c  50                   push eax
// 0056016d  ff15f8bb9e00         call dword ptr [0x9ebbf8]
// 00560173  b801000000           mov eax, 1
// 00560178  c21000               ret 0x10
// 0056017b  53                   push ebx
// 0056017c  8b1d0cbc9e00         mov ebx, dword ptr [0x9ebc0c]
// 00560182  55                   push ebp
// 00560183  56                   push esi
// 00560184  8b742410             mov esi, dword ptr [esp + 0x10]
// 00560188  57                   push edi
// 00560189  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0056018d  8b0f                 mov ecx, dword ptr [edi]
// 0056018f  51                   push ecx
// 00560190  68e8030000           push 0x3e8
// 00560195  56                   push esi
// 00560196  ffd3                 call ebx
// 00560198  8b2d10bc9e00         mov ebp, dword ptr [0x9ebc10]
// 0056019e  50                   push eax
// 0056019f  ffd5                 call ebp
// 005601a1  68d0070000           push 0x7d0
// 005601a6  56                   push esi
// 005601a7  ffd3                 call ebx
// 005601a9  50                   push eax
// 005601aa  ff1558ba9e00         call dword ptr [0x9eba58]
// 005601b0  8b5704               mov edx, dword ptr [edi + 4]
// 005601b3  52                   push edx
// 005601b4  56                   push esi
// 005601b5  ffd5                 call ebp
// 005601b7  68800ca200           push 0xa20c80
// 005601bc  6a31                 push 0x31
// 005601be  6a02                 push 2
// 005601c0  6a00                 push 0
// 005601c2  6a00                 push 0
// 005601c4  6a00                 push 0
// 005601c6  6a00                 push 0
// 005601c8  6a00                 push 0
// 005601ca  6a00                 push 0
// 005601cc  6890010000           push 0x190
// 005601d1  6a00                 push 0
// 005601d3  6a00                 push 0
// 005601d5  6a00                 push 0
// 005601d7  6a10                 push 0x10
// 005601d9  ff1574a19e00         call dword ptr [0x9ea174]
// 005601df  6a01                 push 1
// 005601e1  50                   push eax
// 005601e2  6a30                 push 0x30
// 005601e4  68e8030000           push 0x3e8
// 005601e9  56                   push esi
// 005601ea  ff1564bb9e00         call dword ptr [0x9ebb64]
// 005601f0  5f                   pop edi
// 005601f1  5e                   pop esi
// 005601f2  5d                   pop ebp
// 005601f3  5b                   pop ebx
// 005601f4  33c0                 xor eax, eax
// 005601f6  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?PromptDlgProc@_internal@G3D@@YGHPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
