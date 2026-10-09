// roc 2008-06 004618b0  unit: Scintilla::CScintillaView  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004618b0
//
// 004618b0  51                   push ecx
// 004618b1  53                   push ebx
// 004618b2  55                   push ebp
// 004618b3  56                   push esi
// 004618b4  57                   push edi
// 004618b5  8d7158               lea esi, [ecx + 0x58]
// 004618b8  6a01                 push 1
// 004618ba  8bce                 mov ecx, esi
// 004618bc  e8cff0ffff           call 0x460990
// 004618c1  6a01                 push 1
// 004618c3  8bce                 mov ecx, esi
// 004618c5  8bd8                 mov ebx, eax
// 004618c7  e8f4f0ffff           call 0x4609c0
// 004618cc  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004618d0  55                   push ebp
// 004618d1  89442414             mov dword ptr [esp + 0x14], eax
// 004618d5  ff15b8218000         call dword ptr [0x8021b8]
// 004618db  8bf8                 mov edi, eax
// 004618dd  8b442424             mov eax, dword ptr [esp + 0x24]
// 004618e1  85c0                 test eax, eax
// 004618e3  750a                 jne 0x4618ef
// 004618e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004618e9  2bcb                 sub ecx, ebx
// 004618eb  3bf9                 cmp edi, ecx
// 004618ed  756e                 jne 0x46195d
// 004618ef  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004618f3  f7da                 neg edx
// 004618f5  1bd2                 sbb edx, edx
// 004618f7  83e204               and edx, 4
// 004618fa  f7d8                 neg eax
// 004618fc  1bc0                 sbb eax, eax
// 004618fe  2500002000           and eax, 0x200000
// 00461903  0bd0                 or edx, eax
// 00461905  8b442420             mov eax, dword ptr [esp + 0x20]
// 00461909  f7d8                 neg eax
// 0046190b  1bc0                 sbb eax, eax
// 0046190d  83e002               and eax, 2
// 00461910  6a01                 push 1
// 00461912  0bd0                 or edx, eax
// 00461914  52                   push edx
// 00461915  8bce                 mov ecx, esi
// 00461917  e8d4f6ffff           call 0x460ff0
// 0046191c  6a01                 push 1
// 0046191e  8bce                 mov ecx, esi
// 00461920  e87bf8ffff           call 0x4611a0
// 00461925  6a01                 push 1
// 00461927  55                   push ebp
// 00461928  57                   push edi
// 00461929  8bce                 mov ecx, esi
// 0046192b  e870f6ffff           call 0x460fa0
// 00461930  85c0                 test eax, eax
// 00461932  7c29                 jl 0x46195d
// 00461934  6a01                 push 1
// 00461936  8bce                 mov ecx, esi
// 00461938  e803f6ffff           call 0x460f40
// 0046193d  3bc3                 cmp eax, ebx
// 0046193f  751c                 jne 0x46195d
// 00461941  6a01                 push 1
// 00461943  8bce                 mov ecx, esi
// 00461945  e826f6ffff           call 0x460f70
// 0046194a  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0046194e  750d                 jne 0x46195d
// 00461950  5f                   pop edi
// 00461951  5e                   pop esi
// 00461952  5d                   pop ebp
// 00461953  b801000000           mov eax, 1
// 00461958  5b                   pop ebx
// 00461959  59                   pop ecx
// 0046195a  c21000               ret 0x10
// 0046195d  5f                   pop edi
// 0046195e  5e                   pop esi
// 0046195f  5d                   pop ebp
// 00461960  33c0                 xor eax, eax
// 00461962  5b                   pop ebx
// 00461963  59                   pop ecx
// 00461964  c21000               ret 0x10
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?SameAsSelected@CScintillaView@@MAEHPBDHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
