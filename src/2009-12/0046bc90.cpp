// roc 2009-12 0046bc90  unit: Scintilla::CScintillaView  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046bc90
//
// 0046bc90  83ec18               sub esp, 0x18
// 0046bc93  53                   push ebx
// 0046bc94  56                   push esi
// 0046bc95  57                   push edi
// 0046bc96  8bf9                 mov edi, ecx
// 0046bc98  8d7758               lea esi, [edi + 0x58]
// 0046bc9b  6a01                 push 1
// 0046bc9d  8bce                 mov ecx, esi
// 0046bc9f  e8fce4ffff           call 0x46a1a0
// 0046bca4  8bd8                 mov ebx, eax
// 0046bca6  6a01                 push 1
// 0046bca8  53                   push ebx
// 0046bca9  8bce                 mov ecx, esi
// 0046bcab  e8f0e6ffff           call 0x46a3a0
// 0046bcb0  6a01                 push 1
// 0046bcb2  53                   push ebx
// 0046bcb3  8bce                 mov ecx, esi
// 0046bcb5  89442414             mov dword ptr [esp + 0x14], eax
// 0046bcb9  e822e7ffff           call 0x46a3e0
// 0046bcbe  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0046bcc1  89442410             mov dword ptr [esp + 0x10], eax
// 0046bcc5  8d44240c             lea eax, [esp + 0xc]
// 0046bcc9  50                   push eax
// 0046bcca  51                   push ecx
// 0046bccb  ff1554cc9800         call dword ptr [0x98cc54]
// 0046bcd1  a1e0b5b000           mov eax, dword ptr [0xb0b5e0]
// 0046bcd6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0046bcd9  8d542414             lea edx, [esp + 0x14]
// 0046bcdd  52                   push edx
// 0046bcde  51                   push ecx
// 0046bcdf  ff1570cc9800         call dword ptr [0x98cc70]
// 0046bce5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046bce9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046bced  52                   push edx
// 0046bcee  50                   push eax
// 0046bcef  8d4c241c             lea ecx, [esp + 0x1c]
// 0046bcf3  51                   push ecx
// 0046bcf4  ff155cca9800         call dword ptr [0x98ca5c]
// 0046bcfa  85c0                 test eax, eax
// 0046bcfc  7477                 je 0x46bd75
// 0046bcfe  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046bd02  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046bd06  8bd1                 mov edx, ecx
// 0046bd08  2b542418             sub edx, dword ptr [esp + 0x18]
// 0046bd0c  3bc2                 cmp eax, edx
// 0046bd0e  7e0f                 jle 0x46bd1f
// 0046bd10  2bc1                 sub eax, ecx
// 0046bd12  83e814               sub eax, 0x14
// 0046bd15  50                   push eax
// 0046bd16  6a00                 push 0
// 0046bd18  8d44241c             lea eax, [esp + 0x1c]
// 0046bd1c  50                   push eax
// 0046bd1d  eb2b                 jmp 0x46bd4a
// 0046bd1f  6a01                 push 1
// 0046bd21  ff15dccb9800         call dword ptr [0x98cbdc]
// 0046bd27  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046bd2b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0046bd2f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046bd33  8bf9                 mov edi, ecx
// 0046bd35  2bfe                 sub edi, esi
// 0046bd37  03fa                 add edi, edx
// 0046bd39  3bf8                 cmp edi, eax
// 0046bd3b  7d1b                 jge 0x46bd58
// 0046bd3d  2bd6                 sub edx, esi
// 0046bd3f  83c228               add edx, 0x28
// 0046bd42  52                   push edx
// 0046bd43  6a00                 push 0
// 0046bd45  8d4c241c             lea ecx, [esp + 0x1c]
// 0046bd49  51                   push ecx
// 0046bd4a  ff156ccc9800         call dword ptr [0x98cc6c]
// 0046bd50  8b742418             mov esi, dword ptr [esp + 0x18]
// 0046bd54  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046bd58  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046bd5c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0046bd60  6a01                 push 1
// 0046bd62  2bce                 sub ecx, esi
// 0046bd64  51                   push ecx
// 0046bd65  8b0de0b5b000         mov ecx, dword ptr [0xb0b5e0]
// 0046bd6b  2bd0                 sub edx, eax
// 0046bd6d  52                   push edx
// 0046bd6e  56                   push esi
// 0046bd6f  50                   push eax
// 0046bd70  e8bd7e3800           call 0x7f3c32
// 0046bd75  5f                   pop edi
// 0046bd76  5e                   pop esi
// 0046bd77  5b                   pop ebx
// 0046bd78  83c418               add esp, 0x18
// 0046bd7b  c3                   ret 
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?AdjustFindDialogPosition@CScintillaView@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
