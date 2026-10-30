// roc 2011-06 0048b4e0  unit: Scintilla::CScintillaView  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b4e0
//
// 0048b4e0  51                   push ecx
// 0048b4e1  53                   push ebx
// 0048b4e2  55                   push ebp
// 0048b4e3  56                   push esi
// 0048b4e4  57                   push edi
// 0048b4e5  8d7158               lea esi, [ecx + 0x58]
// 0048b4e8  6a01                 push 1
// 0048b4ea  8bce                 mov ecx, esi
// 0048b4ec  e8bff0ffff           call 0x48a5b0
// 0048b4f1  6a01                 push 1
// 0048b4f3  8bce                 mov ecx, esi
// 0048b4f5  8bd8                 mov ebx, eax
// 0048b4f7  e8e4f0ffff           call 0x48a5e0
// 0048b4fc  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0048b500  55                   push ebp
// 0048b501  89442414             mov dword ptr [esp + 0x14], eax
// 0048b505  ff156403a400         call dword ptr [0xa40364]
// 0048b50b  8bf8                 mov edi, eax
// 0048b50d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0048b511  85c0                 test eax, eax
// 0048b513  750a                 jne 0x48b51f
// 0048b515  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048b519  2bcb                 sub ecx, ebx
// 0048b51b  3bf9                 cmp edi, ecx
// 0048b51d  756e                 jne 0x48b58d
// 0048b51f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0048b523  f7da                 neg edx
// 0048b525  1bd2                 sbb edx, edx
// 0048b527  83e204               and edx, 4
// 0048b52a  f7d8                 neg eax
// 0048b52c  1bc0                 sbb eax, eax
// 0048b52e  2500002000           and eax, 0x200000
// 0048b533  0bd0                 or edx, eax
// 0048b535  8b442420             mov eax, dword ptr [esp + 0x20]
// 0048b539  f7d8                 neg eax
// 0048b53b  1bc0                 sbb eax, eax
// 0048b53d  83e002               and eax, 2
// 0048b540  6a01                 push 1
// 0048b542  0bd0                 or edx, eax
// 0048b544  52                   push edx
// 0048b545  8bce                 mov ecx, esi
// 0048b547  e8c4f6ffff           call 0x48ac10
// 0048b54c  6a01                 push 1
// 0048b54e  8bce                 mov ecx, esi
// 0048b550  e86bf8ffff           call 0x48adc0
// 0048b555  6a01                 push 1
// 0048b557  55                   push ebp
// 0048b558  57                   push edi
// 0048b559  8bce                 mov ecx, esi
// 0048b55b  e860f6ffff           call 0x48abc0
// 0048b560  85c0                 test eax, eax
// 0048b562  7c29                 jl 0x48b58d
// 0048b564  6a01                 push 1
// 0048b566  8bce                 mov ecx, esi
// 0048b568  e8f3f5ffff           call 0x48ab60
// 0048b56d  3bc3                 cmp eax, ebx
// 0048b56f  751c                 jne 0x48b58d
// 0048b571  6a01                 push 1
// 0048b573  8bce                 mov ecx, esi
// 0048b575  e816f6ffff           call 0x48ab90
// 0048b57a  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0048b57e  750d                 jne 0x48b58d
// 0048b580  5f                   pop edi
// 0048b581  5e                   pop esi
// 0048b582  5d                   pop ebp
// 0048b583  b801000000           mov eax, 1
// 0048b588  5b                   pop ebx
// 0048b589  59                   pop ecx
// 0048b58a  c21000               ret 0x10
// 0048b58d  5f                   pop edi
// 0048b58e  5e                   pop esi
// 0048b58f  5d                   pop ebp
// 0048b590  33c0                 xor eax, eax
// 0048b592  5b                   pop ebx
// 0048b593  59                   pop ecx
// 0048b594  c21000               ret 0x10
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?SameAsSelected@CScintillaView@@MAEHPBDHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
