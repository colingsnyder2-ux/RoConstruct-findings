// roc 2012-06 0049e1f0  unit: Scintilla::CScintillaView  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e1f0
//
// 0049e1f0  51                   push ecx
// 0049e1f1  53                   push ebx
// 0049e1f2  55                   push ebp
// 0049e1f3  56                   push esi
// 0049e1f4  57                   push edi
// 0049e1f5  8d7158               lea esi, [ecx + 0x58]
// 0049e1f8  6a01                 push 1
// 0049e1fa  8bce                 mov ecx, esi
// 0049e1fc  e8dff0ffff           call 0x49d2e0
// 0049e201  6a01                 push 1
// 0049e203  8bce                 mov ecx, esi
// 0049e205  8bd8                 mov ebx, eax
// 0049e207  e804f1ffff           call 0x49d310
// 0049e20c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0049e210  55                   push ebp
// 0049e211  89442414             mov dword ptr [esp + 0x14], eax
// 0049e215  ff15a821b200         call dword ptr [0xb221a8]
// 0049e21b  8bf8                 mov edi, eax
// 0049e21d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049e221  85c0                 test eax, eax
// 0049e223  750a                 jne 0x49e22f
// 0049e225  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049e229  2bcb                 sub ecx, ebx
// 0049e22b  3bf9                 cmp edi, ecx
// 0049e22d  756e                 jne 0x49e29d
// 0049e22f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0049e233  f7da                 neg edx
// 0049e235  1bd2                 sbb edx, edx
// 0049e237  83e204               and edx, 4
// 0049e23a  f7d8                 neg eax
// 0049e23c  1bc0                 sbb eax, eax
// 0049e23e  2500002000           and eax, 0x200000
// 0049e243  0bd0                 or edx, eax
// 0049e245  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049e249  f7d8                 neg eax
// 0049e24b  1bc0                 sbb eax, eax
// 0049e24d  83e002               and eax, 2
// 0049e250  6a01                 push 1
// 0049e252  0bd0                 or edx, eax
// 0049e254  52                   push edx
// 0049e255  8bce                 mov ecx, esi
// 0049e257  e8e4f6ffff           call 0x49d940
// 0049e25c  6a01                 push 1
// 0049e25e  8bce                 mov ecx, esi
// 0049e260  e88bf8ffff           call 0x49daf0
// 0049e265  6a01                 push 1
// 0049e267  55                   push ebp
// 0049e268  57                   push edi
// 0049e269  8bce                 mov ecx, esi
// 0049e26b  e880f6ffff           call 0x49d8f0
// 0049e270  85c0                 test eax, eax
// 0049e272  7c29                 jl 0x49e29d
// 0049e274  6a01                 push 1
// 0049e276  8bce                 mov ecx, esi
// 0049e278  e813f6ffff           call 0x49d890
// 0049e27d  3bc3                 cmp eax, ebx
// 0049e27f  751c                 jne 0x49e29d
// 0049e281  6a01                 push 1
// 0049e283  8bce                 mov ecx, esi
// 0049e285  e836f6ffff           call 0x49d8c0
// 0049e28a  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0049e28e  750d                 jne 0x49e29d
// 0049e290  5f                   pop edi
// 0049e291  5e                   pop esi
// 0049e292  5d                   pop ebp
// 0049e293  b801000000           mov eax, 1
// 0049e298  5b                   pop ebx
// 0049e299  59                   pop ecx
// 0049e29a  c21000               ret 0x10
// 0049e29d  5f                   pop edi
// 0049e29e  5e                   pop esi
// 0049e29f  5d                   pop ebp
// 0049e2a0  33c0                 xor eax, eax
// 0049e2a2  5b                   pop ebx
// 0049e2a3  59                   pop ecx
// 0049e2a4  c21000               ret 0x10
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?SameAsSelected@CScintillaView@@MAEHPBDHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
