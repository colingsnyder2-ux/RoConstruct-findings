// roc 2009-12 005fe7d0  unit: G3D::_internal::DialogTemplate  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe7d0
//
// 005fe7d0  8b442408             mov eax, dword ptr [esp + 8]
// 005fe7d4  2d10010000           sub eax, 0x110
// 005fe7d9  7430                 je 0x5fe80b
// 005fe7db  83e801               sub eax, 1
// 005fe7de  0f85a0000000         jne 0x5fe884
// 005fe7e4  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 005fe7e9  2dd0070000           sub eax, 0x7d0
// 005fe7ee  83f809               cmp eax, 9
// 005fe7f1  0f878d000000         ja 0x5fe884
// 005fe7f7  50                   push eax
// 005fe7f8  8b442408             mov eax, dword ptr [esp + 8]
// 005fe7fc  50                   push eax
// 005fe7fd  ff15a8c99800         call dword ptr [0x98c9a8]
// 005fe803  b801000000           mov eax, 1
// 005fe808  c21000               ret 0x10
// 005fe80b  53                   push ebx
// 005fe80c  8b1dacc99800         mov ebx, dword ptr [0x98c9ac]
// 005fe812  55                   push ebp
// 005fe813  56                   push esi
// 005fe814  8b742410             mov esi, dword ptr [esp + 0x10]
// 005fe818  57                   push edi
// 005fe819  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005fe81d  8b0f                 mov ecx, dword ptr [edi]
// 005fe81f  51                   push ecx
// 005fe820  68e8030000           push 0x3e8
// 005fe825  56                   push esi
// 005fe826  ffd3                 call ebx
// 005fe828  8b2d14ca9800         mov ebp, dword ptr [0x98ca14]
// 005fe82e  50                   push eax
// 005fe82f  ffd5                 call ebp
// 005fe831  68d0070000           push 0x7d0
// 005fe836  56                   push esi
// 005fe837  ffd3                 call ebx
// 005fe839  50                   push eax
// 005fe83a  ff15c8cb9800         call dword ptr [0x98cbc8]
// 005fe840  8b5704               mov edx, dword ptr [edi + 4]
// 005fe843  52                   push edx
// 005fe844  56                   push esi
// 005fe845  ffd5                 call ebp
// 005fe847  68282f9c00           push 0x9c2f28
// 005fe84c  6a31                 push 0x31
// 005fe84e  6a02                 push 2
// 005fe850  6a00                 push 0
// 005fe852  6a00                 push 0
// 005fe854  6a00                 push 0
// 005fe856  6a00                 push 0
// 005fe858  6a00                 push 0
// 005fe85a  6a00                 push 0
// 005fe85c  6890010000           push 0x190
// 005fe861  6a00                 push 0
// 005fe863  6a00                 push 0
// 005fe865  6a00                 push 0
// 005fe867  6a10                 push 0x10
// 005fe869  ff158cb19800         call dword ptr [0x98b18c]
// 005fe86f  6a01                 push 1
// 005fe871  50                   push eax
// 005fe872  6a30                 push 0x30
// 005fe874  68e8030000           push 0x3e8
// 005fe879  56                   push esi
// 005fe87a  ff15b0c99800         call dword ptr [0x98c9b0]
// 005fe880  5f                   pop edi
// 005fe881  5e                   pop esi
// 005fe882  5d                   pop ebp
// 005fe883  5b                   pop ebx
// 005fe884  33c0                 xor eax, eax
// 005fe886  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?PromptDlgProc@_internal@G3D@@YGHPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
