// roc 2011-06 0048c0d0  unit: Scintilla::CScintillaView  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048c0d0
//
// 0048c0d0  83ec18               sub esp, 0x18
// 0048c0d3  53                   push ebx
// 0048c0d4  56                   push esi
// 0048c0d5  57                   push edi
// 0048c0d6  8bf9                 mov edi, ecx
// 0048c0d8  8d7758               lea esi, [edi + 0x58]
// 0048c0db  6a01                 push 1
// 0048c0dd  8bce                 mov ecx, esi
// 0048c0df  e8cce4ffff           call 0x48a5b0
// 0048c0e4  8bd8                 mov ebx, eax
// 0048c0e6  6a01                 push 1
// 0048c0e8  53                   push ebx
// 0048c0e9  8bce                 mov ecx, esi
// 0048c0eb  e8c0e6ffff           call 0x48a7b0
// 0048c0f0  6a01                 push 1
// 0048c0f2  53                   push ebx
// 0048c0f3  8bce                 mov ecx, esi
// 0048c0f5  89442414             mov dword ptr [esp + 0x14], eax
// 0048c0f9  e8f2e6ffff           call 0x48a7f0
// 0048c0fe  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0048c101  89442410             mov dword ptr [esp + 0x10], eax
// 0048c105  8d44240c             lea eax, [esp + 0xc]
// 0048c109  50                   push eax
// 0048c10a  51                   push ecx
// 0048c10b  ff15781ca400         call dword ptr [0xa41c78]
// 0048c111  a1548cc100           mov eax, dword ptr [0xc18c54]
// 0048c116  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0048c119  8d542414             lea edx, [esp + 0x14]
// 0048c11d  52                   push edx
// 0048c11e  51                   push ecx
// 0048c11f  ff155c1ca400         call dword ptr [0xa41c5c]
// 0048c125  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048c129  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048c12d  52                   push edx
// 0048c12e  50                   push eax
// 0048c12f  8d4c241c             lea ecx, [esp + 0x1c]
// 0048c133  51                   push ecx
// 0048c134  ff15101ca400         call dword ptr [0xa41c10]
// 0048c13a  85c0                 test eax, eax
// 0048c13c  7477                 je 0x48c1b5
// 0048c13e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048c142  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048c146  8bd1                 mov edx, ecx
// 0048c148  2b542418             sub edx, dword ptr [esp + 0x18]
// 0048c14c  3bc2                 cmp eax, edx
// 0048c14e  7e0f                 jle 0x48c15f
// 0048c150  2bc1                 sub eax, ecx
// 0048c152  83e814               sub eax, 0x14
// 0048c155  50                   push eax
// 0048c156  6a00                 push 0
// 0048c158  8d44241c             lea eax, [esp + 0x1c]
// 0048c15c  50                   push eax
// 0048c15d  eb2b                 jmp 0x48c18a
// 0048c15f  6a01                 push 1
// 0048c161  ff15e019a400         call dword ptr [0xa419e0]
// 0048c167  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048c16b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0048c16f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048c173  8bf9                 mov edi, ecx
// 0048c175  2bfe                 sub edi, esi
// 0048c177  03fa                 add edi, edx
// 0048c179  3bf8                 cmp edi, eax
// 0048c17b  7d1b                 jge 0x48c198
// 0048c17d  2bd6                 sub edx, esi
// 0048c17f  83c228               add edx, 0x28
// 0048c182  52                   push edx
// 0048c183  6a00                 push 0
// 0048c185  8d4c241c             lea ecx, [esp + 0x1c]
// 0048c189  51                   push ecx
// 0048c18a  ff15601ca400         call dword ptr [0xa41c60]
// 0048c190  8b742418             mov esi, dword ptr [esp + 0x18]
// 0048c194  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048c198  8b442414             mov eax, dword ptr [esp + 0x14]
// 0048c19c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0048c1a0  6a01                 push 1
// 0048c1a2  2bce                 sub ecx, esi
// 0048c1a4  51                   push ecx
// 0048c1a5  8b0d548cc100         mov ecx, dword ptr [0xc18c54]
// 0048c1ab  2bd0                 sub edx, eax
// 0048c1ad  52                   push edx
// 0048c1ae  56                   push esi
// 0048c1af  50                   push eax
// 0048c1b0  e87be23700           call 0x80a430
// 0048c1b5  5f                   pop edi
// 0048c1b6  5e                   pop esi
// 0048c1b7  5b                   pop ebx
// 0048c1b8  83c418               add esp, 0x18
// 0048c1bb  c3                   ret 
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?AdjustFindDialogPosition@CScintillaView@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
