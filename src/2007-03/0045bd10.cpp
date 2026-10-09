// roc 2007-03 0045bd10  unit: seg_00450000  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045bd10
//
// 0045bd10  83ec18               sub esp, 0x18
// 0045bd13  53                   push ebx
// 0045bd14  56                   push esi
// 0045bd15  57                   push edi
// 0045bd16  8bf9                 mov edi, ecx
// 0045bd18  8d7758               lea esi, [edi + 0x58]
// 0045bd1b  6a01                 push 1
// 0045bd1d  8bce                 mov ecx, esi
// 0045bd1f  e83ce2ffff           call 0x459f60
// 0045bd24  8bd8                 mov ebx, eax
// 0045bd26  6a01                 push 1
// 0045bd28  53                   push ebx
// 0045bd29  8bce                 mov ecx, esi
// 0045bd2b  e830e4ffff           call 0x45a160
// 0045bd30  6a01                 push 1
// 0045bd32  53                   push ebx
// 0045bd33  8bce                 mov ecx, esi
// 0045bd35  89442414             mov dword ptr [esp + 0x14], eax
// 0045bd39  e862e4ffff           call 0x45a1a0
// 0045bd3e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0045bd41  89442410             mov dword ptr [esp + 0x10], eax
// 0045bd45  8d44240c             lea eax, [esp + 0xc]
// 0045bd49  50                   push eax
// 0045bd4a  51                   push ecx
// 0045bd4b  ff1540ed7700         call dword ptr [0x77ed40]
// 0045bd51  a15c918800           mov eax, dword ptr [0x88915c]
// 0045bd56  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0045bd59  8d542414             lea edx, [esp + 0x14]
// 0045bd5d  52                   push edx
// 0045bd5e  51                   push ecx
// 0045bd5f  ff155ced7700         call dword ptr [0x77ed5c]
// 0045bd65  8b542410             mov edx, dword ptr [esp + 0x10]
// 0045bd69  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045bd6d  52                   push edx
// 0045bd6e  50                   push eax
// 0045bd6f  8d4c241c             lea ecx, [esp + 0x1c]
// 0045bd73  51                   push ecx
// 0045bd74  ff1598ed7700         call dword ptr [0x77ed98]
// 0045bd7a  85c0                 test eax, eax
// 0045bd7c  7477                 je 0x45bdf5
// 0045bd7e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0045bd82  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045bd86  8bd1                 mov edx, ecx
// 0045bd88  2b542418             sub edx, dword ptr [esp + 0x18]
// 0045bd8c  3bc2                 cmp eax, edx
// 0045bd8e  7e0f                 jle 0x45bd9f
// 0045bd90  2bc1                 sub eax, ecx
// 0045bd92  83e814               sub eax, 0x14
// 0045bd95  50                   push eax
// 0045bd96  6a00                 push 0
// 0045bd98  8d44241c             lea eax, [esp + 0x1c]
// 0045bd9c  50                   push eax
// 0045bd9d  eb2b                 jmp 0x45bdca
// 0045bd9f  6a01                 push 1
// 0045bda1  ff15bced7700         call dword ptr [0x77edbc]
// 0045bda7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0045bdab  8b742418             mov esi, dword ptr [esp + 0x18]
// 0045bdaf  8b542410             mov edx, dword ptr [esp + 0x10]
// 0045bdb3  8bf9                 mov edi, ecx
// 0045bdb5  2bfe                 sub edi, esi
// 0045bdb7  03fa                 add edi, edx
// 0045bdb9  3bf8                 cmp edi, eax
// 0045bdbb  7d1b                 jge 0x45bdd8
// 0045bdbd  2bd6                 sub edx, esi
// 0045bdbf  83c228               add edx, 0x28
// 0045bdc2  52                   push edx
// 0045bdc3  6a00                 push 0
// 0045bdc5  8d4c241c             lea ecx, [esp + 0x1c]
// 0045bdc9  51                   push ecx
// 0045bdca  ff1558ed7700         call dword ptr [0x77ed58]
// 0045bdd0  8b742418             mov esi, dword ptr [esp + 0x18]
// 0045bdd4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0045bdd8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0045bddc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0045bde0  6a01                 push 1
// 0045bde2  2bce                 sub ecx, esi
// 0045bde4  51                   push ecx
// 0045bde5  8b0d5c918800         mov ecx, dword ptr [0x88915c]
// 0045bdeb  2bd0                 sub edx, eax
// 0045bded  52                   push edx
// 0045bdee  56                   push esi
// 0045bdef  50                   push eax
// 0045bdf0  e8c7261c00           call 0x61e4bc
// 0045bdf5  5f                   pop edi
// 0045bdf6  5e                   pop esi
// 0045bdf7  5b                   pop ebx
// 0045bdf8  83c418               add esp, 0x18
// 0045bdfb  c3                   ret 
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?AdjustFindDialogPosition@CScintillaView@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
