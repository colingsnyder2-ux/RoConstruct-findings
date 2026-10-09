// roc 2009-06 00462520  unit: Scintilla::CScintillaView  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462520
//
// 00462520  51                   push ecx
// 00462521  53                   push ebx
// 00462522  55                   push ebp
// 00462523  56                   push esi
// 00462524  57                   push edi
// 00462525  8d7158               lea esi, [ecx + 0x58]
// 00462528  6a01                 push 1
// 0046252a  8bce                 mov ecx, esi
// 0046252c  e8cff0ffff           call 0x461600
// 00462531  6a01                 push 1
// 00462533  8bce                 mov ecx, esi
// 00462535  8bd8                 mov ebx, eax
// 00462537  e8f4f0ffff           call 0x461630
// 0046253c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00462540  55                   push ebp
// 00462541  89442414             mov dword ptr [esp + 0x14], eax
// 00462545  ff15e0e18900         call dword ptr [0x89e1e0]
// 0046254b  8bf8                 mov edi, eax
// 0046254d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00462551  85c0                 test eax, eax
// 00462553  750a                 jne 0x46255f
// 00462555  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00462559  2bcb                 sub ecx, ebx
// 0046255b  3bf9                 cmp edi, ecx
// 0046255d  756e                 jne 0x4625cd
// 0046255f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00462563  f7da                 neg edx
// 00462565  1bd2                 sbb edx, edx
// 00462567  83e204               and edx, 4
// 0046256a  f7d8                 neg eax
// 0046256c  1bc0                 sbb eax, eax
// 0046256e  2500002000           and eax, 0x200000
// 00462573  0bd0                 or edx, eax
// 00462575  8b442420             mov eax, dword ptr [esp + 0x20]
// 00462579  f7d8                 neg eax
// 0046257b  1bc0                 sbb eax, eax
// 0046257d  83e002               and eax, 2
// 00462580  6a01                 push 1
// 00462582  0bd0                 or edx, eax
// 00462584  52                   push edx
// 00462585  8bce                 mov ecx, esi
// 00462587  e8d4f6ffff           call 0x461c60
// 0046258c  6a01                 push 1
// 0046258e  8bce                 mov ecx, esi
// 00462590  e87bf8ffff           call 0x461e10
// 00462595  6a01                 push 1
// 00462597  55                   push ebp
// 00462598  57                   push edi
// 00462599  8bce                 mov ecx, esi
// 0046259b  e870f6ffff           call 0x461c10
// 004625a0  85c0                 test eax, eax
// 004625a2  7c29                 jl 0x4625cd
// 004625a4  6a01                 push 1
// 004625a6  8bce                 mov ecx, esi
// 004625a8  e803f6ffff           call 0x461bb0
// 004625ad  3bc3                 cmp eax, ebx
// 004625af  751c                 jne 0x4625cd
// 004625b1  6a01                 push 1
// 004625b3  8bce                 mov ecx, esi
// 004625b5  e826f6ffff           call 0x461be0
// 004625ba  3b442410             cmp eax, dword ptr [esp + 0x10]
// 004625be  750d                 jne 0x4625cd
// 004625c0  5f                   pop edi
// 004625c1  5e                   pop esi
// 004625c2  5d                   pop ebp
// 004625c3  b801000000           mov eax, 1
// 004625c8  5b                   pop ebx
// 004625c9  59                   pop ecx
// 004625ca  c21000               ret 0x10
// 004625cd  5f                   pop edi
// 004625ce  5e                   pop esi
// 004625cf  5d                   pop ebp
// 004625d0  33c0                 xor eax, eax
// 004625d2  5b                   pop ebx
// 004625d3  59                   pop ecx
// 004625d4  c21000               ret 0x10
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?SameAsSelected@CScintillaView@@MAEHPBDHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
