// roc 2007-08 0045d720  unit: Scintilla::CScintillaView  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d720
//
// 0045d720  51                   push ecx
// 0045d721  53                   push ebx
// 0045d722  55                   push ebp
// 0045d723  56                   push esi
// 0045d724  57                   push edi
// 0045d725  8d7158               lea esi, [ecx + 0x58]
// 0045d728  6a01                 push 1
// 0045d72a  8bce                 mov ecx, esi
// 0045d72c  e89ff0ffff           call 0x45c7d0
// 0045d731  6a01                 push 1
// 0045d733  8bce                 mov ecx, esi
// 0045d735  8bd8                 mov ebx, eax
// 0045d737  e8c4f0ffff           call 0x45c800
// 0045d73c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0045d740  55                   push ebp
// 0045d741  89442414             mov dword ptr [esp + 0x14], eax
// 0045d745  ff15f4d27700         call dword ptr [0x77d2f4]
// 0045d74b  8bf8                 mov edi, eax
// 0045d74d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0045d751  85c0                 test eax, eax
// 0045d753  750a                 jne 0x45d75f
// 0045d755  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045d759  2bcb                 sub ecx, ebx
// 0045d75b  3bf9                 cmp edi, ecx
// 0045d75d  756e                 jne 0x45d7cd
// 0045d75f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0045d763  f7da                 neg edx
// 0045d765  1bd2                 sbb edx, edx
// 0045d767  83e204               and edx, 4
// 0045d76a  f7d8                 neg eax
// 0045d76c  1bc0                 sbb eax, eax
// 0045d76e  2500002000           and eax, 0x200000
// 0045d773  0bd0                 or edx, eax
// 0045d775  8b442420             mov eax, dword ptr [esp + 0x20]
// 0045d779  f7d8                 neg eax
// 0045d77b  1bc0                 sbb eax, eax
// 0045d77d  83e002               and eax, 2
// 0045d780  6a01                 push 1
// 0045d782  0bd0                 or edx, eax
// 0045d784  52                   push edx
// 0045d785  8bce                 mov ecx, esi
// 0045d787  e8a4f6ffff           call 0x45ce30
// 0045d78c  6a01                 push 1
// 0045d78e  8bce                 mov ecx, esi
// 0045d790  e84bf8ffff           call 0x45cfe0
// 0045d795  6a01                 push 1
// 0045d797  55                   push ebp
// 0045d798  57                   push edi
// 0045d799  8bce                 mov ecx, esi
// 0045d79b  e840f6ffff           call 0x45cde0
// 0045d7a0  85c0                 test eax, eax
// 0045d7a2  7c29                 jl 0x45d7cd
// 0045d7a4  6a01                 push 1
// 0045d7a6  8bce                 mov ecx, esi
// 0045d7a8  e8d3f5ffff           call 0x45cd80
// 0045d7ad  3bc3                 cmp eax, ebx
// 0045d7af  751c                 jne 0x45d7cd
// 0045d7b1  6a01                 push 1
// 0045d7b3  8bce                 mov ecx, esi
// 0045d7b5  e8f6f5ffff           call 0x45cdb0
// 0045d7ba  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0045d7be  750d                 jne 0x45d7cd
// 0045d7c0  5f                   pop edi
// 0045d7c1  5e                   pop esi
// 0045d7c2  5d                   pop ebp
// 0045d7c3  b801000000           mov eax, 1
// 0045d7c8  5b                   pop ebx
// 0045d7c9  59                   pop ecx
// 0045d7ca  c21000               ret 0x10
// 0045d7cd  5f                   pop edi
// 0045d7ce  5e                   pop esi
// 0045d7cf  5d                   pop ebp
// 0045d7d0  33c0                 xor eax, eax
// 0045d7d2  5b                   pop ebx
// 0045d7d3  59                   pop ecx
// 0045d7d4  c21000               ret 0x10
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?SameAsSelected@CScintillaView@@MAEHPBDHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
