// roc 2007-08 0045e450  unit: Scintilla::CScintillaView  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045e450
//
// 0045e450  83ec18               sub esp, 0x18
// 0045e453  53                   push ebx
// 0045e454  56                   push esi
// 0045e455  57                   push edi
// 0045e456  8bf9                 mov edi, ecx
// 0045e458  8d7758               lea esi, [edi + 0x58]
// 0045e45b  6a01                 push 1
// 0045e45d  8bce                 mov ecx, esi
// 0045e45f  e86ce3ffff           call 0x45c7d0
// 0045e464  8bd8                 mov ebx, eax
// 0045e466  6a01                 push 1
// 0045e468  53                   push ebx
// 0045e469  8bce                 mov ecx, esi
// 0045e46b  e860e5ffff           call 0x45c9d0
// 0045e470  6a01                 push 1
// 0045e472  53                   push ebx
// 0045e473  8bce                 mov ecx, esi
// 0045e475  89442414             mov dword ptr [esp + 0x14], eax
// 0045e479  e892e5ffff           call 0x45ca10
// 0045e47e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0045e481  89442410             mov dword ptr [esp + 0x10], eax
// 0045e485  8d44240c             lea eax, [esp + 0xc]
// 0045e489  50                   push eax
// 0045e48a  51                   push ecx
// 0045e48b  ff15f0ed7700         call dword ptr [0x77edf0]
// 0045e491  a174a58800           mov eax, dword ptr [0x88a574]
// 0045e496  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0045e499  8d542414             lea edx, [esp + 0x14]
// 0045e49d  52                   push edx
// 0045e49e  51                   push ecx
// 0045e49f  ff15d4ed7700         call dword ptr [0x77edd4]
// 0045e4a5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0045e4a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045e4ad  52                   push edx
// 0045e4ae  50                   push eax
// 0045e4af  8d4c241c             lea ecx, [esp + 0x1c]
// 0045e4b3  51                   push ecx
// 0045e4b4  ff1594ed7700         call dword ptr [0x77ed94]
// 0045e4ba  85c0                 test eax, eax
// 0045e4bc  7477                 je 0x45e535
// 0045e4be  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0045e4c2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045e4c6  8bd1                 mov edx, ecx
// 0045e4c8  2b542418             sub edx, dword ptr [esp + 0x18]
// 0045e4cc  3bc2                 cmp eax, edx
// 0045e4ce  7e0f                 jle 0x45e4df
// 0045e4d0  2bc1                 sub eax, ecx
// 0045e4d2  83e814               sub eax, 0x14
// 0045e4d5  50                   push eax
// 0045e4d6  6a00                 push 0
// 0045e4d8  8d44241c             lea eax, [esp + 0x1c]
// 0045e4dc  50                   push eax
// 0045e4dd  eb2b                 jmp 0x45e50a
// 0045e4df  6a01                 push 1
// 0045e4e1  ff15b8ed7700         call dword ptr [0x77edb8]
// 0045e4e7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0045e4eb  8b742418             mov esi, dword ptr [esp + 0x18]
// 0045e4ef  8b542410             mov edx, dword ptr [esp + 0x10]
// 0045e4f3  8bf9                 mov edi, ecx
// 0045e4f5  2bfe                 sub edi, esi
// 0045e4f7  03fa                 add edi, edx
// 0045e4f9  3bf8                 cmp edi, eax
// 0045e4fb  7d1b                 jge 0x45e518
// 0045e4fd  2bd6                 sub edx, esi
// 0045e4ff  83c228               add edx, 0x28
// 0045e502  52                   push edx
// 0045e503  6a00                 push 0
// 0045e505  8d4c241c             lea ecx, [esp + 0x1c]
// 0045e509  51                   push ecx
// 0045e50a  ff15d8ed7700         call dword ptr [0x77edd8]
// 0045e510  8b742418             mov esi, dword ptr [esp + 0x18]
// 0045e514  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0045e518  8b442414             mov eax, dword ptr [esp + 0x14]
// 0045e51c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0045e520  6a01                 push 1
// 0045e522  2bce                 sub ecx, esi
// 0045e524  51                   push ecx
// 0045e525  8b0d74a58800         mov ecx, dword ptr [0x88a574]
// 0045e52b  2bd0                 sub edx, eax
// 0045e52d  52                   push edx
// 0045e52e  56                   push esi
// 0045e52f  50                   push eax
// 0045e530  e8ff1a1d00           call 0x630034
// 0045e535  5f                   pop edi
// 0045e536  5e                   pop esi
// 0045e537  5b                   pop ebx
// 0045e538  83c418               add esp, 0x18
// 0045e53b  c3                   ret 
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?AdjustFindDialogPosition@CScintillaView@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
