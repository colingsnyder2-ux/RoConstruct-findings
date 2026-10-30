// roc 2010-06 0046f790  unit: Scintilla::CScintillaView  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046f790
//
// 0046f790  83ec18               sub esp, 0x18
// 0046f793  53                   push ebx
// 0046f794  56                   push esi
// 0046f795  57                   push edi
// 0046f796  8bf9                 mov edi, ecx
// 0046f798  8d7758               lea esi, [edi + 0x58]
// 0046f79b  6a01                 push 1
// 0046f79d  8bce                 mov ecx, esi
// 0046f79f  e8fce4ffff           call 0x46dca0
// 0046f7a4  8bd8                 mov ebx, eax
// 0046f7a6  6a01                 push 1
// 0046f7a8  53                   push ebx
// 0046f7a9  8bce                 mov ecx, esi
// 0046f7ab  e8f0e6ffff           call 0x46dea0
// 0046f7b0  6a01                 push 1
// 0046f7b2  53                   push ebx
// 0046f7b3  8bce                 mov ecx, esi
// 0046f7b5  89442414             mov dword ptr [esp + 0x14], eax
// 0046f7b9  e822e7ffff           call 0x46dee0
// 0046f7be  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0046f7c1  89442410             mov dword ptr [esp + 0x10], eax
// 0046f7c5  8d44240c             lea eax, [esp + 0xc]
// 0046f7c9  50                   push eax
// 0046f7ca  51                   push ecx
// 0046f7cb  ff1558bc9e00         call dword ptr [0x9ebc58]
// 0046f7d1  a1e84eb800           mov eax, dword ptr [0xb84ee8]
// 0046f7d6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0046f7d9  8d542414             lea edx, [esp + 0x14]
// 0046f7dd  52                   push edx
// 0046f7de  51                   push ecx
// 0046f7df  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 0046f7e5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046f7e9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046f7ed  52                   push edx
// 0046f7ee  50                   push eax
// 0046f7ef  8d4c241c             lea ecx, [esp + 0x1c]
// 0046f7f3  51                   push ecx
// 0046f7f4  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 0046f7fa  85c0                 test eax, eax
// 0046f7fc  7477                 je 0x46f875
// 0046f7fe  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046f802  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046f806  8bd1                 mov edx, ecx
// 0046f808  2b542418             sub edx, dword ptr [esp + 0x18]
// 0046f80c  3bc2                 cmp eax, edx
// 0046f80e  7e0f                 jle 0x46f81f
// 0046f810  2bc1                 sub eax, ecx
// 0046f812  83e814               sub eax, 0x14
// 0046f815  50                   push eax
// 0046f816  6a00                 push 0
// 0046f818  8d44241c             lea eax, [esp + 0x1c]
// 0046f81c  50                   push eax
// 0046f81d  eb2b                 jmp 0x46f84a
// 0046f81f  6a01                 push 1
// 0046f821  ff156cba9e00         call dword ptr [0x9eba6c]
// 0046f827  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046f82b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0046f82f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046f833  8bf9                 mov edi, ecx
// 0046f835  2bfe                 sub edi, esi
// 0046f837  03fa                 add edi, edx
// 0046f839  3bf8                 cmp edi, eax
// 0046f83b  7d1b                 jge 0x46f858
// 0046f83d  2bd6                 sub edx, esi
// 0046f83f  83c228               add edx, 0x28
// 0046f842  52                   push edx
// 0046f843  6a00                 push 0
// 0046f845  8d4c241c             lea ecx, [esp + 0x1c]
// 0046f849  51                   push ecx
// 0046f84a  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0046f850  8b742418             mov esi, dword ptr [esp + 0x18]
// 0046f854  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046f858  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046f85c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0046f860  6a01                 push 1
// 0046f862  2bce                 sub ecx, esi
// 0046f864  51                   push ecx
// 0046f865  8b0de84eb800         mov ecx, dword ptr [0xb84ee8]
// 0046f86b  2bd0                 sub edx, eax
// 0046f86d  52                   push edx
// 0046f86e  56                   push esi
// 0046f86f  50                   push eax
// 0046f870  e8fd843300           call 0x7a7d72
// 0046f875  5f                   pop edi
// 0046f876  5e                   pop esi
// 0046f877  5b                   pop ebx
// 0046f878  83c418               add esp, 0x18
// 0046f87b  c3                   ret 
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?AdjustFindDialogPosition@CScintillaView@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
