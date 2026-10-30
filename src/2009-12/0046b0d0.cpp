// roc 2009-12 0046b0d0  unit: Scintilla::CScintillaView  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046b0d0
//
// 0046b0d0  51                   push ecx
// 0046b0d1  53                   push ebx
// 0046b0d2  55                   push ebp
// 0046b0d3  56                   push esi
// 0046b0d4  57                   push edi
// 0046b0d5  8d7158               lea esi, [ecx + 0x58]
// 0046b0d8  6a01                 push 1
// 0046b0da  8bce                 mov ecx, esi
// 0046b0dc  e8bff0ffff           call 0x46a1a0
// 0046b0e1  6a01                 push 1
// 0046b0e3  8bce                 mov ecx, esi
// 0046b0e5  8bd8                 mov ebx, eax
// 0046b0e7  e8e4f0ffff           call 0x46a1d0
// 0046b0ec  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0046b0f0  55                   push ebp
// 0046b0f1  89442414             mov dword ptr [esp + 0x14], eax
// 0046b0f5  ff1518b29800         call dword ptr [0x98b218]
// 0046b0fb  8bf8                 mov edi, eax
// 0046b0fd  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046b101  85c0                 test eax, eax
// 0046b103  750a                 jne 0x46b10f
// 0046b105  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046b109  2bcb                 sub ecx, ebx
// 0046b10b  3bf9                 cmp edi, ecx
// 0046b10d  756e                 jne 0x46b17d
// 0046b10f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0046b113  f7da                 neg edx
// 0046b115  1bd2                 sbb edx, edx
// 0046b117  83e204               and edx, 4
// 0046b11a  f7d8                 neg eax
// 0046b11c  1bc0                 sbb eax, eax
// 0046b11e  2500002000           and eax, 0x200000
// 0046b123  0bd0                 or edx, eax
// 0046b125  8b442420             mov eax, dword ptr [esp + 0x20]
// 0046b129  f7d8                 neg eax
// 0046b12b  1bc0                 sbb eax, eax
// 0046b12d  83e002               and eax, 2
// 0046b130  6a01                 push 1
// 0046b132  0bd0                 or edx, eax
// 0046b134  52                   push edx
// 0046b135  8bce                 mov ecx, esi
// 0046b137  e8c4f6ffff           call 0x46a800
// 0046b13c  6a01                 push 1
// 0046b13e  8bce                 mov ecx, esi
// 0046b140  e86bf8ffff           call 0x46a9b0
// 0046b145  6a01                 push 1
// 0046b147  55                   push ebp
// 0046b148  57                   push edi
// 0046b149  8bce                 mov ecx, esi
// 0046b14b  e860f6ffff           call 0x46a7b0
// 0046b150  85c0                 test eax, eax
// 0046b152  7c29                 jl 0x46b17d
// 0046b154  6a01                 push 1
// 0046b156  8bce                 mov ecx, esi
// 0046b158  e8f3f5ffff           call 0x46a750
// 0046b15d  3bc3                 cmp eax, ebx
// 0046b15f  751c                 jne 0x46b17d
// 0046b161  6a01                 push 1
// 0046b163  8bce                 mov ecx, esi
// 0046b165  e816f6ffff           call 0x46a780
// 0046b16a  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0046b16e  750d                 jne 0x46b17d
// 0046b170  5f                   pop edi
// 0046b171  5e                   pop esi
// 0046b172  5d                   pop ebp
// 0046b173  b801000000           mov eax, 1
// 0046b178  5b                   pop ebx
// 0046b179  59                   pop ecx
// 0046b17a  c21000               ret 0x10
// 0046b17d  5f                   pop edi
// 0046b17e  5e                   pop esi
// 0046b17f  5d                   pop ebp
// 0046b180  33c0                 xor eax, eax
// 0046b182  5b                   pop ebx
// 0046b183  59                   pop ecx
// 0046b184  c21000               ret 0x10
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?SameAsSelected@CScintillaView@@MAEHPBDHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
