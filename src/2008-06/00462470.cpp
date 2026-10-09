// roc 2008-06 00462470  unit: Scintilla::CScintillaView  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00462470
//
// 00462470  83ec18               sub esp, 0x18
// 00462473  53                   push ebx
// 00462474  56                   push esi
// 00462475  57                   push edi
// 00462476  8bf9                 mov edi, ecx
// 00462478  8d7758               lea esi, [edi + 0x58]
// 0046247b  6a01                 push 1
// 0046247d  8bce                 mov ecx, esi
// 0046247f  e80ce5ffff           call 0x460990
// 00462484  8bd8                 mov ebx, eax
// 00462486  6a01                 push 1
// 00462488  53                   push ebx
// 00462489  8bce                 mov ecx, esi
// 0046248b  e800e7ffff           call 0x460b90
// 00462490  6a01                 push 1
// 00462492  53                   push ebx
// 00462493  8bce                 mov ecx, esi
// 00462495  89442414             mov dword ptr [esp + 0x14], eax
// 00462499  e832e7ffff           call 0x460bd0
// 0046249e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004624a1  89442410             mov dword ptr [esp + 0x10], eax
// 004624a5  8d44240c             lea eax, [esp + 0xc]
// 004624a9  50                   push eax
// 004624aa  51                   push ecx
// 004624ab  ff15802d8000         call dword ptr [0x802d80]
// 004624b1  a1b02f9300           mov eax, dword ptr [0x932fb0]
// 004624b6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 004624b9  8d542414             lea edx, [esp + 0x14]
// 004624bd  52                   push edx
// 004624be  51                   push ecx
// 004624bf  ff15342e8000         call dword ptr [0x802e34]
// 004624c5  8b542410             mov edx, dword ptr [esp + 0x10]
// 004624c9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004624cd  52                   push edx
// 004624ce  50                   push eax
// 004624cf  8d4c241c             lea ecx, [esp + 0x1c]
// 004624d3  51                   push ecx
// 004624d4  ff152c2d8000         call dword ptr [0x802d2c]
// 004624da  85c0                 test eax, eax
// 004624dc  7477                 je 0x462555
// 004624de  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004624e2  8b442410             mov eax, dword ptr [esp + 0x10]
// 004624e6  8bd1                 mov edx, ecx
// 004624e8  2b542418             sub edx, dword ptr [esp + 0x18]
// 004624ec  3bc2                 cmp eax, edx
// 004624ee  7e0f                 jle 0x4624ff
// 004624f0  2bc1                 sub eax, ecx
// 004624f2  83e814               sub eax, 0x14
// 004624f5  50                   push eax
// 004624f6  6a00                 push 0
// 004624f8  8d44241c             lea eax, [esp + 0x1c]
// 004624fc  50                   push eax
// 004624fd  eb2b                 jmp 0x46252a
// 004624ff  6a01                 push 1
// 00462501  ff154c2d8000         call dword ptr [0x802d4c]
// 00462507  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046250b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0046250f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00462513  8bf9                 mov edi, ecx
// 00462515  2bfe                 sub edi, esi
// 00462517  03fa                 add edi, edx
// 00462519  3bf8                 cmp edi, eax
// 0046251b  7d1b                 jge 0x462538
// 0046251d  2bd6                 sub edx, esi
// 0046251f  83c228               add edx, 0x28
// 00462522  52                   push edx
// 00462523  6a00                 push 0
// 00462525  8d4c241c             lea ecx, [esp + 0x1c]
// 00462529  51                   push ecx
// 0046252a  ff15682d8000         call dword ptr [0x802d68]
// 00462530  8b742418             mov esi, dword ptr [esp + 0x18]
// 00462534  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00462538  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046253c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00462540  6a01                 push 1
// 00462542  2bce                 sub ecx, esi
// 00462544  51                   push ecx
// 00462545  8b0db02f9300         mov ecx, dword ptr [0x932fb0]
// 0046254b  2bd0                 sub edx, eax
// 0046254d  52                   push edx
// 0046254e  56                   push esi
// 0046254f  50                   push eax
// 00462550  e8f7e42300           call 0x6a0a4c
// 00462555  5f                   pop edi
// 00462556  5e                   pop esi
// 00462557  5b                   pop ebx
// 00462558  83c418               add esp, 0x18
// 0046255b  c3                   ret 
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?AdjustFindDialogPosition@CScintillaView@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
